
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_config {int pcaps; int requested_fc; int fc; int acaps; scalar_t__ speed_caps; int autoneg; void* def_acaps; int fec; int requested_fec; scalar_t__ speed; scalar_t__ lpacaps; } ;
typedef void* fw_port_cap32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (void*) ;
 scalar_t__ FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct link_config *VAR_8, fw_port_cap32_t VAR_9,
        fw_port_cap32_t VAR_10)
{
 VAR_8->pcaps = VAR_9;
 VAR_8->def_acaps = VAR_10;
 VAR_8->lpacaps = 0;
 VAR_8->speed_caps = 0;
 VAR_8->speed = 0;
 VAR_8->requested_fc = VAR_8->fc = VAR_6 | VAR_7;




 VAR_8->requested_fec = VAR_3;
 VAR_8->fec = FUNC_0(VAR_8->def_acaps);
 if (VAR_8->pcaps & VAR_4) {
  VAR_8->acaps = VAR_8->pcaps & VAR_0;
  VAR_8->autoneg = VAR_2;
  VAR_8->requested_fc |= VAR_5;
 } else {
  VAR_8->acaps = 0;
  VAR_8->autoneg = VAR_1;
  VAR_8->speed_caps = FUNC_1(VAR_10);
 }
}
