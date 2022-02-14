
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int sup_chars; int set_char_sup; int wanted_chars; int cur_chars; int rx_bcast_enabled; int learning_timeout; } ;
struct TYPE_4__ {TYPE_1__ vnicc; } ;
struct qeth_card {TYPE_2__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*,int,int *) ;
 int FUNC_4 (struct qeth_card*,int,int) ;

int FUNC_5(struct qeth_card *VAR_6, u32 VAR_7, bool VAR_8)
{
 int VAR_9 = 0;
 u32 VAR_10;

 FUNC_0(VAR_6, 2, "vniccsch");


 if (FUNC_1(VAR_6))
  return -VAR_0;


 if (!(VAR_6->options.vnicc.sup_chars & VAR_7) ||
     !(VAR_6->options.vnicc.set_char_sup & VAR_7))
  return -VAR_1;


 if (VAR_8) {
  VAR_10 = VAR_3;
  VAR_6->options.vnicc.wanted_chars |= VAR_7;
 } else {
  VAR_10 = VAR_2;
  VAR_6->options.vnicc.wanted_chars &= ~VAR_7;
 }


 if (VAR_6->options.vnicc.cur_chars == VAR_6->options.vnicc.wanted_chars)
  return VAR_9;


 if (!FUNC_2(VAR_6)) {
  if (VAR_8)
   VAR_6->options.vnicc.cur_chars |= VAR_7;
  else
   VAR_6->options.vnicc.cur_chars &= ~VAR_7;
  return VAR_9;
 }

 VAR_9 = FUNC_4(VAR_6, VAR_7, VAR_10);
 if (VAR_9)
  VAR_6->options.vnicc.wanted_chars =
   VAR_6->options.vnicc.cur_chars;
 else {

  if (VAR_8 && VAR_7 == VAR_5)
   VAR_6->options.vnicc.rx_bcast_enabled = 1;
  if (!VAR_8 && VAR_7 == VAR_4)
   FUNC_3(VAR_6, VAR_7,
     &VAR_6->options.vnicc.learning_timeout);
 }

 return VAR_9;
}
