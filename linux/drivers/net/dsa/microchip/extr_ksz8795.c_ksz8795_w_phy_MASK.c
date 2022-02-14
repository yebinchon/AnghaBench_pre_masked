
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ksz_device {TYPE_1__* ports; } ;
struct TYPE_2__ {int fiber; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 size_t VAR_26 ;
 size_t VAR_27 ;
 size_t VAR_28 ;
 size_t VAR_29 ;
 size_t VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (struct ksz_device*,size_t,int ,size_t*) ;
 int FUNC_1 (struct ksz_device*,size_t,int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct ksz_device *VAR_37, u16 VAR_38, u16 VAR_39, u16 VAR_40)
{
 u8 VAR_41 = VAR_38;
 u8 VAR_42, VAR_43, VAR_44, VAR_45;

 switch (VAR_39) {
 case 128:


  if (VAR_40 & VAR_14)
   break;
  FUNC_0(VAR_37, VAR_41, VAR_36, &VAR_43);
  VAR_45 = VAR_43;
  if (VAR_40 & VAR_10)
   VAR_45 |= VAR_28;
  else
   VAR_45 &= ~VAR_28;
  if (VAR_45 != VAR_43)
   FUNC_1(VAR_37, VAR_41, VAR_36, VAR_45);
  FUNC_0(VAR_37, VAR_41, VAR_33, &VAR_44);
  VAR_45 = VAR_44;
  if (!(VAR_40 & VAR_5))
   VAR_45 |= VAR_22;
  else
   VAR_45 &= ~VAR_22;


  if (VAR_37->ports[VAR_41].fiber)
   VAR_45 |= VAR_22;
  if (VAR_40 & VAR_15)
   VAR_45 |= VAR_25;
  else
   VAR_45 &= ~VAR_25;
  if (VAR_40 & VAR_9)
   VAR_45 |= VAR_26;
  else
   VAR_45 &= ~VAR_26;
  if (VAR_45 != VAR_44)
   FUNC_1(VAR_37, VAR_41, VAR_33, VAR_45);
  FUNC_0(VAR_37, VAR_41, VAR_35, &VAR_42);
  VAR_45 = VAR_42;
  if (VAR_40 & VAR_11)
   VAR_45 |= VAR_29;
  else
   VAR_45 &= ~VAR_29;
  if (VAR_40 & VAR_16)
   VAR_45 |= VAR_32;
  else
   VAR_45 &= ~VAR_32;
  if (VAR_40 & VAR_6)
   VAR_45 |= VAR_23;
  else
   VAR_45 &= ~(VAR_23);
  if (VAR_40 & VAR_13)
   VAR_45 |= VAR_31;
  else
   VAR_45 &= ~VAR_31;
  if (VAR_40 & VAR_0)
   VAR_45 |= VAR_17;
  else
   VAR_45 &= ~VAR_17;
  if (VAR_40 & VAR_8)
   VAR_45 |= VAR_27;
  else
   VAR_45 &= ~VAR_27;
  if (VAR_40 & VAR_12)
   VAR_45 |= VAR_30;
  else
   VAR_45 &= ~VAR_30;
  if (VAR_45 != VAR_42)
   FUNC_1(VAR_37, VAR_41, VAR_35, VAR_45);
  break;
 case 129:
  FUNC_0(VAR_37, VAR_41, VAR_34, &VAR_44);
  VAR_45 = VAR_44;
  VAR_45 &= ~(VAR_24 |
     VAR_19 |
     VAR_18 |
     VAR_21 |
     VAR_20);
  if (VAR_40 & VAR_7)
   VAR_45 |= VAR_24;
  if (VAR_40 & VAR_2)
   VAR_45 |= VAR_19;
  if (VAR_40 & VAR_1)
   VAR_45 |= VAR_18;
  if (VAR_40 & VAR_4)
   VAR_45 |= VAR_21;
  if (VAR_40 & VAR_3)
   VAR_45 |= VAR_20;
  if (VAR_45 != VAR_44)
   FUNC_1(VAR_37, VAR_41, VAR_34, VAR_45);
  break;
 default:
  break;
 }
}
