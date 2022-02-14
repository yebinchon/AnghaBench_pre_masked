
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {uintptr_t addr; int send_flags; int lkey; int length; } ;
struct TYPE_5__ {scalar_t__ addr; int length; int send_flags; } ;
struct postsend_info {TYPE_4__ read; TYPE_1__ write; } ;
struct mlx5dr_send_ring {int pending_wqe; int signal_th; TYPE_3__* mr; } ;
struct TYPE_6__ {int key; } ;
struct TYPE_7__ {TYPE_2__ mkey; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mlx5dr_send_ring *VAR_1,
         struct postsend_info *VAR_2)
{
 VAR_1->pending_wqe++;

 if (VAR_1->pending_wqe % VAR_1->signal_th == 0)
  VAR_2->write.send_flags |= VAR_0;

 VAR_1->pending_wqe++;
 VAR_2->read.length = VAR_2->write.length;

 VAR_2->read.addr = (uintptr_t)VAR_2->write.addr;
 VAR_2->read.lkey = VAR_1->mr->mkey.key;

 if (VAR_1->pending_wqe % VAR_1->signal_th == 0)
  VAR_2->read.send_flags = VAR_0;
 else
  VAR_2->read.send_flags = 0;
}
