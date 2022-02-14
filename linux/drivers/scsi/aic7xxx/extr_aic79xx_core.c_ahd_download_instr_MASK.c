
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ins_format1 {int opcode; int parity; size_t immediate; } ;
struct ins_format3 {int address; } ;
union ins_formats {int integer; int bytes; struct ins_format1 format1; struct ins_format3 format3; } ;
typedef size_t uint8_t ;
typedef int uint32_t ;
typedef int u_int ;
struct ahd_softc {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ahd_softc*,int ,int ,int) ;
 int FUNC_3 (struct ahd_softc*,int ) ;
 int FUNC_4 (char*) ;
 int * VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct ahd_softc *VAR_2, u_int VAR_3, uint8_t *VAR_4)
{
 union ins_formats VAR_5;
 struct ins_format1 *VAR_6;
 struct ins_format3 *VAR_7;
 u_int VAR_8;




 VAR_5.integer = FUNC_1(*(uint32_t*)&VAR_1[VAR_3 * 4]);

 VAR_6 = &VAR_5.format1;
 VAR_7 = ((void*)0);


 VAR_8 = VAR_5.format1.opcode;
 switch (VAR_8) {
 case 135:
 case 137:
 case 134:
 case 138:
 case 133:
 case 132:
 case 136:
 case 131:
 {
  VAR_7 = &VAR_5.format3;
  VAR_7->address = FUNC_3(VAR_2, VAR_7->address);
 }

 case 130:
 case 140:
 case 128:
 case 141:
 case 142:
 case 139:
  if (VAR_6->parity != 0) {
   VAR_6->immediate = VAR_4[VAR_6->immediate];
  }
  VAR_6->parity = 0;

 case 129:
 {
  int VAR_9, VAR_10;


  for (VAR_9 = 0, VAR_10 = 0; VAR_9 < 31; VAR_9++) {
   uint32_t VAR_11;

   VAR_11 = 0x01 << VAR_9;
   if ((VAR_5.integer & VAR_11) != 0)
    VAR_10++;
  }
  if ((VAR_10 & 0x01) == 0)
   VAR_5.format1.parity = 1;


  VAR_5.integer = FUNC_0(VAR_5.integer);
  FUNC_2(VAR_2, VAR_0, VAR_5.bytes, 4);
  break;
 }
 default:
  FUNC_4("Unknown opcode encountered in seq program");
  break;
 }
}
