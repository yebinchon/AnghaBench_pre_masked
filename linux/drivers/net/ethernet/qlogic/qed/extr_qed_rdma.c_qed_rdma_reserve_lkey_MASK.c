
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_rdma_device {scalar_t__ reserved_lkey; } ;
struct qed_hwfn {TYPE_1__* p_rdma_info; } ;
struct TYPE_2__ {struct qed_rdma_device* dev; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_2)
{
 struct qed_rdma_device *VAR_3 = VAR_2->p_rdma_info->dev;





 FUNC_1(VAR_2, &VAR_3->reserved_lkey);
 if (VAR_3->reserved_lkey != VAR_1) {
  FUNC_0(VAR_2,
     "Reserved lkey should be equal to RDMA_RESERVED_LKEY\n");
  return -VAR_0;
 }

 return 0;
}
