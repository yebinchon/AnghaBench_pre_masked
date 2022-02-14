
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_usb {int flags; scalar_t__ saved_v_ulpi; int dev; int v_musb; int v_ulpi; int v_ape; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct ab8500_usb *VAR_1)
{
 int VAR_2, VAR_3;

 VAR_2 = FUNC_1(VAR_1->v_ape);
 if (VAR_2)
  FUNC_0(VAR_1->dev, "Failed to enable v-ape\n");

 if (VAR_1->flags & VAR_0) {
  VAR_1->saved_v_ulpi = FUNC_2(VAR_1->v_ulpi);
  if (VAR_1->saved_v_ulpi < 0)
   FUNC_0(VAR_1->dev, "Failed to get v_ulpi voltage\n");

  VAR_2 = FUNC_4(VAR_1->v_ulpi, 1300000, 1350000);
  if (VAR_2 < 0)
   FUNC_0(VAR_1->dev, "Failed to set the Vintcore to 1.3V, ret=%d\n",
     VAR_2);

  VAR_2 = FUNC_3(VAR_1->v_ulpi, 28000);
  if (VAR_2 < 0)
   FUNC_0(VAR_1->dev, "Failed to set optimum mode (ret=%d)\n",
     VAR_2);
 }

 VAR_2 = FUNC_1(VAR_1->v_ulpi);
 if (VAR_2)
  FUNC_0(VAR_1->dev, "Failed to enable vddulpivio18\n");

 if (VAR_1->flags & VAR_0) {
  VAR_3 = FUNC_2(VAR_1->v_ulpi);
  if ((VAR_3 != 1300000) && (VAR_3 != 1350000))
   FUNC_0(VAR_1->dev, "Vintcore is not set to 1.3V volt=%d\n",
     VAR_3);
 }

 VAR_2 = FUNC_1(VAR_1->v_musb);
 if (VAR_2)
  FUNC_0(VAR_1->dev, "Failed to enable musb_1v8\n");
}
