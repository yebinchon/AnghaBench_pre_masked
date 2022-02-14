
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct switchtec_ntb {int db_valid_mask; int db_mask; int db_shift; int db_mask_lock; TYPE_1__* mmio_self_dbmsg; } ;
struct ntb_dev {int dummy; } ;
struct TYPE_2__ {int idb_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 struct switchtec_ntb* FUNC_1 (struct ntb_dev*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct ntb_dev *VAR_1, u64 VAR_2)
{
 unsigned long VAR_3;
 struct switchtec_ntb *VAR_4 = FUNC_1(VAR_1);

 if (VAR_2 & ~VAR_4->db_valid_mask)
  return -VAR_0;

 FUNC_2(&VAR_4->db_mask_lock, VAR_3);

 VAR_4->db_mask |= VAR_2 << VAR_4->db_shift;
 FUNC_0(~VAR_4->db_mask, &VAR_4->mmio_self_dbmsg->idb_mask);

 FUNC_3(&VAR_4->db_mask_lock, VAR_3);

 return 0;
}
