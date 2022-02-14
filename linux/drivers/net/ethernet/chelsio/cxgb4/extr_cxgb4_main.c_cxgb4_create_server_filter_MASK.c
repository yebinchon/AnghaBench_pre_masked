
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_10__ {unsigned char iport; int proto; int * lip; int lport; } ;
struct TYPE_9__ {int* lip; unsigned char iport; int proto; int lport; } ;
struct TYPE_12__ {int dirsteer; unsigned int iq; int rpttid; TYPE_4__ mask; TYPE_3__ val; } ;
struct filter_entry {int locked; scalar_t__ tid; TYPE_6__ fs; scalar_t__ valid; } ;
struct ch_filter_specification {int dummy; } ;
struct TYPE_11__ {scalar_t__ ftid_base; struct filter_entry* ftid_tab; scalar_t__ nftids; scalar_t__ sftid_base; } ;
struct TYPE_7__ {int vlan_pri_map; } ;
struct TYPE_8__ {TYPE_1__ tp; } ;
struct adapter {TYPE_5__ tids; TYPE_2__ params; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adapter*,struct filter_entry*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 struct adapter* FUNC_3 (struct net_device const*) ;
 int FUNC_4 (struct adapter*,unsigned int) ;
 int FUNC_5 (struct filter_entry*) ;

int FUNC_6(const struct net_device *VAR_3, unsigned int VAR_4,
  __be32 VAR_5, __be16 VAR_6, __be16 VAR_7,
  unsigned int VAR_8, unsigned char VAR_9, unsigned char VAR_10)
{
 int VAR_11;
 struct filter_entry *VAR_12;
 struct adapter *VAR_13;
 int VAR_14;
 u8 *VAR_15;

 VAR_13 = FUNC_3(VAR_3);


 VAR_4 -= VAR_13->tids.sftid_base;
 VAR_4 += VAR_13->tids.nftids;



 VAR_12 = &VAR_13->tids.ftid_tab[VAR_4];
 VAR_11 = FUNC_5(VAR_12);
 if (VAR_11)
  return VAR_11;




 if (VAR_12->valid)
  FUNC_0(VAR_13, VAR_12);


 FUNC_2(&VAR_12->fs, 0, sizeof(struct ch_filter_specification));
 VAR_12->fs.val.lport = FUNC_1(VAR_6);
 VAR_12->fs.mask.lport = ~0;
 VAR_15 = (u8 *)&VAR_5;
 if ((VAR_15[0] | VAR_15[1] | VAR_15[2] | VAR_15[3]) != 0) {
  for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
   VAR_12->fs.val.lip[VAR_14] = VAR_15[VAR_14];
   VAR_12->fs.mask.lip[VAR_14] = ~0;
  }
  if (VAR_13->params.tp.vlan_pri_map & VAR_1) {
   VAR_12->fs.val.iport = VAR_9;
   VAR_12->fs.mask.iport = VAR_10;
  }
 }

 if (VAR_13->params.tp.vlan_pri_map & VAR_2) {
  VAR_12->fs.val.proto = VAR_0;
  VAR_12->fs.mask.proto = ~0;
 }

 VAR_12->fs.dirsteer = 1;
 VAR_12->fs.iq = VAR_8;

 VAR_12->locked = 1;
 VAR_12->fs.rpttid = 1;




 VAR_12->tid = VAR_4 + VAR_13->tids.ftid_base;
 VAR_11 = FUNC_4(VAR_13, VAR_4);
 if (VAR_11) {
  FUNC_0(VAR_13, VAR_12);
  return VAR_11;
 }

 return 0;
}
