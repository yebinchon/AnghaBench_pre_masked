
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_usb {int flags; scalar_t__ saved_v_ulpi; int v_ape; int dev; int v_ulpi; int v_musb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ab8500_usb *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1->v_musb);

 FUNC_1(VAR_1->v_ulpi);


 if (VAR_1->flags & VAR_0) {
  if (VAR_1->saved_v_ulpi > 0) {
   VAR_2 = FUNC_3(VAR_1->v_ulpi,
     VAR_1->saved_v_ulpi, VAR_1->saved_v_ulpi);
   if (VAR_2 < 0)
    FUNC_0(VAR_1->dev, "Failed to set the Vintcore to %duV, ret=%d\n",
      VAR_1->saved_v_ulpi, VAR_2);
  }

  VAR_2 = FUNC_2(VAR_1->v_ulpi, 0);
  if (VAR_2 < 0)
   FUNC_0(VAR_1->dev, "Failed to set optimum mode (ret=%d)\n",
     VAR_2);
 }

 FUNC_1(VAR_1->v_ape);
}
