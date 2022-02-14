
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct rvu {TYPE_1__* hw; } ;
struct TYPE_2__ {int total_pfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rvu*,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct rvu *VAR_2, u16 VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 u64 VAR_7;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 >= VAR_2->hw->total_pfs)
  return 0;

 if (!(VAR_3 & VAR_1))
  return 1;


 VAR_5 = (VAR_3 & VAR_1) - 1;
 VAR_7 = FUNC_2(VAR_2, VAR_0, FUNC_0(VAR_4));
 VAR_6 = (VAR_7 >> 12) & 0xFF;
 if (VAR_5 >= VAR_6)
  return 0;

 return 1;
}
