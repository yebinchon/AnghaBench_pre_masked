
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int (* write ) (int ,scalar_t__,int) ;int client; } ;
struct adt7316_chip_info {int config3; int dac_bits; TYPE_1__ bus; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (char const*,int,int*) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,scalar_t__,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct adt7316_chip_info *VAR_9,
     int VAR_10, const char *VAR_11, size_t VAR_12)
{
 u8 VAR_13, VAR_14, VAR_15, VAR_16;
 u16 VAR_17;
 int VAR_18;

 if (VAR_10 >= VAR_3 ||
     (VAR_10 == 0 &&
     (VAR_9->config3 & VAR_5)) ||
     (VAR_10 == 1 &&
     (VAR_9->config3 & VAR_4)))
  return -VAR_8;

 VAR_16 = VAR_9->dac_bits - 8;

 VAR_18 = FUNC_0(VAR_11, 10, &VAR_17);
 if (VAR_18 || VAR_17 >= (1 << VAR_9->dac_bits))
  return -VAR_6;

 if (VAR_9->dac_bits > 8) {
  VAR_14 = VAR_17 & ((1 << VAR_16) - 1);
  if (VAR_9->dac_bits == 12)
   VAR_15 = VAR_14 << VAR_1;
  else
   VAR_15 = VAR_14 << VAR_0;
  VAR_18 = VAR_9->bus.write(VAR_9->bus.client,
   VAR_2 + VAR_10 * 2, VAR_15);
  if (VAR_18)
   return -VAR_7;
 }

 VAR_13 = VAR_17 >> VAR_16;
 VAR_18 = VAR_9->bus.write(VAR_9->bus.client,
  VAR_2 + 1 + VAR_10 * 2, VAR_13);
 if (VAR_18)
  return -VAR_7;

 return VAR_12;
}
