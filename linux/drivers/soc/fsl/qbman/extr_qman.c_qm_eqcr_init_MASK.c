
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ ce; } ;
struct qm_eqcr {int ci; int ithresh; int pmode; scalar_t__ busy; scalar_t__ available; int vbit; scalar_t__ ring; scalar_t__ cursor; } ;
struct qm_portal {TYPE_1__ addr; struct qm_eqcr eqcr; } ;
typedef enum qm_eqcr_pmode { ____Placeholder_qm_eqcr_pmode } qm_eqcr_pmode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int,int,int) ;
 int FUNC_1 (struct qm_portal*,int ) ;
 int FUNC_2 (struct qm_portal*,int ) ;
 int FUNC_3 (struct qm_portal*,int ,int) ;

__attribute__((used)) static inline int FUNC_4(struct qm_portal *VAR_8,
    enum qm_eqcr_pmode VAR_9,
    unsigned int VAR_10,
    int VAR_11)
{
 struct qm_eqcr *VAR_12 = &VAR_8->eqcr;
 u32 VAR_13;
 u8 VAR_14;

 VAR_12->ring = VAR_8->addr.ce + VAR_0;
 VAR_12->ci = FUNC_2(VAR_8, VAR_5) & (VAR_2 - 1);
 FUNC_1(VAR_8, VAR_1);
 VAR_14 = FUNC_2(VAR_8, VAR_7) & (VAR_2 - 1);
 VAR_12->cursor = VAR_12->ring + VAR_14;
 VAR_12->vbit = (FUNC_2(VAR_8, VAR_7) & VAR_2) ?
       VAR_3 : 0;
 VAR_12->available = VAR_2 - 1 -
     FUNC_0(VAR_2, VAR_12->ci, VAR_14);
 VAR_12->ithresh = FUNC_2(VAR_8, VAR_6);




 VAR_13 = (FUNC_2(VAR_8, VAR_4) & 0x00ffffff) |
       (VAR_10 << 28) |
       (VAR_11 << 26) |
       ((VAR_9 & 0x3) << 24);
 FUNC_3(VAR_8, VAR_4, VAR_13);
 return 0;
}
