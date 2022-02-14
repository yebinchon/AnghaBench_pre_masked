
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct MT2063_AvoidSpursData_t {int f_LO1; int f_LO2; int f_out; int f_out_bw; int f_zif_bw; int maxH1; } ;
typedef int s32 ;


 int FUNC_0 (int const,int const) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int const,int const) ;
 int FUNC_3 (int,int const) ;

__attribute__((used)) static u32 FUNC_4(struct MT2063_AvoidSpursData_t *VAR_1,
   u32 *VAR_2, u32 * VAR_3)
{



 u32 VAR_4, VAR_5;
 const u32 VAR_6 = VAR_1->f_LO1;
 const u32 VAR_7 = VAR_1->f_LO2;
 const u32 VAR_8 = VAR_1->f_out + VAR_1->f_out_bw / 2;
 const u32 VAR_9 = VAR_8 - VAR_1->f_out_bw;
 const u32 VAR_10 = VAR_1->f_zif_bw / 2;
 const u32 VAR_11 = (VAR_6 / (VAR_0 / 2 / VAR_1->maxH1)) + 1;
 s32 VAR_12, VAR_13;
 s32 VAR_14;
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 u32 VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;

 FUNC_1(2, "\n");

 *VAR_2 = 0;






 VAR_21 = FUNC_2(VAR_6, VAR_7);
 VAR_22 = FUNC_3((u32) FUNC_2(VAR_21, VAR_8), VAR_11);
 VAR_25 = VAR_22 / 2;
 VAR_23 = FUNC_3((u32) FUNC_2(VAR_21, VAR_9), VAR_11);
 VAR_27 = VAR_23 / 2;
 VAR_24 = FUNC_3((u32) FUNC_2(VAR_21, VAR_10), VAR_11);
 VAR_26 = VAR_24 / 2;

 VAR_5 = FUNC_0(VAR_7 - VAR_8, VAR_6 - VAR_7);


 for (VAR_4 = VAR_5; VAR_4 <= VAR_1->maxH1; ++VAR_4) {
  VAR_18 = (VAR_4 * ((VAR_6 + VAR_25) / VAR_22) -
        ((VAR_8 + VAR_25) / VAR_22)) / ((VAR_7 + VAR_25) / VAR_22);


  if (VAR_18 >= VAR_1->maxH1)
   break;

  VAR_15 = (VAR_4 * ((VAR_6 + VAR_25) / VAR_22) +
        ((VAR_8 + VAR_25) / VAR_22)) / ((VAR_7 + VAR_25) / VAR_22);


  if (VAR_18 == VAR_15)
   continue;

  VAR_17 = (VAR_4 * ((VAR_6 + VAR_27) / VAR_23) -
        ((VAR_9 + VAR_27) / VAR_23)) / ((VAR_7 + VAR_27) / VAR_23);
  if (VAR_17 != VAR_18) {
   VAR_12 = (s32) (VAR_4 * (VAR_6 / VAR_23));
   VAR_13 = (s32) (VAR_17 * (VAR_7 / VAR_23));
   VAR_14 =
       (VAR_23 * (VAR_12 - VAR_13)) +
       VAR_4 * (VAR_6 % VAR_23) - VAR_17 * (VAR_7 % VAR_23);

   *VAR_3 = ((VAR_14 - (s32) VAR_9) / (VAR_17 - VAR_4)) + 1;
   *VAR_2 = (((s32) VAR_8 - VAR_14) / (VAR_17 - VAR_4)) + 1;
   return 1;
  }


  VAR_19 = (VAR_4 * ((VAR_6 + VAR_26) / VAR_24) +
        ((VAR_10 + VAR_26) / VAR_24)) / ((VAR_7 + VAR_26) / VAR_24);
  VAR_20 = (VAR_4 * ((VAR_6 + VAR_26) / VAR_24) -
        ((VAR_10 + VAR_26) / VAR_24)) / ((VAR_7 + VAR_26) / VAR_24);
  if (VAR_19 != VAR_20) {
   VAR_12 = VAR_4 * (VAR_6 / VAR_24);
   VAR_13 = VAR_19 * (VAR_7 / VAR_24);
   VAR_14 =
       (VAR_24 * (VAR_12 - VAR_13)) +
       VAR_4 * (VAR_6 % VAR_24) - VAR_19 * (VAR_7 % VAR_24);

   *VAR_3 = ((VAR_14 + (s32) VAR_10) / (VAR_19 - VAR_4)) + 1;
   *VAR_2 = (((s32) VAR_10 - VAR_14) / (VAR_19 - VAR_4)) + 1;
   return 1;
  }

  VAR_16 = (VAR_4 * ((VAR_6 + VAR_27) / VAR_23) +
        ((VAR_9 + VAR_27) / VAR_23)) / ((VAR_7 + VAR_27) / VAR_23);
  if (VAR_15 != VAR_16) {
   VAR_12 = VAR_4 * (VAR_6 / VAR_23);
   VAR_13 = VAR_15 * (VAR_7 / VAR_23);
   VAR_14 =
       (VAR_23 * (VAR_12 - VAR_13)) +
       VAR_4 * (VAR_6 % VAR_23) - VAR_15 * (VAR_7 % VAR_23);

   *VAR_3 = (((s32) VAR_8 + VAR_14) / (VAR_15 - VAR_4)) + 1;
   *VAR_2 = (-(VAR_14 + (s32) VAR_9) / (VAR_15 - VAR_4)) + 1;
   return 1;
  }
 }


 return 0;
}
