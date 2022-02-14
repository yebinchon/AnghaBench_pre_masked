
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_bmbt_irec {scalar_t__ br_state; scalar_t__ br_startblock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline bool FUNC_1(struct xfs_bmbt_irec *VAR_3)
{
 return VAR_3->br_state != VAR_2 &&
  VAR_3->br_startblock != VAR_1 &&
  VAR_3->br_startblock != VAR_0 &&
  !FUNC_0(VAR_3->br_startblock);
}
