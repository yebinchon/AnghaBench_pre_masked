
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tid_info {int hash_base; int ntids; int nstids; int stid_base; int natids; int atids_in_use; int ftid_base; int nftids; int nsftids; int sftid_base; int sftids_in_use; scalar_t__ v6_stids_in_use; scalar_t__ stids_in_use; int tids_in_use; int conns_in_use; int hash_tids_in_use; int aftid_end; int aftid_base; } ;
struct seq_file {struct adapter* private; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {int flags; struct tid_info tids; TYPE_1__ params; } ;
typedef enum chip_type { ____Placeholder_chip_type } chip_type ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,char*,int,...) ;
 int FUNC_3 (struct adapter*,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_9, void *VAR_10)
{
 unsigned int VAR_11 = 0;
 struct adapter *VAR_12 = VAR_9->private;
 const struct tid_info *VAR_13 = &VAR_12->tids;
 enum chip_type VAR_14 = FUNC_0(VAR_12->params.chip);

 if (VAR_14 > VAR_0)
  VAR_11 = FUNC_3(VAR_12, VAR_3);

 if (FUNC_3(VAR_12, VAR_6) & VAR_2) {
  unsigned int VAR_15;
  FUNC_2(VAR_9, "Connections in use: %u\n",
      FUNC_1(&VAR_13->conns_in_use));

  if (VAR_14 <= VAR_0)
   VAR_15 = FUNC_3(VAR_12, VAR_7) / 4;
  else
   VAR_15 = FUNC_3(VAR_12, VAR_8);

  if (VAR_15) {
   FUNC_2(VAR_9, "TID range: %u..%u/%u..%u", VAR_11,
       VAR_15 - 1, VAR_12->tids.hash_base,
       VAR_13->ntids - 1);
   FUNC_2(VAR_9, ", in use: %u/%u\n",
       FUNC_1(&VAR_13->tids_in_use),
       FUNC_1(&VAR_13->hash_tids_in_use));
  } else if (VAR_12->flags & VAR_1) {
   FUNC_2(VAR_9, "TID range: %u..%u/%u..%u",
       VAR_13->aftid_base,
       VAR_13->aftid_end,
       VAR_12->tids.hash_base,
       VAR_13->ntids - 1);
   FUNC_2(VAR_9, ", in use: %u/%u\n",
       FUNC_1(&VAR_13->tids_in_use),
       FUNC_1(&VAR_13->hash_tids_in_use));
  } else {
   FUNC_2(VAR_9, "TID range: %u..%u",
       VAR_12->tids.hash_base,
       VAR_13->ntids - 1);
   FUNC_2(VAR_9, ", in use: %u\n",
       FUNC_1(&VAR_13->hash_tids_in_use));
  }
 } else if (VAR_13->ntids) {
  FUNC_2(VAR_9, "Connections in use: %u\n",
      FUNC_1(&VAR_13->conns_in_use));

  FUNC_2(VAR_9, "TID range: %u..%u", VAR_11,
      VAR_11 + VAR_13->ntids - 1);
  FUNC_2(VAR_9, ", in use: %u\n",
      FUNC_1(&VAR_13->tids_in_use));
 }

 if (VAR_13->nstids)
  FUNC_2(VAR_9, "STID range: %u..%u, in use-IPv4/IPv6: %u/%u\n",
      (!VAR_13->stid_base &&
      (VAR_14 <= VAR_0)) ?
      VAR_13->stid_base + 1 : VAR_13->stid_base,
      VAR_13->stid_base + VAR_13->nstids - 1,
      VAR_13->stids_in_use - VAR_13->v6_stids_in_use,
      VAR_13->v6_stids_in_use);

 if (VAR_13->natids)
  FUNC_2(VAR_9, "ATID range: 0..%u, in use: %u\n",
      VAR_13->natids - 1, VAR_13->atids_in_use);
 FUNC_2(VAR_9, "FTID range: %u..%u\n", VAR_13->ftid_base,
     VAR_13->ftid_base + VAR_13->nftids - 1);
 if (VAR_13->nsftids)
  FUNC_2(VAR_9, "SFTID range: %u..%u in use: %u\n",
      VAR_13->sftid_base, VAR_13->sftid_base + VAR_13->nsftids - 2,
      VAR_13->sftids_in_use);
 if (VAR_13->ntids)
  FUNC_2(VAR_9, "HW TID usage: %u IP users, %u IPv6 users\n",
      FUNC_3(VAR_12, VAR_4),
      FUNC_3(VAR_12, VAR_5));
 return 0;
}
