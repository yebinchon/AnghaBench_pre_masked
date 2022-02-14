
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int function; int address; int idx; int offset; } ;
struct TYPE_4__ {TYPE_1__ e1; } ;
struct uea_softc {TYPE_2__ cmv_dsc; } ;
struct cmv_e1 {int bFunction; int dwData; void* wOffsetAddress; int dwSymbolicAddress; void* wIndex; int bDirection; void* wPreamble; } ;
typedef int cmv ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct uea_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct uea_softc*,int ,int ,int,struct cmv_e1*) ;
 int FUNC_12 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_13 (struct uea_softc*) ;

__attribute__((used)) static int FUNC_14(struct uea_softc *VAR_4,
  u8 VAR_5, u32 VAR_6, u16 VAR_7, u32 VAR_8)
{
 struct cmv_e1 VAR_9;
 int VAR_10;

 FUNC_9(FUNC_6(VAR_4));
 FUNC_12(FUNC_6(VAR_4), "Function : %d-%d, Address : %c%c%c%c, "
   "offset : 0x%04x, data : 0x%08x\n",
   FUNC_1(VAR_5),
   FUNC_0(VAR_5),
   FUNC_2(VAR_6), FUNC_3(VAR_6),
   FUNC_4(VAR_6),
   FUNC_5(VAR_6), VAR_7, VAR_8);


 VAR_4->cmv_dsc.e1.function = VAR_5 | 0x2;
 VAR_4->cmv_dsc.e1.idx++;
 VAR_4->cmv_dsc.e1.address = VAR_6;
 VAR_4->cmv_dsc.e1.offset = VAR_7;

 VAR_9.wPreamble = FUNC_7(VAR_1);
 VAR_9.bDirection = VAR_0;
 VAR_9.bFunction = VAR_5;
 VAR_9.wIndex = FUNC_7(VAR_4->cmv_dsc.e1.idx);
 FUNC_8(VAR_6, &VAR_9.dwSymbolicAddress);
 VAR_9.wOffsetAddress = FUNC_7(VAR_7);
 FUNC_8(VAR_8 >> 16 | VAR_8 << 16, &VAR_9.dwData);

 VAR_10 = FUNC_11(VAR_4, VAR_2, VAR_3,
       sizeof(VAR_9), &VAR_9);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_10 = FUNC_13(VAR_4);
 FUNC_10(FUNC_6(VAR_4));
 return VAR_10;
}
