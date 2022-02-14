
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct filter_entry {unsigned int tid; int valid; } ;
struct TYPE_4__ {int chip; } ;
struct TYPE_3__ {unsigned int ntids; int nftids; int nsftids; struct filter_entry* ftid_tab; struct filter_entry** tid_tab; } ;
struct adapter {int win0_lock; TYPE_2__ params; TYPE_1__ tids; } ;
typedef int be64_count ;
typedef int be64_byte_count ;
typedef int be32_count ;
typedef int __be64 ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct adapter*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct adapter*,int ,int ,unsigned int,int,int *,int ) ;
 unsigned int FUNC_7 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_8(struct adapter *VAR_7, unsigned int VAR_8,
       u64 *VAR_9, u64 *VAR_10, bool VAR_11)
{
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14;
 struct filter_entry *VAR_15;
 __be64 VAR_16;
 int VAR_17;

 VAR_12 = FUNC_7(VAR_7, VAR_6);
 if (FUNC_2(VAR_7) && VAR_11) {
  if (VAR_8 < VAR_7->tids.ntids) {
   VAR_15 = VAR_7->tids.tid_tab[VAR_8];
   if (!VAR_15)
    return -VAR_1;
  } else {
   return -VAR_0;
  }
 } else {
  if ((VAR_8 != (VAR_7->tids.nftids +
         VAR_7->tids.nsftids - 1)) &&
      VAR_8 >= VAR_7->tids.nftids)
   return -VAR_0;

  VAR_15 = &VAR_7->tids.ftid_tab[VAR_8];
  if (!VAR_15->valid)
   return -VAR_1;
 }
 VAR_13 = VAR_12 + VAR_15->tid * VAR_5;

 FUNC_4(&VAR_7->win0_lock);
 if (FUNC_3(VAR_7->params.chip)) {
  __be64 VAR_18;


  *VAR_10 = 0;


  VAR_14 = 4;
  VAR_17 = FUNC_6(VAR_7, VAR_2, VAR_3,
       VAR_13 + (VAR_14 * sizeof(__be32)),
       sizeof(VAR_18),
       (__be32 *)&VAR_18,
       VAR_4);
  if (VAR_17 < 0)
   goto out;
  *VAR_9 = FUNC_1(VAR_18);
 } else {
  __be32 VAR_19;


  VAR_14 = 4;
  VAR_17 = FUNC_6(VAR_7, VAR_2, VAR_3,
       VAR_13 + (VAR_14 * sizeof(__be32)),
       sizeof(VAR_16),
       &VAR_16,
       VAR_4);
  if (VAR_17 < 0)
   goto out;
  *VAR_10 = FUNC_1(VAR_16);


  VAR_14 = 6;
  VAR_17 = FUNC_6(VAR_7, VAR_2, VAR_3,
       VAR_13 + (VAR_14 * sizeof(__be32)),
       sizeof(VAR_19),
       &VAR_19,
       VAR_4);
  if (VAR_17 < 0)
   goto out;
  *VAR_9 = (u64)FUNC_0(VAR_19);
 }

out:
 FUNC_5(&VAR_7->win0_lock);
 return VAR_17;
}
