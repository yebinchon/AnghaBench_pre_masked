
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct sja1105_table {scalar_t__ entries; scalar_t__ entry_count; TYPE_2__* ops; } ;
struct TYPE_3__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_1__ static_config; } ;
struct sja1105_l2_lookup_params_entry {int poly; int shared_learn; int no_enf_hostprt; int no_mgmt_learn; int use_static; int owr_dyn; int drpnolearn; int maxaddrp; int start_dynspc; int dyn_tbsz; int maxage; } ;
struct TYPE_4__ {int unpacked_entry_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sja1105_private *VAR_7)
{
 struct sja1105_table *VAR_8;
 u64 VAR_9 = VAR_4 / VAR_6;
 struct sja1105_l2_lookup_params_entry VAR_10 = {

  .maxage = FUNC_0(300000),

  .dyn_tbsz = VAR_3,

  .start_dynspc = 0,
  .maxaddrp = {VAR_9, VAR_9, VAR_9,
        VAR_9, VAR_9, },

  .poly = 0x97,



  .shared_learn = 1,




  .no_enf_hostprt = 0,



  .no_mgmt_learn = 1,

  .use_static = 1,



  .owr_dyn = 1,
  .drpnolearn = 1,
 };

 VAR_8 = &VAR_7->static_config.tables[VAR_0];

 if (VAR_8->entry_count) {
  FUNC_2(VAR_8->entries);
  VAR_8->entry_count = 0;
 }

 VAR_8->entries = FUNC_1(VAR_5,
     VAR_8->ops->unpacked_entry_size, VAR_2);
 if (!VAR_8->entries)
  return -VAR_1;

 VAR_8->entry_count = VAR_5;


 ((struct sja1105_l2_lookup_params_entry *)VAR_8->entries)[0] =
    VAR_10;

 return 0;
}
