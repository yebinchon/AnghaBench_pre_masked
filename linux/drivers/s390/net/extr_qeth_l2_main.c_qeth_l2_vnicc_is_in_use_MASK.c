
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cur_chars; int rx_bcast_enabled; } ;
struct TYPE_4__ {TYPE_1__ vnicc; } ;
struct qeth_card {TYPE_2__ options; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qeth_card*) ;

bool FUNC_1(struct qeth_card *VAR_1)
{

 if (!VAR_1->options.vnicc.cur_chars)
  return 0;



 if (VAR_1->options.vnicc.cur_chars == VAR_0) {
  if (!VAR_1->options.vnicc.rx_bcast_enabled ||
      !FUNC_0(VAR_1))
   return 0;
 }
 return 1;
}
