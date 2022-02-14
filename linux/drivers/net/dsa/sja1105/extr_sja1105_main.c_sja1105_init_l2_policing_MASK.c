
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sja1105_table {struct sja1105_l2_policing_entry* entries; scalar_t__ entry_count; TYPE_2__* ops; } ;
struct TYPE_3__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_1__ static_config; } ;
struct sja1105_l2_policing_entry {int dummy; } ;
struct TYPE_4__ {int unpacked_entry_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sja1105_l2_policing_entry* FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (struct sja1105_l2_policing_entry*) ;
 int FUNC_2 (struct sja1105_l2_policing_entry*,int) ;

__attribute__((used)) static int FUNC_3(struct sja1105_private *VAR_6)
{
 struct sja1105_l2_policing_entry *VAR_7;
 struct sja1105_table *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_8 = &VAR_6->static_config.tables[VAR_0];


 if (VAR_8->entry_count) {
  FUNC_1(VAR_8->entries);
  VAR_8->entry_count = 0;
 }

 VAR_8->entries = FUNC_0(VAR_3,
     VAR_8->ops->unpacked_entry_size, VAR_2);
 if (!VAR_8->entries)
  return -VAR_1;

 VAR_8->entry_count = VAR_3;

 VAR_7 = VAR_8->entries;




 for (VAR_9 = 0, VAR_11 = 0; VAR_9 < VAR_4; VAR_9++) {
  int VAR_12 = (VAR_4 * VAR_5) + VAR_9;

  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++, VAR_11++)
   FUNC_2(VAR_7, VAR_11);


  FUNC_2(VAR_7, VAR_12);
 }
 return 0;
}
