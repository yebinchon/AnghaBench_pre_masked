
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl8xxxu_priv {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*,int ,int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(struct rtl8xxxu_priv *VAR_3)
{
 u32 VAR_4;
 int VAR_5 = 0;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 VAR_4 |= VAR_0;
 FUNC_2(VAR_3, VAR_2, VAR_4);

 for (VAR_6 = 500; VAR_6; VAR_6--) {
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  if (!(VAR_4 & VAR_0))
   break;
  FUNC_3(2, 4);
 }

 if (!VAR_6) {
  VAR_5 = -VAR_1;
  FUNC_0(&VAR_3->udev->dev, "LLT table init failed\n");
 }

 return VAR_5;
}
