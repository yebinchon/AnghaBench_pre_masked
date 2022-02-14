
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* ports; } ;
typedef int phy_interface_t ;
struct TYPE_2__ {int cmode; scalar_t__ serdes_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;




 int FUNC_0 (struct mv88e6xxx_chip*,int,int ,int*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int,int ,int) ;
 scalar_t__ FUNC_2 (struct mv88e6xxx_chip*,int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,scalar_t__) ;
 int FUNC_4 (struct mv88e6xxx_chip*,int,scalar_t__) ;
 int FUNC_5 (struct mv88e6xxx_chip*,int,scalar_t__) ;
 int FUNC_6 (struct mv88e6xxx_chip*,int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct mv88e6xxx_chip *VAR_9, int VAR_10,
        phy_interface_t VAR_11)
{
 u8 VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 int VAR_15;




 if (VAR_11 == VAR_8)
  VAR_11 = 133;

 switch (VAR_11) {
 case 133:
  VAR_13 = VAR_2;
  break;
 case 130:
  VAR_13 = VAR_6;
  break;
 case 132:
  VAR_13 = VAR_3;
  break;
 case 128:
 case 129:
  VAR_13 = VAR_7;
  break;
 case 131:
  VAR_13 = VAR_5;
  break;
 default:
  VAR_13 = 0;
 }


 if (VAR_13 == VAR_9->ports[VAR_10].cmode)
  return 0;

 VAR_12 = FUNC_2(VAR_9, VAR_10);
 if (VAR_12) {
  if (VAR_9->ports[VAR_10].serdes_irq) {
   VAR_15 = FUNC_3(VAR_9, VAR_10, VAR_12);
   if (VAR_15)
    return VAR_15;
  }

  VAR_15 = FUNC_5(VAR_9, VAR_10, VAR_12);
  if (VAR_15)
   return VAR_15;
 }

 VAR_9->ports[VAR_10].cmode = 0;

 if (VAR_13) {
  VAR_15 = FUNC_0(VAR_9, VAR_10, VAR_1, &VAR_14);
  if (VAR_15)
   return VAR_15;

  VAR_14 &= ~VAR_4;
  VAR_14 |= VAR_13;

  VAR_15 = FUNC_1(VAR_9, VAR_10, VAR_1, VAR_14);
  if (VAR_15)
   return VAR_15;

  VAR_9->ports[VAR_10].cmode = VAR_13;

  VAR_12 = FUNC_2(VAR_9, VAR_10);
  if (!VAR_12)
   return -VAR_0;

  VAR_15 = FUNC_6(VAR_9, VAR_10, VAR_12);
  if (VAR_15)
   return VAR_15;

  if (VAR_9->ports[VAR_10].serdes_irq) {
   VAR_15 = FUNC_4(VAR_9, VAR_10, VAR_12);
   if (VAR_15)
    return VAR_15;
  }
 }

 return 0;
}
