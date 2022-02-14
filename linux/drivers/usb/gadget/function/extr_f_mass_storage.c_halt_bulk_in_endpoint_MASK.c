
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsg_dev {int bulk_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fsg_dev*,char*) ;
 int FUNC_1 (struct fsg_dev*,char*,int) ;
 int FUNC_2 (struct fsg_dev*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct fsg_dev *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_2->bulk_in);
 if (VAR_3 == -VAR_0)
  FUNC_0(VAR_2, "delayed bulk-in endpoint halt\n");
 while (VAR_3 != 0) {
  if (VAR_3 != -VAR_0) {
   FUNC_1(VAR_2, "usb_ep_set_halt -> %d\n", VAR_3);
   VAR_3 = 0;
   break;
  }


  if (FUNC_3(100) != 0)
   return -VAR_1;
  VAR_3 = FUNC_4(VAR_2->bulk_in);
 }
 return VAR_3;
}
