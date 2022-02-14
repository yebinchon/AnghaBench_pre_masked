
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct htc_target {int dummy; } ;
struct TYPE_4__ {int rx_flags; } ;
struct TYPE_5__ {TYPE_1__ rx; } ;
struct htc_packet {int status; TYPE_2__ info; } ;
struct TYPE_6__ {int (* rx ) (int ,struct htc_packet*) ;} ;
struct htc_endpoint {int target; TYPE_3__ ep_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,struct htc_packet*) ;
 int FUNC_1 (struct htc_packet*) ;
 int FUNC_2 (int ,struct htc_packet*) ;

__attribute__((used)) static void FUNC_3(struct htc_target *VAR_2,
         struct htc_packet *VAR_3,
         struct htc_endpoint *VAR_4)
{
 if (VAR_3->info.rx.rx_flags & VAR_1) {
  FUNC_1(VAR_3);
  VAR_3->status = -VAR_0;
  VAR_4->ep_cb.rx(VAR_4->target, VAR_3);
 } else {
  FUNC_1(VAR_3);
  FUNC_0((void *)(VAR_2), VAR_3);
 }
}
