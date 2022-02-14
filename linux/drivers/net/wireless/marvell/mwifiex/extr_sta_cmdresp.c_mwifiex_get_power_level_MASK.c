
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct mwifiex_types_power_group {int length; } ;
struct mwifiex_private {void* max_tx_power_level; void* min_tx_power_level; } ;
struct mwifiex_power_group {int power_max; int power_min; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_0, void *VAR_1)
{
 int VAR_2, VAR_3 = -1, VAR_4 = -1;
 struct mwifiex_types_power_group *VAR_5;
 struct mwifiex_power_group *VAR_6;

 if (!VAR_1)
  return -1;

 VAR_5 = (struct mwifiex_types_power_group *)((u8 *)VAR_1);
 VAR_6 = (struct mwifiex_power_group *)
  ((u8 *) VAR_5 + sizeof(struct mwifiex_types_power_group));
 VAR_2 = FUNC_0(VAR_5->length);


 if (VAR_2 < sizeof(struct mwifiex_power_group))
  return 0;

 VAR_3 = VAR_6->power_max;
 VAR_4 = VAR_6->power_min;
 VAR_2 -= sizeof(struct mwifiex_power_group);

 while (VAR_2 >= sizeof(struct mwifiex_power_group)) {
  VAR_6++;
  if (VAR_3 < VAR_6->power_max)
   VAR_3 = VAR_6->power_max;

  if (VAR_4 > VAR_6->power_min)
   VAR_4 = VAR_6->power_min;

  VAR_2 -= sizeof(struct mwifiex_power_group);
 }
 VAR_0->min_tx_power_level = (u8) VAR_4;
 VAR_0->max_tx_power_level = (u8) VAR_3;

 return 0;
}
