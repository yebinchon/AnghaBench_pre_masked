
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cx231xx {int state; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct cx231xx *VAR_2)
{
 if (VAR_2->state & VAR_0) {
  FUNC_0(VAR_2->dev, "v4l2 ioctl: device not present\n");
  return -VAR_1;
 }
 return 0;
}
