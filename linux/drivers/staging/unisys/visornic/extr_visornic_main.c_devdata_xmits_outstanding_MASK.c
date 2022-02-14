
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sent_xmit; scalar_t__ got_xmit_done; } ;
struct visornic_devdata {TYPE_1__ chstat; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(struct visornic_devdata *VAR_1)
{
 if (VAR_1->chstat.sent_xmit >= VAR_1->chstat.got_xmit_done)
  return VAR_1->chstat.sent_xmit -
   VAR_1->chstat.got_xmit_done;
 return (VAR_0 - VAR_1->chstat.got_xmit_done
  + VAR_1->chstat.sent_xmit + 1);
}
