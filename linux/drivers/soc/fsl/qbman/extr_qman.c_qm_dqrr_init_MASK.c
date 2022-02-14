
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct qm_portal_config {int dummy; } ;
struct TYPE_2__ {scalar_t__ ce; } ;
struct qm_dqrr {int pi; int ci; int ithresh; int dmode; int pmode; int cmode; scalar_t__ ring; int vbit; int fill; scalar_t__ cursor; } ;
struct qm_portal {TYPE_1__ addr; struct qm_dqrr dqrr; } ;
typedef enum qm_dqrr_pmode { ____Placeholder_qm_dqrr_pmode } qm_dqrr_pmode ;
typedef enum qm_dqrr_dmode { ____Placeholder_qm_dqrr_dmode } qm_dqrr_dmode ;
typedef enum qm_dqrr_cmode { ____Placeholder_qm_dqrr_cmode } qm_dqrr_cmode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct qm_portal*,int) ;
 int FUNC_4 (struct qm_portal*,int ) ;
 int FUNC_5 (struct qm_portal*,int ,int) ;

__attribute__((used)) static inline int FUNC_6(struct qm_portal *VAR_10,
          const struct qm_portal_config *VAR_11,
          enum qm_dqrr_dmode VAR_12,
          enum qm_dqrr_pmode VAR_13,
          enum qm_dqrr_cmode VAR_14, u8 VAR_15)
{
 struct qm_dqrr *VAR_16 = &VAR_10->dqrr;
 u32 VAR_17;


 FUNC_5(VAR_10, VAR_8, 0);
 FUNC_5(VAR_10, VAR_9, 0);
 FUNC_5(VAR_10, VAR_6, 0);
 VAR_16->ring = VAR_10->addr.ce + VAR_0;
 VAR_16->pi = FUNC_4(VAR_10, VAR_7) & (VAR_1 - 1);
 VAR_16->ci = FUNC_4(VAR_10, VAR_4) & (VAR_1 - 1);
 VAR_16->cursor = VAR_16->ring + VAR_16->ci;
 VAR_16->fill = FUNC_0(VAR_1, VAR_16->ci, VAR_16->pi);
 VAR_16->vbit = (FUNC_4(VAR_10, VAR_7) & VAR_1) ?
   VAR_2 : 0;
 VAR_16->ithresh = FUNC_4(VAR_10, VAR_5);






 for (VAR_17 = 0; VAR_17 < VAR_1; VAR_17++)
  FUNC_1(FUNC_2(VAR_16->ring, VAR_17));
 VAR_17 = (FUNC_4(VAR_10, VAR_3) & 0xff000f00) |
  ((VAR_15 & (VAR_1 - 1)) << 20) |
  ((VAR_12 & 1) << 18) |
  ((VAR_14 & 3) << 16) |
  0xa0 |
  (0 ? 0x40 : 0) |
  (0 ? 0x10 : 0);
 FUNC_5(VAR_10, VAR_3, VAR_17);
 FUNC_3(VAR_10, VAR_15);
 return 0;
}
