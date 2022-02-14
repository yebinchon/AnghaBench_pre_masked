
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int requires_esl; scalar_t__ mem_ptr; int pcidev; } ;
typedef TYPE_1__ ips_ha_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(ips_ha_t * VAR_9)
{
 uint32_t VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12;
 uint32_t VAR_13;
 int VAR_14;

 FUNC_2("ips_init_morpheus", 1);


 for (VAR_14 = 0; VAR_14 < 45; VAR_14++) {
  VAR_12 = FUNC_3(VAR_9->mem_ptr + VAR_4);

  if (VAR_12 & VAR_0)
   break;


  FUNC_1(VAR_3);
 }

 if (VAR_14 >= 45) {

  FUNC_0(VAR_8, VAR_9->pcidev,
      "timeout waiting for post.\n");

  return (0);
 }

 VAR_10 = FUNC_3(VAR_9->mem_ptr + VAR_5);

 if (VAR_10 == 0x4F00) {
  FUNC_0(VAR_8, VAR_9->pcidev,
      "Flashing Battery PIC, Please wait ...\n");


  VAR_12 = (uint32_t) VAR_0;
  FUNC_4(VAR_12, VAR_9->mem_ptr + VAR_4);

  for (VAR_14 = 0; VAR_14 < 120; VAR_14++) {
   VAR_10 = FUNC_3(VAR_9->mem_ptr + VAR_5);
   if (VAR_10 != 0x4F00)
    break;

   FUNC_1(VAR_3);
  }

  if (VAR_14 >= 120) {
   FUNC_0(VAR_8, VAR_9->pcidev,
       "timeout waiting for Battery PIC Flash\n");
   return (0);
  }

 }


 VAR_12 = (uint32_t) VAR_0;
 FUNC_4(VAR_12, VAR_9->mem_ptr + VAR_4);

 if (VAR_10 < (VAR_2 << 8)) {
  FUNC_0(VAR_8, VAR_9->pcidev,
      "reset controller fails (post status %x).\n", VAR_10);

  return (0);
 }


 for (VAR_14 = 0; VAR_14 < 240; VAR_14++) {
  VAR_12 = FUNC_3(VAR_9->mem_ptr + VAR_4);

  if (VAR_12 & VAR_1)
   break;


  FUNC_1(VAR_3);
 }

 if (VAR_14 >= 240) {

  FUNC_0(VAR_8, VAR_9->pcidev,
      "timeout waiting for config.\n");

  return (0);
 }

 VAR_11 = FUNC_3(VAR_9->mem_ptr + VAR_6);


 VAR_12 = (uint32_t) VAR_1;
 FUNC_4(VAR_12, VAR_9->mem_ptr + VAR_4);


 VAR_13 = FUNC_3(VAR_9->mem_ptr + VAR_7);
 VAR_13 &= ~0x8;
 FUNC_4(VAR_13, VAR_9->mem_ptr + VAR_7);




 if (VAR_10 == 0xEF10) {
  if ((VAR_11 == 0x000F) || (VAR_11 == 0x0009))
   VAR_9->requires_esl = 1;
 }

 return (1);
}
