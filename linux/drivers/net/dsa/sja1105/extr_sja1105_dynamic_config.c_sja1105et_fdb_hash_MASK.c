
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_4__ {TYPE_1__* tables; } ;
struct sja1105_private {TYPE_2__ static_config; } ;
struct sja1105_l2_lookup_params_entry {int poly; scalar_t__ shared_learn; } ;
struct TYPE_3__ {struct sja1105_l2_lookup_params_entry* entries; } ;


 size_t VAR_0 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (int,int,int) ;

u8 FUNC_2(struct sja1105_private *VAR_1, const u8 *VAR_2, u16 VAR_3)
{
 struct sja1105_l2_lookup_params_entry *VAR_4 =
  VAR_1->static_config.tables[VAR_0].entries;
 u64 VAR_5 = VAR_4->poly;

 u8 VAR_6 = (u8)(1 + (VAR_5 << 1));
 u64 VAR_7 = VAR_4->shared_learn ? 0 : VAR_3;
 u64 VAR_8 = (VAR_7 << 48) | FUNC_0(VAR_2);
 u8 VAR_9 = 0;
 int VAR_10;


 for (VAR_10 = 56; VAR_10 >= 0; VAR_10 -= 8) {
  u8 VAR_11 = (VAR_8 & (0xffull << VAR_10)) >> VAR_10;

  VAR_9 = FUNC_1(VAR_9, VAR_11, VAR_6);
 }
 return VAR_9;
}
