
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sequence; scalar_t__ cmd; } ;
struct il_rx_pkt {TYPE_1__ hdr; } ;
struct il_priv {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static inline bool FUNC_0(struct il_priv *VAR_7, struct il_rx_pkt *VAR_8)
{






 return !(VAR_8->hdr.sequence & VAR_6) &&
        VAR_8->hdr.cmd != VAR_5 && VAR_8->hdr.cmd != VAR_0 &&
        VAR_8->hdr.cmd != VAR_4 && VAR_8->hdr.cmd != VAR_2 &&
        VAR_8->hdr.cmd != VAR_3 && VAR_8->hdr.cmd != VAR_1;
}
