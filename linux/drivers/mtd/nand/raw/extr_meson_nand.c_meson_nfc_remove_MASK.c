
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct meson_nfc {int dummy; } ;


 int FUNC_0 (struct meson_nfc*) ;
 int FUNC_1 (struct meson_nfc*) ;
 struct meson_nfc* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct meson_nfc *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_0(VAR_1);

 FUNC_3(VAR_0, ((void*)0));

 return 0;
}
