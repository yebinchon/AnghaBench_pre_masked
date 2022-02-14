
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu_hwinfo {int total_pfs; } ;
struct rvu {struct rvu_hwinfo* hw; } ;


 int VAR_0 ;
 unsigned long long FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rvu*,int ,int ,unsigned long long) ;

__attribute__((used)) static void FUNC_2(struct rvu *VAR_3)
{
 struct rvu_hwinfo *VAR_4 = VAR_3->hw;


 FUNC_1(VAR_3, VAR_0,
      VAR_1, FUNC_0(VAR_4->total_pfs));


 FUNC_1(VAR_3, VAR_0, VAR_2,
      FUNC_0(VAR_4->total_pfs) & ~1ULL);
}
