
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au0828_dev {int dev_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct au0828_dev *VAR_4)
{
 if (FUNC_1(VAR_0, &VAR_4->dev_state)) {
  FUNC_0("v4l2 ioctl: device not present\n");
  return -VAR_3;
 }

 if (FUNC_1(VAR_1, &VAR_4->dev_state)) {
  FUNC_0("v4l2 ioctl: device is misconfigured; close and open it again\n");
  return -VAR_2;
 }
 return 0;
}
