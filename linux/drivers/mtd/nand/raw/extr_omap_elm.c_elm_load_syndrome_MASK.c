
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct elm_info {int ecc_steps; int bch_type; int ecc_syndrome_size; } ;
struct elm_errorvec {scalar_t__ error_reported; } ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct elm_info*,int,int) ;
 int FUNC_2 (struct elm_info*,int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct elm_info *VAR_2,
  struct elm_errorvec *VAR_3, u8 *VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;

 for (VAR_5 = 0; VAR_5 < VAR_2->ecc_steps; VAR_5++) {


  if (VAR_3[VAR_5].error_reported) {
   FUNC_1(VAR_2, VAR_5, 1);
   VAR_6 = VAR_0 +
    VAR_1 * VAR_5;
   switch (VAR_2->bch_type) {
   case 128:

    VAR_7 = FUNC_0(*(u32 *) &VAR_4[9]);
    FUNC_2(VAR_2, VAR_6, VAR_7);


    VAR_6 += 4;
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[5]);
    FUNC_2(VAR_2, VAR_6, VAR_7);


    VAR_6 += 4;
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[1]);
    FUNC_2(VAR_2, VAR_6, VAR_7);


    VAR_6 += 4;
    VAR_7 = VAR_4[0];
    FUNC_2(VAR_2, VAR_6, VAR_7);
    break;
   case 129:

    VAR_7 = (FUNC_0(*(u32 *) &VAR_4[3]) >> 4) |
     ((VAR_4[2] & 0xf) << 28);
    FUNC_2(VAR_2, VAR_6, VAR_7);


    VAR_6 += 4;
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[0]) >> 12;
    FUNC_2(VAR_2, VAR_6, VAR_7);
    break;
   case 130:
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[22]);
    FUNC_2(VAR_2, VAR_6, VAR_7);
    VAR_6 += 4;
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[18]);
    FUNC_2(VAR_2, VAR_6, VAR_7);
    VAR_6 += 4;
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[14]);
    FUNC_2(VAR_2, VAR_6, VAR_7);
    VAR_6 += 4;
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[10]);
    FUNC_2(VAR_2, VAR_6, VAR_7);
    VAR_6 += 4;
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[6]);
    FUNC_2(VAR_2, VAR_6, VAR_7);
    VAR_6 += 4;
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[2]);
    FUNC_2(VAR_2, VAR_6, VAR_7);
    VAR_6 += 4;
    VAR_7 = FUNC_0(*(u32 *) &VAR_4[0]) >> 16;
    FUNC_2(VAR_2, VAR_6, VAR_7);
    break;
   default:
    FUNC_3("invalid config bch_type\n");
   }
  }


  VAR_4 += VAR_2->ecc_syndrome_size;
 }
}
