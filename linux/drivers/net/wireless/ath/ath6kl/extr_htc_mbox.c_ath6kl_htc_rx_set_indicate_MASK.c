
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int indicat_flags; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct htc_packet {scalar_t__ endpoint; TYPE_2__ info; } ;
struct htc_frame_hdr {scalar_t__ eid; } ;
struct htc_endpoint {int rx_bufq; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(u32 VAR_1,
           struct htc_endpoint *VAR_2,
           struct htc_packet *VAR_3)
{
 struct htc_frame_hdr *VAR_4 = (struct htc_frame_hdr *)&VAR_1;

 if (VAR_4->eid == VAR_3->endpoint) {
  if (!FUNC_0(&VAR_2->rx_bufq))
   VAR_3->info.rx.indicat_flags |=
     VAR_0;
 }
}
