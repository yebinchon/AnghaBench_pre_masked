
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ind_tbl_size; int msg; } ;
union nic_mbx {TYPE_1__ rss_size; } ;
struct nicpf {TYPE_2__* hw; } ;
struct TYPE_4__ {int rss_ind_tbl_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct nicpf*,int,union nic_mbx*) ;

__attribute__((used)) static void FUNC_1(struct nicpf *VAR_1, int VAR_2)
{
 union nic_mbx VAR_3 = {};

 VAR_3.rss_size.msg = VAR_0;
 VAR_3.rss_size.ind_tbl_size = VAR_1->hw->rss_ind_tbl_size;
 FUNC_0(VAR_1, VAR_2, &VAR_3);
}
