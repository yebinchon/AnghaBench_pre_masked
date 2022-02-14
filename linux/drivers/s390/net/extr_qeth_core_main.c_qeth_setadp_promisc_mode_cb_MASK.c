
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_6__ {int mode; } ;
struct qeth_ipacmd_setadpparms {TYPE_2__ data; } ;
struct TYPE_7__ {scalar_t__ return_code; } ;
struct TYPE_8__ {struct qeth_ipacmd_setadpparms setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_3__ hdr; TYPE_4__ data; } ;
struct TYPE_5__ {int promisc_mode; } ;
struct qeth_card {TYPE_1__ info; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_2,
  struct qeth_reply *VAR_3, unsigned long VAR_4)
{
 struct qeth_ipa_cmd *VAR_5 = (struct qeth_ipa_cmd *) VAR_4;
 struct qeth_ipacmd_setadpparms *VAR_6;

 FUNC_0(VAR_2, 4, "prmadpcb");

 VAR_6 = &(VAR_5->data.setadapterparms);
 if (FUNC_2(VAR_5)) {
  FUNC_1(VAR_2, 4, "prmrc%x", VAR_5->hdr.return_code);
  VAR_6->data.mode = VAR_1;
 }
 VAR_2->info.promisc_mode = VAR_6->data.mode;
 return (VAR_5->hdr.return_code) ? -VAR_0 : 0;
}
