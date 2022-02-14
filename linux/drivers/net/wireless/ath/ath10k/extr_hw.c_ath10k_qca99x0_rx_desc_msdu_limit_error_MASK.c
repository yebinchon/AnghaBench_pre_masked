
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int info0; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct htt_rx_desc {TYPE_2__ msdu_end; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct htt_rx_desc *VAR_1)
{
 return !!(VAR_1->msdu_end.common.info0 &
    FUNC_0(VAR_0));
}
