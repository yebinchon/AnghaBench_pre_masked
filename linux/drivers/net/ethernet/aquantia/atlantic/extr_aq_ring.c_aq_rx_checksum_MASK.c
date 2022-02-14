
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {void* ip_summed; } ;
struct TYPE_7__ {int errors; } ;
struct TYPE_8__ {TYPE_3__ rx; } ;
struct aq_ring_s {TYPE_4__ stats; TYPE_2__* aq_nic; } ;
struct aq_ring_buff_s {scalar_t__ is_tcp_cso; scalar_t__ is_udp_cso; scalar_t__ is_ip_cso; int is_cso_err; } ;
struct TYPE_6__ {TYPE_1__* ndev; } ;
struct TYPE_5__ {int features; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct aq_ring_s *VAR_2,
      struct aq_ring_buff_s *VAR_3,
      struct sk_buff *VAR_4)
{
 if (!(VAR_2->aq_nic->ndev->features & VAR_1))
  return;

 if (FUNC_1(VAR_3->is_cso_err)) {
  ++VAR_2->stats.rx.errors;
  VAR_4->ip_summed = VAR_0;
  return;
 }
 if (VAR_3->is_ip_cso) {
  FUNC_0(VAR_4);
 } else {
  VAR_4->ip_summed = VAR_0;
 }

 if (VAR_3->is_udp_cso || VAR_3->is_tcp_cso)
  FUNC_0(VAR_4);
}
