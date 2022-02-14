
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {scalar_t__ pldm; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hl_device*) ;
 int FUNC_3 (struct hl_device*) ;
 int FUNC_4 (struct hl_device*) ;
 int FUNC_5 (struct hl_device*) ;
 int FUNC_6 (struct hl_device*) ;
 int FUNC_7 (struct hl_device*) ;
 int FUNC_8 (struct hl_device*) ;
 int FUNC_9 (struct hl_device*) ;
 int FUNC_10 (struct hl_device*) ;
 int FUNC_11 (struct hl_device*) ;
 int FUNC_12 (struct hl_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct hl_device *VAR_7, bool VAR_8)
{
 u32 VAR_9, VAR_10;

 FUNC_1(VAR_7->dev,
  "Halting compute engines and disabling interrupts\n");

 if (VAR_7->pldm) {
  VAR_9 = VAR_2;
  VAR_10 = VAR_2;
 } else {
  VAR_9 = VAR_3;
  VAR_10 = VAR_1;
 }

 if (VAR_8) {




  FUNC_0(VAR_6, VAR_4);
  FUNC_0(VAR_5,
   VAR_0);
  FUNC_13(VAR_10);
 }

 FUNC_9(VAR_7);
 FUNC_10(VAR_7);

 FUNC_13(VAR_9);

 FUNC_6(VAR_7);
 FUNC_12(VAR_7);
 FUNC_7(VAR_7);

 FUNC_13(VAR_9);

 FUNC_2(VAR_7);
 FUNC_3(VAR_7);

 FUNC_5(VAR_7);

 if (VAR_8) {
  FUNC_4(VAR_7);
  FUNC_8(VAR_7);
 } else {
  FUNC_11(VAR_7);
 }
}
