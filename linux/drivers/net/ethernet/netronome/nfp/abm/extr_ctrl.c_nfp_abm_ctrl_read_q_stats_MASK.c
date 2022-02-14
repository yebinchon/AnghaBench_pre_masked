
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_alink_stats {int overlimits; int drops; int backlog_pkts; int backlog_bytes; int tx_bytes; int tx_pkts; } ;
struct nfp_abm_link {TYPE_1__* abm; } ;
struct TYPE_2__ {int qm_stats; int q_lvls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nfp_abm_link*,int ,int ,int ,unsigned int,unsigned int,int,int *) ;
 int FUNC_1 (struct nfp_abm_link*,unsigned int,unsigned int,int ,int *) ;

int FUNC_2(struct nfp_abm_link *VAR_8, unsigned int VAR_9,
         unsigned int VAR_10, struct nfp_alink_stats *VAR_11)
{
 int VAR_12;

 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_10, VAR_7,
          &VAR_11->tx_pkts);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_1(VAR_8, VAR_9, VAR_10, VAR_6,
          &VAR_11->tx_bytes);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_8->abm->q_lvls, VAR_2,
    VAR_0, VAR_9, VAR_10, 0,
    &VAR_11->backlog_bytes);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_8->abm->q_lvls,
    VAR_2, VAR_1,
    VAR_9, VAR_10, 0, &VAR_11->backlog_pkts);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_8, VAR_8->abm->qm_stats,
    VAR_5, VAR_3,
    VAR_9, VAR_10, 1, &VAR_11->drops);
 if (VAR_12)
  return VAR_12;

 return FUNC_0(VAR_8, VAR_8->abm->qm_stats,
     VAR_5, VAR_4,
     VAR_9, VAR_10, 1, &VAR_11->overlimits);
}
