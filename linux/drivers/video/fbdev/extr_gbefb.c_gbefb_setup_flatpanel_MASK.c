
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct gbe_timing_info {int flags; int pll_m; int pll_n; scalar_t__ pll_p; } ;
struct TYPE_2__ {void* fp_vdrv; void* fp_hdrv; void* fp_de; void* vt_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,void*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static void FUNC_1(struct gbe_timing_info *VAR_11)
{
 int VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16 = 0;

 FUNC_0(VAR_9, VAR_5, VAR_16,
  (VAR_11->flags & VAR_0) ? 0 : 1);
 FUNC_0(VAR_9, VAR_8, VAR_16,
  (VAR_11->flags & VAR_1) ? 0 : 1);
 VAR_10->vt_flags = VAR_16;


 VAR_12 = 1600;
 VAR_13 = 1024;
 VAR_14 = 0;
 VAR_15 = 1600;
 VAR_11->pll_m = 4;
 VAR_11->pll_n = 1;
 VAR_11->pll_p = 0;

 VAR_16 = 0;
 FUNC_0(VAR_2, VAR_7, VAR_16, VAR_14);
 FUNC_0(VAR_2, VAR_6, VAR_16, VAR_15);
 VAR_10->fp_de = VAR_16;
 VAR_16 = 0;
 FUNC_0(VAR_3, VAR_6, VAR_16, VAR_12);
 VAR_10->fp_hdrv = VAR_16;
 VAR_16 = 0;
 FUNC_0(VAR_4, VAR_7, VAR_16, 1);
 FUNC_0(VAR_4, VAR_6, VAR_16, VAR_13 + 1);
 VAR_10->fp_vdrv = VAR_16;
}
