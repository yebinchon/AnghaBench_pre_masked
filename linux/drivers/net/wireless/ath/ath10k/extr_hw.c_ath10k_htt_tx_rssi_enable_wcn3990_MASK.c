
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags2; } ;
struct htt_resp {TYPE_1__ data_tx_completion; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct htt_resp *VAR_1)
{
 return (VAR_1->data_tx_completion.flags2 &
  VAR_0);
}
