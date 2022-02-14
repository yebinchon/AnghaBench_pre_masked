
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceu_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ceu_device*,int ) ;
 int FUNC_1 (struct ceu_device*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct ceu_device *VAR_5)
{
 unsigned int VAR_6;

 FUNC_1(VAR_5, VAR_0, VAR_1);

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  if (!(FUNC_0(VAR_5, VAR_3) & VAR_2))
   break;
  FUNC_3(1);
 }

 if (VAR_6 == 100) {
  FUNC_2(VAR_5->dev, "soft reset time out\n");
  return -VAR_4;
 }

 for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
  if (!(FUNC_0(VAR_5, VAR_0) & VAR_1))
   return 0;
  FUNC_3(1);
 }


 return -VAR_4;
}
