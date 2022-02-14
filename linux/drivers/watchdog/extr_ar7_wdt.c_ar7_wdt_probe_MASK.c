
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int ) ;
 int VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct platform_device*,int ,char*) ;
 int FUNC_10 (char*) ;
 int VAR_5 ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 int VAR_8;

 VAR_1 =
  FUNC_9(VAR_7, VAR_0, "regs");
 VAR_2 = FUNC_7(&VAR_7->dev, VAR_1);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_6 = FUNC_5(((void*)0), "vbus");
 if (FUNC_0(VAR_6)) {
  FUNC_10("could not get vbus clock\n");
  return FUNC_1(VAR_6);
 }

 FUNC_2();
 FUNC_3(VAR_5);
 FUNC_4(VAR_4);

 VAR_8 = FUNC_8(&VAR_3);
 if (VAR_8) {
  FUNC_10("unable to register misc device\n");
  goto out;
 }
 return 0;

out:
 FUNC_6(VAR_6);
 VAR_6 = ((void*)0);
 return VAR_8;
}
