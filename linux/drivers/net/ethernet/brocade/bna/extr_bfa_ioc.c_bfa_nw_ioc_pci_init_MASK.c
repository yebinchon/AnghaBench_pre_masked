
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_pcidev {int device_id; int ssid; } ;
struct bfa_ioc {int clscode; scalar_t__ asic_gen; int fcmode; void* ad_cap_bm; void* port_mode_cfg; void* port_mode; void* asic_mode; void* port1_mode; void* port0_mode; struct bfa_pcidev pcidev; } ;
typedef enum bfi_pcifn_class { ____Placeholder_bfi_pcifn_class } bfi_pcifn_class ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (int) ;

 int FUNC_1 (int) ;
 int FUNC_2 (struct bfa_ioc*) ;
 int FUNC_3 (struct bfa_ioc*) ;
 int FUNC_4 (struct bfa_ioc*) ;
 int FUNC_5 (struct bfa_ioc*) ;
 int FUNC_6 (struct bfa_ioc*) ;

void
FUNC_7(struct bfa_ioc *VAR_16, struct bfa_pcidev *VAR_17,
   enum bfi_pcifn_class VAR_18)
{
 VAR_16->clscode = VAR_18;
 VAR_16->pcidev = *VAR_17;




 VAR_16->port0_mode = VAR_16->port1_mode = VAR_15;
 VAR_16->asic_mode = VAR_11;

 switch (VAR_17->device_id) {
 case 128:
  VAR_16->asic_gen = VAR_8;
  VAR_16->port0_mode = VAR_16->port1_mode = VAR_14;
  VAR_16->asic_mode = VAR_10;
  VAR_16->port_mode = VAR_16->port_mode_cfg = VAR_3;
  VAR_16->ad_cap_bm = VAR_0;
  break;

 case 129:
  VAR_16->asic_gen = VAR_9;
  if (VAR_18 == VAR_13 &&
   VAR_17->ssid == VAR_6) {
   VAR_16->asic_mode = VAR_12;
   VAR_16->fcmode = 1;
   VAR_16->port_mode = VAR_16->port_mode_cfg = VAR_4;
   VAR_16->ad_cap_bm = VAR_1;
  } else {
   VAR_16->port0_mode = VAR_16->port1_mode = VAR_14;
   VAR_16->asic_mode = VAR_10;
   if (VAR_17->ssid == VAR_7) {
    VAR_16->port_mode =
    VAR_16->port_mode_cfg = VAR_3;
    VAR_16->ad_cap_bm = VAR_0;
   } else {
    VAR_16->port_mode =
    VAR_16->port_mode_cfg = VAR_5;
    VAR_16->ad_cap_bm = VAR_2;
   }
  }
  break;

 default:
  FUNC_0(1);
 }




 if (VAR_16->asic_gen == VAR_8)
  FUNC_6(VAR_16);
 else {
  FUNC_1(VAR_16->asic_gen != VAR_9);
  FUNC_5(VAR_16);
  FUNC_4(VAR_16);
 }

 FUNC_2(VAR_16);
 FUNC_3(VAR_16);
}
