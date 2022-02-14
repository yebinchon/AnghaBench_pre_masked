
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sja1105_table {struct sja1105_l2_forwarding_entry* entries; scalar_t__ entry_count; TYPE_2__* ops; } ;
struct TYPE_3__ {struct sja1105_table* tables; } ;
struct sja1105_private {int ds; TYPE_1__ static_config; } ;
struct sja1105_l2_forwarding_entry {int* vlan_pmap; } ;
struct TYPE_4__ {int unpacked_entry_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int ,int) ;
 struct sja1105_l2_forwarding_entry* FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (struct sja1105_l2_forwarding_entry*) ;
 int FUNC_3 (struct sja1105_l2_forwarding_entry*,unsigned int,int,int) ;

__attribute__((used)) static int FUNC_4(struct sja1105_private *VAR_6)
{
 struct sja1105_l2_forwarding_entry *VAR_7;
 struct sja1105_table *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = &VAR_6->static_config.tables[VAR_0];

 if (VAR_8->entry_count) {
  FUNC_2(VAR_8->entries);
  VAR_8->entry_count = 0;
 }

 VAR_8->entries = FUNC_1(VAR_3,
     VAR_8->ops->unpacked_entry_size, VAR_2);
 if (!VAR_8->entries)
  return -VAR_1;

 VAR_8->entry_count = VAR_3;

 VAR_7 = VAR_8->entries;


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  unsigned int VAR_11 = FUNC_0(VAR_6->ds, VAR_9);

  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
   VAR_7[VAR_9].vlan_pmap[VAR_10] = VAR_10;

  if (VAR_9 == VAR_11)
   continue;

  FUNC_3(VAR_7, VAR_9, VAR_11, 1);
  FUNC_3(VAR_7, VAR_11, VAR_9, 1);
 }



 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++)
  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++)
   VAR_7[VAR_4 + VAR_9].vlan_pmap[VAR_10] = VAR_9;

 return 0;
}
