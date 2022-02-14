
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct MT2063_AvoidSpursData_t {int f_ref; int f_if1_Center; int f_if1_bw; int f_in; int f_LO1_FracN_Avoid; int f_out; int f_LO2_FracN_Avoid; int avoidDECT; int * freeZones; int * usedZones; scalar_t__ nZones; } ;


 int FUNC_0 (struct MT2063_AvoidSpursData_t*,int,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static void FUNC_4(struct MT2063_AvoidSpursData_t *VAR_0)
{
 u32 VAR_1;

 FUNC_3(2, "\n");

 VAR_0->nZones = 0;
 VAR_0->usedZones = ((void*)0);
 VAR_0->freeZones = ((void*)0);

 VAR_1 =
     VAR_0->f_ref *
     ((VAR_0->f_if1_Center - VAR_0->f_if1_bw / 2 +
       VAR_0->f_in) / VAR_0->f_ref) - VAR_0->f_in;
 while (VAR_1 <
        VAR_0->f_if1_Center + VAR_0->f_if1_bw / 2 +
        VAR_0->f_LO1_FracN_Avoid) {

  FUNC_0(VAR_0,
       VAR_1 - VAR_0->f_LO1_FracN_Avoid,
       VAR_1 - 1);
  FUNC_0(VAR_0, VAR_1 + 1,
       VAR_1 + VAR_0->f_LO1_FracN_Avoid);
  VAR_1 += VAR_0->f_ref;
 }

 VAR_1 =
     VAR_0->f_ref *
     ((VAR_0->f_if1_Center - VAR_0->f_if1_bw / 2 -
       VAR_0->f_out) / VAR_0->f_ref) + VAR_0->f_out;
 while (VAR_1 <
        VAR_0->f_if1_Center + VAR_0->f_if1_bw / 2 +
        VAR_0->f_LO2_FracN_Avoid) {

  FUNC_0(VAR_0,
       VAR_1 - VAR_0->f_LO2_FracN_Avoid,
       VAR_1 - 1);
  FUNC_0(VAR_0, VAR_1 + 1,
       VAR_1 + VAR_0->f_LO2_FracN_Avoid);
  VAR_1 += VAR_0->f_ref;
 }

 if (FUNC_2(VAR_0->avoidDECT)) {

  FUNC_0(VAR_0, 1920836000 - VAR_0->f_in, 1922236000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1922564000 - VAR_0->f_in, 1923964000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1924292000 - VAR_0->f_in, 1925692000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1926020000 - VAR_0->f_in, 1927420000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1927748000 - VAR_0->f_in, 1929148000 - VAR_0->f_in);
 }

 if (FUNC_1(VAR_0->avoidDECT)) {
  FUNC_0(VAR_0, 1896644000 - VAR_0->f_in, 1898044000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1894916000 - VAR_0->f_in, 1896316000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1893188000 - VAR_0->f_in, 1894588000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1891460000 - VAR_0->f_in, 1892860000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1889732000 - VAR_0->f_in, 1891132000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1888004000 - VAR_0->f_in, 1889404000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1886276000 - VAR_0->f_in, 1887676000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1884548000 - VAR_0->f_in, 1885948000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1882820000 - VAR_0->f_in, 1884220000 - VAR_0->f_in);
  FUNC_0(VAR_0, 1881092000 - VAR_0->f_in, 1882492000 - VAR_0->f_in);
 }
}
