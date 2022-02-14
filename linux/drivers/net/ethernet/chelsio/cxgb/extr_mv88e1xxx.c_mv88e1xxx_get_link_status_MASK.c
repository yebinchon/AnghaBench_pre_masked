
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cphy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct cphy*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_13, int *VAR_14,
         int *VAR_15, int *VAR_16, int *VAR_17)
{
 u32 VAR_18;
 int VAR_19 = -1, VAR_20 = -1, VAR_21 = 0;

 (void) FUNC_1(VAR_13,
   VAR_2, &VAR_18);
 if ((VAR_18 & VAR_11) != 0) {
  if (VAR_18 & VAR_10)
   VAR_21 |= VAR_3;
  if (VAR_18 & VAR_12)
   VAR_21 |= VAR_4;
  VAR_20 = (VAR_18 & VAR_8) ? VAR_0 : VAR_1;
  VAR_19 = FUNC_0(VAR_18);
  if (VAR_19 == 0)
   VAR_19 = VAR_5;
  else if (VAR_19 == 1)
   VAR_19 = VAR_6;
  else
   VAR_19 = VAR_7;
 }
 if (VAR_14)
  *VAR_14 = (VAR_18 & VAR_9) != 0;
 if (VAR_15)
  *VAR_15 = VAR_19;
 if (VAR_16)
  *VAR_16 = VAR_20;
 if (VAR_17)
  *VAR_17 = VAR_21;
 return 0;
}
