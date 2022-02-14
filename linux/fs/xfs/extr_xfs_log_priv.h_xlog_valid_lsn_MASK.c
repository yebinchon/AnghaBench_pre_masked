
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_lsn_t ;
struct xlog {int l_curr_cycle; int l_curr_block; int l_icloglock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline bool
FUNC_6(
 struct xlog *VAR_0,
 xfs_lsn_t VAR_1)
{
 int VAR_2;
 int VAR_3;
 bool VAR_4 = 1;
 VAR_2 = FUNC_2(VAR_0->l_curr_cycle);
 FUNC_3();
 VAR_3 = FUNC_2(VAR_0->l_curr_block);

 if ((FUNC_1(VAR_1) > VAR_2) ||
     (FUNC_1(VAR_1) == VAR_2 && FUNC_0(VAR_1) > VAR_3)) {





  FUNC_4(&VAR_0->l_icloglock);
  VAR_2 = VAR_0->l_curr_cycle;
  VAR_3 = VAR_0->l_curr_block;
  FUNC_5(&VAR_0->l_icloglock);

  if ((FUNC_1(VAR_1) > VAR_2) ||
      (FUNC_1(VAR_1) == VAR_2 && FUNC_0(VAR_1) > VAR_3))
   VAR_4 = 0;
 }

 return VAR_4;
}
