
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int dummy; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct urb*) ;
 int FUNC_1 (struct usbtest_dev*,struct urb*,int,int ,int ,char const*) ;
 int FUNC_2 (struct usbtest_dev*) ;
 struct urb* FUNC_3 (int ,int,unsigned int,unsigned int,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(
 struct usbtest_dev *VAR_2,
 int VAR_3,
 unsigned VAR_4,
 int VAR_5,
 unsigned VAR_6,
 const char *VAR_7)
{
 int VAR_8;
 struct urb *VAR_9 = FUNC_3(FUNC_2(VAR_2),
   VAR_3, VAR_4, VAR_6, 1, 0, VAR_1);

 if (!VAR_9)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_2, VAR_9, VAR_5, 0, 0, VAR_7);
 FUNC_0(VAR_9);
 return VAR_8;
}
