
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ num_vectors; int roce_io_base; int netdev; int base_vector; } ;
struct TYPE_5__ {int netdev; } ;
struct hnae3_handle {int numa_node_mask; int ae_algo; int pdev; TYPE_2__ rinfo; TYPE_1__ kinfo; } ;
struct hclge_vport {TYPE_4__* back; struct hnae3_handle roce; struct hnae3_handle nic; } ;
struct TYPE_7__ {int io_base; } ;
struct TYPE_8__ {scalar_t__ num_roce_msi; scalar_t__ num_msi_left; TYPE_3__ hw; int roce_base_vector; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct hclge_vport *VAR_1)
{
 struct hnae3_handle *VAR_2 = &VAR_1->roce;
 struct hnae3_handle *VAR_3 = &VAR_1->nic;

 VAR_2->rinfo.num_vectors = VAR_1->back->num_roce_msi;

 if (VAR_1->back->num_msi_left < VAR_1->roce.rinfo.num_vectors ||
     VAR_1->back->num_msi_left == 0)
  return -VAR_0;

 VAR_2->rinfo.base_vector = VAR_1->back->roce_base_vector;

 VAR_2->rinfo.netdev = VAR_3->kinfo.netdev;
 VAR_2->rinfo.roce_io_base = VAR_1->back->hw.io_base;

 VAR_2->pdev = VAR_3->pdev;
 VAR_2->ae_algo = VAR_3->ae_algo;
 VAR_2->numa_node_mask = VAR_3->numa_node_mask;

 return 0;
}
