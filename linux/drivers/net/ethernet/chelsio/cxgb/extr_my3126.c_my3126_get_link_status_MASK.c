
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cphy {int elmer_gpo; int * adapter; } ;
typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cphy*,int ,int ,int*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int*) ;
 int FUNC_4 (int *,int ,int) ;

__attribute__((used)) static int FUNC_5(struct cphy *VAR_8,
   int *VAR_9, int *VAR_10, int *VAR_11, int *VAR_12)
{
 u32 VAR_13;
 u16 VAR_14;
 adapter_t *VAR_15;

 VAR_15 = VAR_8->adapter;
 FUNC_0(VAR_8, VAR_2, VAR_3, &VAR_13);
 VAR_14 = (u16) VAR_13;


 FUNC_3(VAR_15, VAR_0, &VAR_13);
 VAR_8->elmer_gpo = VAR_13;

 *VAR_9 = (VAR_14 & VAR_4);

 if (*VAR_9) {

  if (FUNC_1(VAR_15))
    VAR_13 &= ~(1 << 8);
  else if (FUNC_2(VAR_15))
    VAR_13 &= ~(1 << 19);
 } else {

  if (FUNC_1(VAR_15))
    VAR_13 |= (1 << 8);
  else if (FUNC_2(VAR_15))
    VAR_13 |= (1 << 19);
 }

 FUNC_4(VAR_15, VAR_0, VAR_13);
 VAR_8->elmer_gpo = VAR_13;
 *VAR_10 = VAR_7;
 *VAR_11 = VAR_1;


 if (VAR_12)
  *VAR_12 = VAR_5 | VAR_6;

 return 0;
}
