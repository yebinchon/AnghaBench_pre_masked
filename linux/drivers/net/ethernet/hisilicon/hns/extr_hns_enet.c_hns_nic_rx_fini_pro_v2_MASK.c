
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_nic_ring_data {struct hnae_ring* ring; } ;
struct hnae_ring {TYPE_2__* q; scalar_t__ io_base; } ;
struct TYPE_4__ {TYPE_1__* handle; } ;
struct TYPE_3__ {scalar_t__ coal_adapt_en; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hnae_ring*) ;
 int FUNC_1 (struct hns_nic_ring_data*) ;
 int FUNC_2 (struct hnae_ring*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct hns_nic_ring_data *VAR_1)
{
 struct hnae_ring *VAR_2 = VAR_1->ring;
 int VAR_3;

 FUNC_2(VAR_2);
 VAR_3 = FUNC_3(VAR_2->io_base + VAR_0);

 if (VAR_3 <= FUNC_0(VAR_2)) {
  if (VAR_2->q->handle->coal_adapt_en)
   FUNC_1(VAR_1);

  return 1;
 }

 return 0;
}
