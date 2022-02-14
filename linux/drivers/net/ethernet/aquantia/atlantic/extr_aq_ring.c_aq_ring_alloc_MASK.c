
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_ring_s {int size; int dx_size; int dx_ring; int dx_ring_pa; int buff_ring; } ;
struct aq_ring_buff_s {int dummy; } ;
struct aq_nic_s {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_ring_s*) ;
 int FUNC_2 (int ,int,int *,int ) ;
 int FUNC_3 (int,int,int ) ;

__attribute__((used)) static struct aq_ring_s *FUNC_4(struct aq_ring_s *VAR_2,
           struct aq_nic_s *VAR_3)
{
 int VAR_4 = 0;

 VAR_2->buff_ring =
  FUNC_3(VAR_2->size, sizeof(struct aq_ring_buff_s), VAR_1);

 if (!VAR_2->buff_ring) {
  VAR_4 = -VAR_0;
  goto err_exit;
 }
 VAR_2->dx_ring = FUNC_2(FUNC_0(VAR_3),
        VAR_2->size * VAR_2->dx_size,
        &VAR_2->dx_ring_pa, VAR_1);
 if (!VAR_2->dx_ring) {
  VAR_4 = -VAR_0;
  goto err_exit;
 }

err_exit:
 if (VAR_4 < 0) {
  FUNC_1(VAR_2);
  VAR_2 = ((void*)0);
 }
 return VAR_2;
}
