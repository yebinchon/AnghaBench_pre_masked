
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int promisc_mode; } ;
struct TYPE_6__ {int role; scalar_t__ reflect_promisc_primary; } ;
struct TYPE_5__ {TYPE_3__ sbp; } ;
struct qeth_card {TYPE_1__ info; TYPE_2__ options; } ;


 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,char,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct qeth_card*,int) ;

__attribute__((used)) static void FUNC_3(struct qeth_card *VAR_3, bool VAR_4)
{
 int VAR_5;
 int VAR_6;

 FUNC_0(VAR_3, 3, "pmisc2br");

 if (VAR_4) {
  if (VAR_3->options.sbp.reflect_promisc_primary)
   VAR_5 = VAR_1;
  else
   VAR_5 = VAR_2;
 } else
  VAR_5 = VAR_0;

 VAR_6 = FUNC_2(VAR_3, VAR_5);
 FUNC_1(VAR_3, 2, "bpm%c%04x", VAR_4 ? '+' : '-', VAR_6);
 if (!VAR_6) {
  VAR_3->options.sbp.role = VAR_5;
  VAR_3->info.promisc_mode = VAR_4;
 }
}
