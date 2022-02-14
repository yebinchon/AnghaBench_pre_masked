
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct filter_entry {scalar_t__ valid; } ;
struct TYPE_2__ {unsigned int nftids; unsigned int nsftids; struct filter_entry* ftid_tab; } ;
struct adapter {TYPE_1__ tids; } ;


 int VAR_0 ;
 int FUNC_0 (struct adapter*,unsigned int) ;
 int FUNC_1 (struct filter_entry*) ;

int FUNC_2(struct adapter *VAR_1, unsigned int VAR_2)
{
 struct filter_entry *VAR_3;
 int VAR_4;

 if (VAR_2 >= VAR_1->tids.nftids + VAR_1->tids.nsftids)
  return -VAR_0;

 VAR_3 = &VAR_1->tids.ftid_tab[VAR_2];
 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;
 if (VAR_3->valid)
  return FUNC_0(VAR_1, VAR_2);

 return 0;
}
