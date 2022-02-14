
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,int,...) ;

__attribute__((used)) static int FUNC_3(uint8_t *VAR_0)
{
 int VAR_1, VAR_2;
 int VAR_3[2] = {6, 11};
 int VAR_4;
 int VAR_5 = 0;






 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {
  VAR_1 = ((int)VAR_0[VAR_3[VAR_4]] << 8) |
   VAR_0[VAR_3[VAR_4]+1];


  if ((VAR_1 & ~0x7FF) == 0x1000) {
   VAR_2 = VAR_1 & 0x01;
   VAR_1 &= 0x7FF;
   VAR_1 >>= 1;

   if (FUNC_1(VAR_1, 10) != VAR_2) {
    FUNC_2("SSFDC_RO: logical address field%d"
     "parity error(0x%04X)\n", VAR_4+1,
     VAR_1);
   } else {
    VAR_5 = 1;
    break;
   }
  }
 }

 if (!VAR_5)
  VAR_1 = -2;

 FUNC_2("SSFDC_RO: get_logical_address() %d\n",
  VAR_1);

 return VAR_1;
}
