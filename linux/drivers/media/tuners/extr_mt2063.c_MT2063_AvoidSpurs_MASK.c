
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct MT2063_AvoidSpursData_t {int bSpurAvoided; int nSpursFound; scalar_t__ maxH1; int bSpurPresent; int f_LO1; int f_in; int f_LO2; scalar_t__ f_out_bw; scalar_t__ f_if1_bw; int f_if1_Center; } ;


 void* FUNC_0 (struct MT2063_AvoidSpursData_t*,int*,int*) ;
 int FUNC_1 (struct MT2063_AvoidSpursData_t*,int,int) ;
 int FUNC_2 (struct MT2063_AvoidSpursData_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static u32 FUNC_4(struct MT2063_AvoidSpursData_t *VAR_3)
{
 int VAR_4 = 0;
 u32 VAR_5, VAR_6;
 VAR_3->bSpurAvoided = 0;
 VAR_3->nSpursFound = 0;

 FUNC_3(2, "\n");

 if (VAR_3->maxH1 == 0)
  return 0;
 VAR_3->bSpurPresent = FUNC_0(VAR_3, &VAR_5, &VAR_6);
 if (VAR_3->bSpurPresent) {
  u32 VAR_7 = VAR_3->f_LO1 - VAR_3->f_in;
  u32 VAR_8 = VAR_3->f_LO1;
  u32 VAR_9 = VAR_3->f_LO2;
  u32 VAR_10;
  u32 VAR_11;




  do {
   VAR_3->nSpursFound++;


   FUNC_1(VAR_3, VAR_7 - VAR_5, VAR_7 + VAR_6);


   VAR_11 = FUNC_2(VAR_3);

   if (VAR_11 > VAR_7) {
    VAR_3->f_LO1 += (VAR_11 - VAR_7);
    VAR_3->f_LO2 += (VAR_11 - VAR_7);
   } else {
    VAR_3->f_LO1 -= (VAR_7 - VAR_11);
    VAR_3->f_LO2 -= (VAR_7 - VAR_11);
   }
   VAR_7 = VAR_11;

   if (VAR_7 > VAR_3->f_if1_Center)
    VAR_10 = VAR_7 - VAR_3->f_if1_Center;
   else
    VAR_10 = VAR_3->f_if1_Center - VAR_7;

   VAR_3->bSpurPresent = FUNC_0(VAR_3, &VAR_5, &VAR_6);




  } while ((2 * VAR_10 + VAR_3->f_out_bw <= VAR_3->f_if1_bw) && VAR_3->bSpurPresent);






  if (VAR_3->bSpurPresent == 1) {
   VAR_4 |= VAR_1;
   VAR_3->f_LO1 = VAR_8;
   VAR_3->f_LO2 = VAR_9;
  } else
   VAR_3->bSpurAvoided = 1;
 }

 VAR_4 |=
     ((VAR_3->
       nSpursFound << VAR_2) & VAR_0);

 return VAR_4;
}
