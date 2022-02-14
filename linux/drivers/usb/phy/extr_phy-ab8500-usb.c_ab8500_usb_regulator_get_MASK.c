
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_usb {void* v_musb; int dev; void* v_ulpi; void* v_ape; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct ab8500_usb *VAR_0)
{
 int VAR_1;

 VAR_0->v_ape = FUNC_3(VAR_0->dev, "v-ape");
 if (FUNC_0(VAR_0->v_ape)) {
  FUNC_2(VAR_0->dev, "Could not get v-ape supply\n");
  VAR_1 = FUNC_1(VAR_0->v_ape);
  return VAR_1;
 }

 VAR_0->v_ulpi = FUNC_3(VAR_0->dev, "vddulpivio18");
 if (FUNC_0(VAR_0->v_ulpi)) {
  FUNC_2(VAR_0->dev, "Could not get vddulpivio18 supply\n");
  VAR_1 = FUNC_1(VAR_0->v_ulpi);
  return VAR_1;
 }

 VAR_0->v_musb = FUNC_3(VAR_0->dev, "musb_1v8");
 if (FUNC_0(VAR_0->v_musb)) {
  FUNC_2(VAR_0->dev, "Could not get musb_1v8 supply\n");
  VAR_1 = FUNC_1(VAR_0->v_musb);
  return VAR_1;
 }

 return 0;
}
