
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int sup_chars; int getset_timeout_sup; scalar_t__ learning_timeout; } ;
struct TYPE_3__ {TYPE_2__ vnicc; } ;
struct qeth_card {TYPE_1__ options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*,int,int ,scalar_t__*) ;

int FUNC_4(struct qeth_card *VAR_4, u32 VAR_5)
{
 int VAR_6 = 0;

 FUNC_0(VAR_4, 2, "vniccsto");


 if (FUNC_1(VAR_4))
  return -VAR_0;


 if (!(VAR_4->options.vnicc.sup_chars & VAR_3) ||
     !(VAR_4->options.vnicc.getset_timeout_sup & VAR_3))
  return -VAR_1;


 if (VAR_4->options.vnicc.learning_timeout == VAR_5)
  return VAR_6;


 if (!FUNC_2(VAR_4)) {
  VAR_4->options.vnicc.learning_timeout = VAR_5;
  return VAR_6;
 }


 VAR_6 = FUNC_3(VAR_4, VAR_3,
       VAR_2, &VAR_5);
 if (!VAR_6)
  VAR_4->options.vnicc.learning_timeout = VAR_5;

 return VAR_6;
}
