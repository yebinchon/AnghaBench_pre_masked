
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct esas2r_adapter {int * local_atto_ioctl; } ;
struct bin_attribute {int dummy; } ;
struct atto_ioctl {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct esas2r_adapter* FUNC_0 (struct kobject*) ;
 int FUNC_1 (int ,char*,int) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int,size_t) ;

__attribute__((used)) static ssize_t FUNC_6(struct file *VAR_3, struct kobject *VAR_4,
   struct bin_attribute *VAR_5,
   char *VAR_6, loff_t VAR_7, size_t VAR_8)
{
 struct esas2r_adapter *VAR_9 = FUNC_0(VAR_4);
 int VAR_10 = FUNC_5(sizeof(struct atto_ioctl), VAR_8);

 if (!VAR_9->local_atto_ioctl) {
  VAR_9->local_atto_ioctl = FUNC_2(sizeof(struct atto_ioctl),
           VAR_2);
  if (VAR_9->local_atto_ioctl == ((void*)0)) {
   FUNC_1(VAR_1,
       "write_hw kzalloc failed for %zu bytes",
       sizeof(struct atto_ioctl));
   return -VAR_0;
  }
 }

 FUNC_4(VAR_9->local_atto_ioctl, 0, sizeof(struct atto_ioctl));
 FUNC_3(VAR_9->local_atto_ioctl, VAR_6, VAR_10);

 return VAR_10;
}
