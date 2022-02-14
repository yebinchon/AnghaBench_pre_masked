
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsm_channel {int ch_bd; TYPE_1__* ch_neo_uart; int ch_mostat; } ;
struct TYPE_2__ {int mcr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct jsm_channel *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_1(VAR_0->ch_mostat, &VAR_0->ch_neo_uart->mcr);


 FUNC_0(VAR_0->ch_bd);
}
