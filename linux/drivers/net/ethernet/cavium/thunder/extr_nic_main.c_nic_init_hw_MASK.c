
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_6__ {int lenerr_en; scalar_t__ hdr_sl; scalar_t__ rx_hdr; scalar_t__ maxlen; scalar_t__ minlen; } ;
struct nicpf {TYPE_3__ pkind; TYPE_2__* hw; TYPE_1__* pdev; } ;
struct TYPE_5__ {int bgx_cnt; } ;
struct TYPE_4__ {scalar_t__ subsystem_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_0 (struct nicpf*,int) ;
 int FUNC_1 (struct nicpf*,int,int) ;
 int FUNC_2 (struct nicpf*,int ) ;

__attribute__((used)) static void FUNC_3(struct nicpf *VAR_22)
{
 int VAR_23;
 u64 VAR_24;


 FUNC_1(VAR_22, VAR_11, 0x3);


 FUNC_1(VAR_22, VAR_10, (1ULL << 6) | 0x03);




 if (VAR_22->pdev->subsystem_device == VAR_20) {

  FUNC_1(VAR_22, VAR_15,
         (VAR_19 << 7) |
         VAR_0 | (1ULL << 16));
  FUNC_1(VAR_22, VAR_15 | (1 << 8),
         (VAR_19 << 7) |
         VAR_1 | (1ULL << 16));
 } else {

  for (VAR_23 = 0; VAR_23 < VAR_22->hw->bgx_cnt; VAR_23++)
   FUNC_1(VAR_22, VAR_13 | (VAR_23 << 3),
          (1ULL << 16));
 }

 FUNC_1(VAR_22, VAR_14,
        (1ULL << 63) | VAR_0);
 FUNC_1(VAR_22, VAR_14 + (1 << 8),
        (1ULL << 63) | VAR_1);


 VAR_22->pkind.minlen = 0;
 VAR_22->pkind.maxlen = VAR_7 + VAR_21 + VAR_2 + 4;
 VAR_22->pkind.lenerr_en = 1;
 VAR_22->pkind.rx_hdr = 0;
 VAR_22->pkind.hdr_sl = 0;

 for (VAR_23 = 0; VAR_23 < VAR_9; VAR_23++)
  FUNC_1(VAR_22, VAR_17 | (VAR_23 << 3),
         *(u64 *)&VAR_22->pkind);

 FUNC_2(VAR_22, VAR_8);


 FUNC_1(VAR_22, VAR_16, VAR_5);


 FUNC_1(VAR_22, VAR_18,
        (2 << 19) | (VAR_4 << 16) | VAR_3);


 VAR_24 = FUNC_0(VAR_22, VAR_12);
 if (VAR_24 < VAR_6)
  FUNC_1(VAR_22, VAR_12, VAR_6);
}
