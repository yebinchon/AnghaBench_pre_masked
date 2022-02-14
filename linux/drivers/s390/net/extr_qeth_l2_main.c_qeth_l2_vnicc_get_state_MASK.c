
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int sup_chars; int cur_chars; } ;
struct TYPE_4__ {TYPE_1__ vnicc; } ;
struct qeth_card {TYPE_2__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 scalar_t__ FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*) ;

int FUNC_4(struct qeth_card *VAR_2, u32 VAR_3, bool *VAR_4)
{
 int VAR_5 = 0;

 FUNC_0(VAR_2, 2, "vniccgch");


 if (FUNC_1(VAR_2))
  return -VAR_0;


 if (!(VAR_2->options.vnicc.sup_chars & VAR_3))
  return -VAR_1;


 if (FUNC_2(VAR_2))
  VAR_5 = FUNC_3(VAR_2);

 *VAR_4 = (VAR_2->options.vnicc.cur_chars & VAR_3) ? 1 : 0;
 return VAR_5;
}
