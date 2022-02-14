
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct jsm_channel {TYPE_1__* ch_cls_uart; int ch_mostat; } ;
struct TYPE_2__ {int mcr; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct jsm_channel *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(VAR_0->ch_mostat, &VAR_0->ch_cls_uart->mcr);
}
