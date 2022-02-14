
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct filter_entry {scalar_t__ locked; } ;
struct TYPE_2__ {struct filter_entry* ftid_tab; scalar_t__ nftids; scalar_t__ sftid_base; } ;
struct adapter {TYPE_1__ tids; } ;


 int FUNC_0 (struct adapter*,unsigned int) ;
 struct adapter* FUNC_1 (struct net_device const*) ;

int FUNC_2(const struct net_device *VAR_0, unsigned int VAR_1,
  unsigned int VAR_2, bool VAR_3)
{
 struct filter_entry *VAR_4;
 struct adapter *VAR_5;

 VAR_5 = FUNC_1(VAR_0);


 VAR_1 -= VAR_5->tids.sftid_base;
 VAR_1 += VAR_5->tids.nftids;

 VAR_4 = &VAR_5->tids.ftid_tab[VAR_1];

 VAR_4->locked = 0;

 return FUNC_0(VAR_5, VAR_1);
}
