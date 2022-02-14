
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int (* read ) (int ,scalar_t__,int*) ;int client; } ;
struct adt7316_chip_info {int config3; int dac_bits; TYPE_1__ bus; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (int ,scalar_t__,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct adt7316_chip_info *VAR_8,
    int VAR_9, char *VAR_10)
{
 u16 VAR_11 = 0;
 u8 VAR_12, VAR_13, VAR_14;
 int VAR_15;

 if (VAR_9 >= VAR_3 ||
     (VAR_9 == 0 &&
     (VAR_8->config3 & VAR_5)) ||
     (VAR_9 == 1 &&
     (VAR_8->config3 & VAR_4)))
  return -VAR_7;

 VAR_14 = VAR_8->dac_bits - 8;

 if (VAR_8->dac_bits > 8) {
  VAR_15 = VAR_8->bus.read(VAR_8->bus.client,
   VAR_2 + VAR_9 * 2, &VAR_13);
  if (VAR_15)
   return -VAR_6;
 }

 VAR_15 = VAR_8->bus.read(VAR_8->bus.client,
  VAR_2 + 1 + VAR_9 * 2, &VAR_12);
 if (VAR_15)
  return -VAR_6;

 if (VAR_8->dac_bits == 12)
  VAR_11 = VAR_13 >> VAR_1;
 else if (VAR_8->dac_bits == 10)
  VAR_11 = VAR_13 >> VAR_0;
 VAR_11 |= VAR_12 << VAR_14;

 return FUNC_0(VAR_10, "%d\n", VAR_11);
}
