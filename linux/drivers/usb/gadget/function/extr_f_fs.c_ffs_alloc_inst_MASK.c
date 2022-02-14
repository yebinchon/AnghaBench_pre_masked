
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int group; int free_func_inst; int set_inst_name; } ;
struct ffs_dev {struct f_fs_opts* opts; } ;
struct f_fs_opts {struct usb_function_instance func_inst; struct ffs_dev* dev; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (struct ffs_dev*) ;
 struct usb_function_instance* FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ffs_dev*) ;
 struct ffs_dev* FUNC_3 () ;
 int FUNC_4 (int *,char*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct f_fs_opts*) ;
 struct f_fs_opts* FUNC_8 (int,int ) ;

__attribute__((used)) static struct usb_function_instance *FUNC_9(void)
{
 struct f_fs_opts *VAR_5;
 struct ffs_dev *VAR_6;

 VAR_5 = FUNC_8(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_5->func_inst.set_inst_name = VAR_4;
 VAR_5->func_inst.free_func_inst = VAR_2;
 FUNC_5();
 VAR_6 = FUNC_3();
 FUNC_6();
 if (FUNC_2(VAR_6)) {
  FUNC_7(VAR_5);
  return FUNC_0(VAR_6);
 }
 VAR_5->dev = VAR_6;
 VAR_6->opts = VAR_5;

 FUNC_4(&VAR_5->func_inst.group, "",
        &VAR_3);
 return &VAR_5->func_inst;
}
