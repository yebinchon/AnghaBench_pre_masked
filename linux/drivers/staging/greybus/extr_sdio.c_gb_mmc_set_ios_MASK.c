
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct mmc_ios {int clock; int vdd; scalar_t__ bus_mode; int power_mode; int bus_width; int timing; int signal_voltage; int drv_type; } ;
struct mmc_host {int ios; } ;
struct gb_sdio_set_ios_request {void* drv_type; void* signal_voltage; void* timing; void* bus_width; void* power_mode; int bus_mode; void* vdd; void* clock; } ;
struct gb_sdio_host {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct gb_sdio_host*,struct gb_sdio_set_ios_request*) ;
 int FUNC_2 (int *,struct mmc_ios*,int) ;
 struct gb_sdio_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mmc_host *VAR_29, struct mmc_ios *VAR_30)
{
 struct gb_sdio_host *VAR_31 = FUNC_3(VAR_29);
 struct gb_sdio_set_ios_request VAR_32;
 int VAR_33;
 u8 VAR_34;
 u8 VAR_35;
 u8 VAR_36;
 u8 VAR_37;
 u8 VAR_38;
 u32 VAR_39 = 0;

 FUNC_4(&VAR_31->lock);
 VAR_32.clock = FUNC_0(VAR_30->clock);

 if (VAR_30->vdd)
  VAR_39 = 1 << (VAR_30->vdd - VAR_27);
 VAR_32.vdd = FUNC_0(VAR_39);

 VAR_32.bus_mode = VAR_30->bus_mode == VAR_28 ?
       VAR_0 :
       VAR_1;

 switch (VAR_30->power_mode) {
 case 149:
 default:
  VAR_34 = VAR_5;
  break;
 case 146:
  VAR_34 = VAR_8;
  break;
 case 148:
  VAR_34 = VAR_6;
  break;
 case 147:
  VAR_34 = VAR_7;
  break;
 }
 VAR_32.power_mode = VAR_34;

 switch (VAR_30->bus_width) {
 case 152:
  VAR_35 = VAR_2;
  break;
 case 151:
 default:
  VAR_35 = VAR_3;
  break;
 case 150:
  VAR_35 = VAR_4;
  break;
 }
 VAR_32.bus_width = VAR_35;

 switch (VAR_30->timing) {
 case 138:
 default:
  VAR_36 = VAR_16;
  break;
 case 136:
  VAR_36 = VAR_18;
  break;
 case 133:
  VAR_36 = VAR_21;
  break;
 case 130:
  VAR_36 = VAR_24;
  break;
 case 129:
  VAR_36 = VAR_25;
  break;
 case 128:
  VAR_36 = VAR_26;
  break;
 case 131:
  VAR_36 = VAR_23;
  break;
 case 132:
  VAR_36 = VAR_22;
  break;
 case 137:
  VAR_36 = VAR_17;
  break;
 case 135:
  VAR_36 = VAR_19;
  break;
 case 134:
  VAR_36 = VAR_20;
  break;
 }
 VAR_32.timing = VAR_36;

 switch (VAR_30->signal_voltage) {
 case 139:
  VAR_37 = VAR_15;
  break;
 case 140:
 default:
  VAR_37 = VAR_14;
  break;
 case 141:
  VAR_37 = VAR_13;
  break;
 }
 VAR_32.signal_voltage = VAR_37;

 switch (VAR_30->drv_type) {
 case 145:
  VAR_38 = VAR_9;
  break;
 case 143:
  VAR_38 = VAR_11;
  break;
 case 142:
  VAR_38 = VAR_12;
  break;
 case 144:
 default:
  VAR_38 = VAR_10;
  break;
 }
 VAR_32.drv_type = VAR_38;

 VAR_33 = FUNC_1(VAR_31, &VAR_32);
 if (VAR_33 < 0)
  goto out;

 FUNC_2(&VAR_29->ios, VAR_30, sizeof(VAR_29->ios));

out:
 FUNC_5(&VAR_31->lock);
}
