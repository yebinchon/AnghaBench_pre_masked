
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ tx; } ;
struct htc_packet {TYPE_2__ info; int skb; } ;
struct htc_frame_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct htc_packet *VAR_1)
{
 if (VAR_1->info.tx.flags & VAR_0) {
  FUNC_0(VAR_1->skb, sizeof(struct htc_frame_hdr));
  VAR_1->info.tx.flags &= ~VAR_0;
 }
}
