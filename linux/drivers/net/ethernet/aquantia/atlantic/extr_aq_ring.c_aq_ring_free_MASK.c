
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_ring_s {int size; int dx_size; int dx_ring_pa; scalar_t__ dx_ring; int aq_nic; int buff_ring; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,scalar_t__,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct aq_ring_s *VAR_0)
{
 if (!VAR_0)
  goto err_exit;

 FUNC_2(VAR_0->buff_ring);

 if (VAR_0->dx_ring)
  FUNC_1(FUNC_0(VAR_0->aq_nic),
      VAR_0->size * VAR_0->dx_size, VAR_0->dx_ring,
      VAR_0->dx_ring_pa);

err_exit:;
}
