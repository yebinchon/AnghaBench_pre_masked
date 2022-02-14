
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int dummy; } ;


 int FUNC_0 (struct usbtest_dev*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct usbtest_dev *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = 0;


 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, 1);
 if (!VAR_3)
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2, 0);
 return VAR_3;
}
