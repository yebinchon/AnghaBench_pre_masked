
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct u132 {int hc_fminterval; int hc_control; int num_ports; int flags; TYPE_1__* platform_dev; } ;
struct TYPE_6__ {int a; int* portstatus; int status; int b; } ;
struct TYPE_5__ {void* state; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
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
 int VAR_20 ;

 int VAR_21 ;


 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int ,int) ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_3 (int) ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 TYPE_3__ VAR_37 ;
 int FUNC_6 (struct u132*) ;
 int FUNC_7 (struct u132*) ;
 int FUNC_8 (struct u132*,int,int*) ;
 TYPE_2__* FUNC_9 (struct u132*) ;
 int FUNC_10 (struct u132*,int,int) ;

__attribute__((used)) static int FUNC_11(struct u132 *VAR_38)
{
 int VAR_39;
 u32 VAR_40;
 u32 VAR_41;
 u32 VAR_42;
 u32 VAR_43;
 u32 VAR_44;
 u32 VAR_45;
 int VAR_46 = VAR_9;
 int VAR_47 = VAR_38->hc_fminterval == 0;
 int VAR_48 = 0;
 int VAR_49 = 30;
 FUNC_6(VAR_38);
 if (VAR_47) {
  u32 VAR_50;
  VAR_39 = FUNC_8(VAR_38, VAR_42, &VAR_50);
  if (VAR_39)
   return VAR_39;
  VAR_38->hc_fminterval = VAR_50 & 0x3fff;
  VAR_38->hc_fminterval |= FUNC_0(VAR_38->hc_fminterval) << 16;
 }
 VAR_39 = FUNC_8(VAR_38, VAR_40, &VAR_38->hc_control);
 if (VAR_39)
  return VAR_39;
 FUNC_2(&VAR_38->platform_dev->dev, "resetting from state '%s', control "
  "= %08X\n", FUNC_3(VAR_38->hc_control & VAR_5),
  VAR_38->hc_control);
 switch (VAR_38->hc_control & VAR_5) {
 case 130:
  VAR_48 = 0;
  break;
 case 128:
 case 129:
  VAR_38->hc_control &= VAR_6;
  VAR_38->hc_control |= 129;
  VAR_48 = 10;
  break;
 default:
  VAR_38->hc_control &= VAR_6;
  VAR_38->hc_control |= VAR_21;
  VAR_48 = 50;
  break;
 }
 VAR_39 = FUNC_10(VAR_38, VAR_40, VAR_38->hc_control);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_8(VAR_38, VAR_40, &VAR_40);
 if (VAR_39)
  return VAR_39;
 FUNC_5(VAR_48);
 VAR_39 = FUNC_8(VAR_38, VAR_37.a, &VAR_45);
 if (VAR_39)
  return VAR_39;
 if (!(VAR_45 & VAR_23)) {
  int VAR_51;
  for (VAR_51 = 0; VAR_51 < VAR_38->num_ports; VAR_51++) {
   VAR_39 = FUNC_10(VAR_38,
    VAR_37.portstatus[VAR_51], VAR_30);
   if (VAR_39)
    return VAR_39;
  }
 }
 VAR_39 = FUNC_8(VAR_38, VAR_40, &VAR_40);
 if (VAR_39)
  return VAR_39;
retry:
 VAR_39 = FUNC_8(VAR_38, VAR_44, &VAR_41);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_10(VAR_38, VAR_44, VAR_7);
 if (VAR_39)
  return VAR_39;
extra: {
  VAR_39 = FUNC_8(VAR_38, VAR_44, &VAR_41);
  if (VAR_39)
   return VAR_39;
  if (0 != (VAR_41 & VAR_7)) {
   if (--VAR_49 == 0) {
    FUNC_1(&VAR_38->platform_dev->dev, "USB HC reset"
     " timed out!\n");
    return -VAR_0;
   } else {
    FUNC_5(5);
    goto extra;
   }
  }
 }
 if (VAR_38->flags & VAR_19) {
  VAR_39 = FUNC_10(VAR_38, VAR_40, VAR_38->hc_control);
  if (VAR_39)
   return VAR_39;
  VAR_39 = FUNC_8(VAR_38, VAR_40, &VAR_40);
  if (VAR_39)
   return VAR_39;
 }
 VAR_39 = FUNC_10(VAR_38, VAR_33, 0x00000000);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_10(VAR_38, VAR_32, 0x11000000);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_10(VAR_38, VAR_34, 0x00000000);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_7(VAR_38);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_8(VAR_38, VAR_42, &VAR_42);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_8(VAR_38, VAR_43, &VAR_43);
 if (VAR_39)
  return VAR_39;
 if (0 == (VAR_42 & 0x3fff0000) || 0 == VAR_43) {
  if (!(VAR_38->flags & VAR_19)) {
   VAR_38->flags |= VAR_19;
   goto retry;
  } else
   FUNC_1(&VAR_38->platform_dev->dev, "init err(%08x %04x)"
    "\n", VAR_42, VAR_43);
 }
 VAR_38->hc_control &= VAR_6;
 VAR_38->hc_control |= VAR_3 | VAR_4 | 130;
 VAR_39 = FUNC_10(VAR_38, VAR_40, VAR_38->hc_control);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_10(VAR_38, VAR_44, VAR_2);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_8(VAR_38, VAR_44, &VAR_44);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_8(VAR_38, VAR_40, &VAR_40);
 if (VAR_39)
  return VAR_39;
 FUNC_9(VAR_38)->state = VAR_1;
 VAR_39 = FUNC_10(VAR_38, VAR_37.status, VAR_28);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_10(VAR_38, VAR_36, VAR_46);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_10(VAR_38, VAR_35,
  VAR_10 | VAR_11 | VAR_13 | VAR_8 |
  VAR_16 | VAR_12 | VAR_14 | VAR_17 |
  VAR_15);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_8(VAR_38, VAR_37.a, &VAR_45);
 if (VAR_39)
  return VAR_39;
 VAR_45 &= ~(VAR_26 | VAR_24);
 if (VAR_38->flags & VAR_20) {
  VAR_45 |= VAR_22;
  VAR_45 &= ~(VAR_25 | VAR_23);
  VAR_39 = FUNC_10(VAR_38, VAR_37.a, VAR_45);
  if (VAR_39)
   return VAR_39;
 } else if ((VAR_38->flags & VAR_18) || VAR_31) {
  VAR_45 |= VAR_23;
  VAR_39 = FUNC_10(VAR_38, VAR_37.a, VAR_45);
  if (VAR_39)
   return VAR_39;
 }
 VAR_39 = FUNC_10(VAR_38, VAR_37.status, VAR_29);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_10(VAR_38, VAR_37.b,
  (VAR_45 & VAR_23) ? 0 : VAR_27);
 if (VAR_39)
  return VAR_39;
 VAR_39 = FUNC_8(VAR_38, VAR_40, &VAR_40);
 if (VAR_39)
  return VAR_39;
 FUNC_4((VAR_45 >> 23) & 0x1fe);
 FUNC_9(VAR_38)->state = VAR_1;
 return 0;
}
