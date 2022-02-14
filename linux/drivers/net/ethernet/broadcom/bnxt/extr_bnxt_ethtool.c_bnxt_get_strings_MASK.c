
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct bnxt {int cp_nr_rings; int flags; int fw_rx_stats_ext_size; int fw_tx_stats_ext_size; int num_tests; int dev; TYPE_1__* test_info; int pri2cos_valid; int max_tpa_v2; } ;
struct TYPE_20__ {int string; } ;
struct TYPE_19__ {int string; } ;
struct TYPE_18__ {int string; } ;
struct TYPE_17__ {int string; } ;
struct TYPE_16__ {int string; } ;
struct TYPE_15__ {int string; } ;
struct TYPE_14__ {int string; } ;
struct TYPE_13__ {int string; } ;
struct TYPE_12__ {int string; } ;
struct TYPE_11__ {int string; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct bnxt*) ;
 int VAR_6 ;


 TYPE_10__* VAR_7 ;
 TYPE_9__* VAR_8 ;
 TYPE_8__* VAR_9 ;
 char** VAR_10 ;
 char** VAR_11 ;
 char** VAR_12 ;
 char** VAR_13 ;
 TYPE_7__* VAR_14 ;
 TYPE_6__* VAR_15 ;
 TYPE_5__* VAR_16 ;
 TYPE_4__* VAR_17 ;
 TYPE_3__* VAR_18 ;
 TYPE_2__* VAR_19 ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct bnxt* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *,char*,int,char const* const) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_20, u32 VAR_21, u8 *VAR_22)
{
 struct bnxt *VAR_23 = FUNC_4(VAR_20);
 static const char * const *VAR_24;
 u32 VAR_25, VAR_26, VAR_27;

 switch (VAR_21) {
 case 129:
  for (VAR_25 = 0; VAR_25 < VAR_23->cp_nr_rings; VAR_25++) {
   VAR_27 = FUNC_0(VAR_10);
   for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++) {
    FUNC_5(VAR_22, "[%d]: %s", VAR_25,
     VAR_10[VAR_26]);
    VAR_22 += VAR_6;
   }
   if (!FUNC_1(VAR_23))
    goto skip_tpa_stats;

   if (VAR_23->max_tpa_v2) {
    VAR_27 = FUNC_0(VAR_12);
    VAR_24 = VAR_12;
   } else {
    VAR_27 = FUNC_0(VAR_13);
    VAR_24 = VAR_13;
   }
   for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++) {
    FUNC_5(VAR_22, "[%d]: %s", VAR_25, VAR_24[VAR_26]);
    VAR_22 += VAR_6;
   }
skip_tpa_stats:
   VAR_27 = FUNC_0(VAR_11);
   for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++) {
    FUNC_5(VAR_22, "[%d]: %s", VAR_25,
     VAR_11[VAR_26]);
    VAR_22 += VAR_6;
   }
  }
  for (VAR_25 = 0; VAR_25 < VAR_5; VAR_25++) {
   FUNC_6(VAR_22, VAR_16[VAR_25].string);
   VAR_22 += VAR_6;
  }

  if (VAR_23->flags & VAR_1) {
   for (VAR_25 = 0; VAR_25 < VAR_4; VAR_25++) {
    FUNC_6(VAR_22, VAR_8[VAR_25].string);
    VAR_22 += VAR_6;
   }
  }
  if (VAR_23->flags & VAR_2) {
   for (VAR_25 = 0; VAR_25 < VAR_23->fw_rx_stats_ext_size; VAR_25++) {
    FUNC_6(VAR_22, VAR_9[VAR_25].string);
    VAR_22 += VAR_6;
   }
   for (VAR_25 = 0; VAR_25 < VAR_23->fw_tx_stats_ext_size; VAR_25++) {
    FUNC_6(VAR_22,
           VAR_19[VAR_25].string);
    VAR_22 += VAR_6;
   }
   if (VAR_23->pri2cos_valid) {
    for (VAR_25 = 0; VAR_25 < 8; VAR_25++) {
     FUNC_6(VAR_22,
            VAR_14[VAR_25].string);
     VAR_22 += VAR_6;
    }
    for (VAR_25 = 0; VAR_25 < 8; VAR_25++) {
     FUNC_6(VAR_22,
            VAR_15[VAR_25].string);
     VAR_22 += VAR_6;
    }
    for (VAR_25 = 0; VAR_25 < 8; VAR_25++) {
     FUNC_6(VAR_22,
            VAR_17[VAR_25].string);
     VAR_22 += VAR_6;
    }
    for (VAR_25 = 0; VAR_25 < 8; VAR_25++) {
     FUNC_6(VAR_22,
            VAR_18[VAR_25].string);
     VAR_22 += VAR_6;
    }
   }
  }
  if (VAR_23->flags & VAR_0) {
   for (VAR_25 = 0; VAR_25 < VAR_3; VAR_25++) {
    FUNC_6(VAR_22, VAR_7[VAR_25].string);
    VAR_22 += VAR_6;
   }
  }
  break;
 case 128:
  if (VAR_23->num_tests)
   FUNC_2(VAR_22, VAR_23->test_info->string,
          VAR_23->num_tests * VAR_6);
  break;
 default:
  FUNC_3(VAR_23->dev, "bnxt_get_strings invalid request %x\n",
      VAR_21);
  break;
 }
}
