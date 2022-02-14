
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct filter_entry {int fs; scalar_t__ pending; scalar_t__ valid; } ;
struct TYPE_2__ {unsigned int nftids; unsigned int nsftids; unsigned int hash_base; unsigned int ntids; scalar_t__* tid_tab; struct filter_entry* ftid_tab; } ;
struct adapter {TYPE_1__ tids; struct net_device** port; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,unsigned int,int *) ;
 scalar_t__ FUNC_1 (struct adapter*) ;
 unsigned int FUNC_2 (struct adapter*,int ) ;

void FUNC_3(struct adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->port[0];
 unsigned int VAR_3;

 if (VAR_1->tids.ftid_tab) {
  struct filter_entry *VAR_4 = &VAR_1->tids.ftid_tab[0];
  unsigned int VAR_5 = VAR_1->tids.nftids +
     VAR_1->tids.nsftids;

  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++, VAR_4++)
   if (VAR_4->valid || VAR_4->pending)
    FUNC_0(VAR_2, VAR_3, &VAR_4->fs);
 }


 if (FUNC_1(VAR_1) && VAR_1->tids.tid_tab) {
  struct filter_entry *VAR_6;
  unsigned int VAR_7;

  for (VAR_3 = VAR_1->tids.hash_base;
       VAR_3 <= VAR_1->tids.ntids; VAR_3++) {
   VAR_6 = (struct filter_entry *)
    VAR_1->tids.tid_tab[VAR_3];

   if (VAR_6 && (VAR_6->valid || VAR_6->pending))
    FUNC_0(VAR_2, VAR_3, &VAR_6->fs);
  }

  VAR_7 = FUNC_2(VAR_1, VAR_0);
  for (VAR_3 = 0; VAR_3 < VAR_7; VAR_3++) {
   VAR_6 = (struct filter_entry *)VAR_1->tids.tid_tab[VAR_3];

   if (VAR_6 && (VAR_6->valid || VAR_6->pending))
    FUNC_0(VAR_2, VAR_3, &VAR_6->fs);
  }
 }
}
