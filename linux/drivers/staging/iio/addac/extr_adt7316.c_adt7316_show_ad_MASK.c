
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int (* read ) (int ,int ,int*) ;int client; } ;
struct adt7316_chip_info {int config2; int id; TYPE_1__ bus; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (char*,char*,char,...) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int*) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static ssize_t FUNC_7(struct adt7316_chip_info *VAR_18,
          int VAR_19, char *VAR_20)
{
 u16 VAR_21;
 u8 VAR_22, VAR_23;
 char VAR_24 = ' ';
 int VAR_25;

 if ((VAR_18->config2 & VAR_1) &&
     VAR_19 != (VAR_18->config2 & VAR_12))
  return -VAR_15;

 switch (VAR_19) {
 case 129:
  VAR_25 = VAR_18->bus.read(VAR_18->bus.client,
   VAR_5, &VAR_23);
  if (VAR_25)
   return -VAR_14;

  VAR_25 = VAR_18->bus.read(VAR_18->bus.client,
   VAR_0 + VAR_19, &VAR_22);
  if (VAR_25)
   return -VAR_14;

  VAR_21 = VAR_22 << VAR_10;
  VAR_21 |= VAR_23 & VAR_4;
  break;
 case 128:
  VAR_25 = VAR_18->bus.read(VAR_18->bus.client,
   VAR_5, &VAR_23);
  if (VAR_25)
   return -VAR_14;

  VAR_25 = VAR_18->bus.read(VAR_18->bus.client,

   VAR_0 + VAR_19, &VAR_22);
  if (VAR_25)
   return -VAR_14;

  VAR_21 = VAR_22 << VAR_10;
  VAR_21 |= (VAR_23 & VAR_6) >> VAR_7;
  return FUNC_0(VAR_20, "%d\n", VAR_21);
 default:
  VAR_25 = VAR_18->bus.read(VAR_18->bus.client,
   VAR_2, &VAR_23);
  if (VAR_25)
   return -VAR_14;

  VAR_25 = VAR_18->bus.read(VAR_18->bus.client,
   VAR_0 + VAR_19, &VAR_22);
  if (VAR_25)
   return -VAR_14;

  VAR_21 = VAR_22 << VAR_10;
  VAR_21 |= VAR_23 & (VAR_3 <<
   (VAR_13 * (VAR_19 -
   (VAR_8 - VAR_0))));

  if ((VAR_18->id & VAR_17) == VAR_16)
   return FUNC_0(VAR_20, "%d\n", VAR_21);

  break;
 }

 if (VAR_21 & VAR_11) {

  VAR_21 = (VAR_11 << 1) - VAR_21;
  VAR_24 = '-';
 }

 return FUNC_0(VAR_20, "%c%d.%.2d\n", VAR_24,
  (VAR_21 >> VAR_10),
  (VAR_21 & VAR_9) * 25);
}
