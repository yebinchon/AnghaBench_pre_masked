
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct MPT3SAS_ADAPTER {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int
FUNC_2(struct MPT3SAS_ADAPTER *VAR_1, u32 VAR_2, int VAR_3)
{
 u32 VAR_4, VAR_5;
 u32 VAR_6;

 VAR_4 = 0;
 VAR_5 = 1000 * VAR_3;
 do {
  VAR_6 = FUNC_0(VAR_1, 1);
  if (VAR_6 == VAR_2)
   return 0;
  if (VAR_4 && VAR_6 == VAR_0)
   break;

  FUNC_1(1000, 1500);
  VAR_4++;
 } while (--VAR_5);

 return VAR_6;
}
