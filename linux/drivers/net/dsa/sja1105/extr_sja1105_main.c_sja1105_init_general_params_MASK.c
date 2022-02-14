
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sja1105_table {scalar_t__ entries; scalar_t__ entry_count; TYPE_3__* ops; } ;
struct TYPE_8__ {struct sja1105_table* tables; } ;
struct sja1105_private {TYPE_2__ static_config; TYPE_1__* ports; TYPE_4__* ds; } ;
struct sja1105_general_params_entry {int hostprio; int incl_srcpt1; int send_meta1; int incl_srcpt0; int send_meta0; int casc_port; int tpid2; int tpid; int ignore2stf; int vlmask; int vlmarker; int vllupformat; int mirr_port; int host_port; int mac_flt0; int mac_fltres0; int mac_flt1; int mac_fltres1; int switchid; int mirr_ptacu; } ;
struct TYPE_10__ {int index; } ;
struct TYPE_9__ {int unpacked_entry_size; } ;
struct TYPE_7__ {int mgmt_slot; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct sja1105_private *VAR_10)
{
 struct sja1105_general_params_entry VAR_11 = {

  .mirr_ptacu = 0,
  .switchid = VAR_10->ds->index,



  .hostprio = 7,
  .mac_fltres1 = VAR_4,
  .mac_flt1 = VAR_5,
  .incl_srcpt1 = 0,
  .send_meta1 = 0,
  .mac_fltres0 = VAR_6,
  .mac_flt0 = VAR_7,
  .incl_srcpt0 = 0,
  .send_meta0 = 0,





  .host_port = FUNC_2(VAR_10->ds, 0),

  .mirr_port = FUNC_2(VAR_10->ds, 0),







  .casc_port = VAR_9,

  .vllupformat = 0,
  .vlmarker = 0,
  .vlmask = 0,

  .ignore2stf = 0,



  .tpid = VAR_2,
  .tpid2 = VAR_2,
 };
 struct sja1105_table *VAR_12;
 int VAR_13, VAR_14 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
  if (FUNC_0(VAR_10->ds, VAR_13))
   VAR_11.casc_port = VAR_13;
  else if (FUNC_1(VAR_10->ds, VAR_13))
   VAR_10->ports[VAR_13].mgmt_slot = VAR_14++;
 }

 VAR_12 = &VAR_10->static_config.tables[VAR_0];

 if (VAR_12->entry_count) {
  FUNC_4(VAR_12->entries);
  VAR_12->entry_count = 0;
 }

 VAR_12->entries = FUNC_3(VAR_8,
     VAR_12->ops->unpacked_entry_size, VAR_3);
 if (!VAR_12->entries)
  return -VAR_1;

 VAR_12->entry_count = VAR_8;


 ((struct sja1105_general_params_entry *)VAR_12->entries)[0] =
    VAR_11;

 return 0;
}
