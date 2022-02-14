
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int test_func_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_3(u32 VAR_11, u32 VAR_12)
{
 test_func_t VAR_13[] = {
  VAR_2,
  VAR_7,
  VAR_8,
  VAR_9,
  VAR_10,
  VAR_4,
  VAR_6,
  VAR_3,
  VAR_5,
 };
 u32 VAR_14;
 int VAR_15 = 0;
 int VAR_16;





 VAR_14 = VAR_0 * VAR_1;

 FUNC_2("running free space tree tests");
 for (VAR_16 = 0; VAR_16 < FUNC_0(VAR_13); VAR_16++) {
  int VAR_17;

  VAR_17 = FUNC_1(VAR_13[VAR_16], VAR_11, VAR_12,
         VAR_11);
  if (VAR_17)
   VAR_15 = VAR_17;

  VAR_17 = FUNC_1(VAR_13[VAR_16], VAR_11, VAR_12,
         VAR_14);
  if (VAR_17)
   VAR_15 = VAR_17;
 }

 return VAR_15;
}
