
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sja1105_table {struct sja1105_avb_params_entry* entries; scalar_t__ entry_count; TYPE_1__* ops; } ;
struct TYPE_4__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_2__ static_config; } ;
struct sja1105_avb_params_entry {int srcmeta; int destmeta; } ;
struct TYPE_3__ {int unpacked_entry_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sja1105_avb_params_entry* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (struct sja1105_avb_params_entry*) ;

__attribute__((used)) static int FUNC_2(struct sja1105_private *VAR_6,
       bool VAR_7)
{
 struct sja1105_avb_params_entry *VAR_8;
 struct sja1105_table *VAR_9;

 VAR_9 = &VAR_6->static_config.tables[VAR_0];


 if (VAR_9->entry_count) {
  FUNC_1(VAR_9->entries);
  VAR_9->entry_count = 0;
 }


 if (!VAR_7)
  return 0;

 VAR_9->entries = FUNC_0(VAR_3,
     VAR_9->ops->unpacked_entry_size, VAR_2);
 if (!VAR_9->entries)
  return -VAR_1;

 VAR_9->entry_count = VAR_3;

 VAR_8 = VAR_9->entries;

 VAR_8->destmeta = VAR_4;
 VAR_8->srcmeta = VAR_5;

 return 0;
}
