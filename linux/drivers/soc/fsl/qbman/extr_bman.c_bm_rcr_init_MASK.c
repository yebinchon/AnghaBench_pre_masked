
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct bm_rcr {int ci; int ithresh; int pmode; int cmode; scalar_t__ busy; scalar_t__ available; int vbit; scalar_t__ ring; scalar_t__ cursor; } ;
struct TYPE_2__ {scalar_t__ ce; } ;
struct bm_portal {TYPE_1__ addr; struct bm_rcr rcr; } ;
typedef enum bm_rcr_pmode { ____Placeholder_bm_rcr_pmode } bm_rcr_pmode ;
typedef enum bm_rcr_cmode { ____Placeholder_bm_rcr_cmode } bm_rcr_cmode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bm_portal*,int ) ;
 int FUNC_1 (struct bm_portal*,int ,int) ;
 scalar_t__ FUNC_2 (int,int,int) ;

__attribute__((used)) static int FUNC_3(struct bm_portal *VAR_7, enum bm_rcr_pmode VAR_8,
         enum bm_rcr_cmode VAR_9)
{
 struct bm_rcr *VAR_10 = &VAR_7->rcr;
 u32 VAR_11;
 u8 VAR_12;

 VAR_10->ring = VAR_7->addr.ce + VAR_0;
 VAR_10->ci = FUNC_0(VAR_7, VAR_4) & (VAR_1 - 1);
 VAR_12 = FUNC_0(VAR_7, VAR_6) & (VAR_1 - 1);
 VAR_10->cursor = VAR_10->ring + VAR_12;
 VAR_10->vbit = (FUNC_0(VAR_7, VAR_6) & VAR_1) ?
  VAR_2 : 0;
 VAR_10->available = VAR_1 - 1
  - FUNC_2(VAR_1, VAR_10->ci, VAR_12);
 VAR_10->ithresh = FUNC_0(VAR_7, VAR_5);





 VAR_11 = (FUNC_0(VAR_7, VAR_3) & 0xffffffe0)
  | (VAR_8 & 0x3);
 FUNC_1(VAR_7, VAR_3, VAR_11);
 return 0;
}
