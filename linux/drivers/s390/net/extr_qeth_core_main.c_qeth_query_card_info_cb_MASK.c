
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_reply {scalar_t__ param; } ;
struct qeth_query_card_info {int port_speed; int port_mode; int card_type; } ;
struct TYPE_4__ {struct qeth_query_card_info card_info; } ;
struct TYPE_5__ {TYPE_1__ data; } ;
struct TYPE_6__ {TYPE_2__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_card {int dummy; } ;
struct carrier_info {int port_speed; int port_mode; int card_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 scalar_t__ FUNC_1 (struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_2(struct qeth_card *VAR_1,
       struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct carrier_info *VAR_4 = (struct carrier_info *)VAR_2->param;
 struct qeth_ipa_cmd *VAR_5 = (struct qeth_ipa_cmd *)VAR_3;
 struct qeth_query_card_info *VAR_6;

 FUNC_0(VAR_1, 2, "qcrdincb");
 if (FUNC_1(VAR_5))
  return -VAR_0;

 VAR_6 = &VAR_5->data.setadapterparms.data.card_info;
 VAR_4->card_type = VAR_6->card_type;
 VAR_4->port_mode = VAR_6->port_mode;
 VAR_4->port_speed = VAR_6->port_speed;
 return 0;
}
