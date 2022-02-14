
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct flash_spec {int config1; int strapping; int config2; int config3; int write1; int total_size; } ;
struct bnx2 {int flash_size; struct flash_spec const* flash_info; } ;


 int FUNC_0 (struct flash_spec*) ;
 scalar_t__ FUNC_1 (struct bnx2*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bnx2*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct bnx2*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct bnx2*) ;
 int FUNC_5 (struct bnx2*) ;
 int FUNC_6 (struct bnx2*) ;
 int FUNC_7 (struct bnx2*) ;
 int FUNC_8 (struct bnx2*,int ) ;
 struct flash_spec const VAR_10 ;
 struct flash_spec* VAR_11 ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int
FUNC_10(struct bnx2 *VAR_12)
{
 u32 VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;
 const struct flash_spec *VAR_17;

 if (FUNC_1(VAR_12) == VAR_0) {
  VAR_12->flash_info = &VAR_10;
  goto get_flash_size;
 }


 VAR_13 = FUNC_2(VAR_12, VAR_1);

 VAR_15 = FUNC_0(VAR_11);

 if (VAR_13 & 0x40000000) {


  for (VAR_14 = 0, VAR_17 = &VAR_11[0]; VAR_14 < VAR_15;
       VAR_14++, VAR_17++) {
   if ((VAR_13 & VAR_8) ==
       (VAR_17->config1 & VAR_8)) {
    VAR_12->flash_info = VAR_17;
    break;
   }
  }
 }
 else {
  u32 VAR_18;


  if (VAR_13 & (1 << 23))
   VAR_18 = VAR_8;
  else
   VAR_18 = VAR_9;

  for (VAR_14 = 0, VAR_17 = &VAR_11[0]; VAR_14 < VAR_15;
   VAR_14++, VAR_17++) {

   if ((VAR_13 & VAR_18) == (VAR_17->strapping & VAR_18)) {
    VAR_12->flash_info = VAR_17;


    if ((VAR_16 = FUNC_4(VAR_12)) != 0)
     return VAR_16;


    FUNC_6(VAR_12);


    FUNC_3(VAR_12, VAR_1, VAR_17->config1);
    FUNC_3(VAR_12, VAR_2, VAR_17->config2);
    FUNC_3(VAR_12, VAR_3, VAR_17->config3);
    FUNC_3(VAR_12, VAR_4, VAR_17->write1);


    FUNC_5(VAR_12);
    FUNC_7(VAR_12);

    break;
   }
  }
 }

 if (VAR_14 == VAR_15) {
  VAR_12->flash_info = ((void*)0);
  FUNC_9("Unknown flash/EEPROM type\n");
  return -VAR_7;
 }

get_flash_size:
 VAR_13 = FUNC_8(VAR_12, VAR_6);
 VAR_13 &= VAR_5;
 if (VAR_13)
  VAR_12->flash_size = VAR_13;
 else
  VAR_12->flash_size = VAR_12->flash_info->total_size;

 return VAR_16;
}
