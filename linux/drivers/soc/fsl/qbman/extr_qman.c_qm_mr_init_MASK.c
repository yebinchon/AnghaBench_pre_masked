
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ ce; } ;
struct qm_mr {int pi; int ci; int ithresh; int pmode; int cmode; int vbit; int fill; scalar_t__ ring; scalar_t__ cursor; } ;
struct qm_portal {TYPE_1__ addr; struct qm_mr mr; } ;
typedef enum qm_mr_pmode { ____Placeholder_qm_mr_pmode } qm_mr_pmode ;
typedef enum qm_mr_cmode { ____Placeholder_qm_mr_cmode } qm_mr_cmode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (struct qm_portal*,int ) ;
 int FUNC_2 (struct qm_portal*,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct qm_portal *VAR_7, enum qm_mr_pmode VAR_8,
        enum qm_mr_cmode VAR_9)
{
 struct qm_mr *VAR_10 = &VAR_7->mr;
 u32 VAR_11;

 VAR_10->ring = VAR_7->addr.ce + VAR_0;
 VAR_10->pi = FUNC_1(VAR_7, VAR_6) & (VAR_1 - 1);
 VAR_10->ci = FUNC_1(VAR_7, VAR_4) & (VAR_1 - 1);
 VAR_10->cursor = VAR_10->ring + VAR_10->ci;
 VAR_10->fill = FUNC_0(VAR_1, VAR_10->ci, VAR_10->pi);
 VAR_10->vbit = (FUNC_1(VAR_7, VAR_6) & VAR_1)
  ? VAR_2 : 0;
 VAR_10->ithresh = FUNC_1(VAR_7, VAR_5);




 VAR_11 = (FUNC_1(VAR_7, VAR_3) & 0xfffff0ff) |
       ((VAR_9 & 1) << 8);
 FUNC_2(VAR_7, VAR_3, VAR_11);
 return 0;
}
