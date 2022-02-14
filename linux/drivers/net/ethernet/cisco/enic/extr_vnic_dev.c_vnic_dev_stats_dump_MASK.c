
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vnic_stats {int dummy; } ;
struct vnic_dev {int stats_pa; struct vnic_stats* stats; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vnic_stats* FUNC_0 (int ,int,int*) ;
 int FUNC_1 (struct vnic_dev*,int ,int*,int*,int) ;

int FUNC_2(struct vnic_dev *VAR_2, struct vnic_stats **VAR_3)
{
 u64 VAR_4, VAR_5;
 int VAR_6 = 1000;

 if (!VAR_2->stats) {
  VAR_2->stats = FUNC_0(VAR_2->pdev,
   sizeof(struct vnic_stats), &VAR_2->stats_pa);
  if (!VAR_2->stats)
   return -VAR_1;
 }

 *VAR_3 = VAR_2->stats;
 VAR_4 = VAR_2->stats_pa;
 VAR_5 = sizeof(struct vnic_stats);

 return FUNC_1(VAR_2, VAR_0, &VAR_4, &VAR_5, VAR_6);
}
