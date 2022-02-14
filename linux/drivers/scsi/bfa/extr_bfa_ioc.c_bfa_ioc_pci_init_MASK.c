
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_pcidev_s {int device_id; int ssid; } ;
struct bfa_ioc_s {int clscode; scalar_t__ asic_gen; void* ad_cap_bm; void* port_mode_cfg; void* port_mode; void* asic_mode; void* port1_mode; void* port0_mode; void* fcmode; struct bfa_pcidev_s pcidev; } ;
typedef enum bfi_pcifn_class { ____Placeholder_bfi_pcifn_class } bfi_pcifn_class ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;






 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bfa_ioc_s*) ;
 int FUNC_2 (struct bfa_ioc_s*) ;
 int FUNC_3 (struct bfa_ioc_s*) ;
 int FUNC_4 (struct bfa_ioc_s*) ;
 int FUNC_5 (struct bfa_ioc_s*) ;
 int FUNC_6 (struct bfa_ioc_s*) ;

void
FUNC_7(struct bfa_ioc_s *VAR_18, struct bfa_pcidev_s *VAR_19,
  enum bfi_pcifn_class VAR_20)
{
 VAR_18->clscode = VAR_20;
 VAR_18->pcidev = *VAR_19;




 VAR_18->port0_mode = VAR_18->port1_mode = VAR_17;
 VAR_18->asic_mode = VAR_13;

 switch (VAR_19->device_id) {
 case 129:
 case 128:
  VAR_18->asic_gen = VAR_9;
  VAR_18->fcmode = VAR_8;
  VAR_18->port_mode = VAR_18->port_mode_cfg = VAR_4;
  VAR_18->ad_cap_bm = VAR_1;
  break;

 case 133:
  VAR_18->asic_gen = VAR_10;
  VAR_18->port0_mode = VAR_18->port1_mode = VAR_16;
  VAR_18->asic_mode = VAR_12;
  VAR_18->port_mode = VAR_18->port_mode_cfg = VAR_3;
  VAR_18->ad_cap_bm = VAR_0;
  break;

 case 130:
  VAR_18->asic_gen = VAR_10;
  VAR_18->fcmode = VAR_8;
  VAR_18->port_mode = VAR_18->port_mode_cfg = VAR_4;
  VAR_18->ad_cap_bm = VAR_1;
  break;

 case 132:
 case 131:
  VAR_18->asic_gen = VAR_11;
  if (VAR_20 == VAR_15 &&
      VAR_19->ssid == VAR_6) {
   VAR_18->asic_mode = VAR_14;
   VAR_18->fcmode = VAR_8;
   VAR_18->port_mode = VAR_18->port_mode_cfg = VAR_4;
   VAR_18->ad_cap_bm = VAR_1;
  } else {
   VAR_18->port0_mode = VAR_18->port1_mode = VAR_16;
   VAR_18->asic_mode = VAR_12;
   if (VAR_19->ssid == VAR_7) {
    VAR_18->port_mode =
    VAR_18->port_mode_cfg = VAR_3;
    VAR_18->ad_cap_bm = VAR_0;
   } else {
    VAR_18->port_mode =
    VAR_18->port_mode_cfg = VAR_5;
    VAR_18->ad_cap_bm = VAR_2;
   }
  }
  break;

 default:
  FUNC_0(1);
 }




 if (VAR_18->asic_gen == VAR_9)
  FUNC_4(VAR_18);
 else if (VAR_18->asic_gen == VAR_10)
  FUNC_6(VAR_18);
 else {
  FUNC_0(VAR_18->asic_gen != VAR_11);
  FUNC_5(VAR_18);
  FUNC_1(VAR_18);
 }

 FUNC_2(VAR_18);
 FUNC_3(VAR_18);
}
