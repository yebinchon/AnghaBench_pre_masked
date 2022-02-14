
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_dquot {int q_nrefs; } ;


 int FUNC_0 (struct xfs_dquot*) ;
 int FUNC_1 (struct xfs_dquot*) ;

__attribute__((used)) static inline struct xfs_dquot *FUNC_2(struct xfs_dquot *VAR_0)
{
 FUNC_0(VAR_0);
 VAR_0->q_nrefs++;
 FUNC_1(VAR_0);
 return VAR_0;
}
