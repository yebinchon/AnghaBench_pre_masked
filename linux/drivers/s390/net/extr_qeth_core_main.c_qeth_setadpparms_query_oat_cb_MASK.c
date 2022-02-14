
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_reply {scalar_t__ param; } ;
struct qeth_qoat_priv {int buffer_len; int response_len; int buffer; } ;
struct TYPE_4__ {int cmdlength; scalar_t__ seq_no; scalar_t__ used_total; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct TYPE_6__ {TYPE_2__ setadapterparms; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_card {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (int,char*,int) ;
 scalar_t__ FUNC_2 (struct qeth_ipa_cmd*) ;

__attribute__((used)) static int FUNC_3(struct qeth_card *VAR_2,
  struct qeth_reply *VAR_3, unsigned long VAR_4)
{
 struct qeth_ipa_cmd *VAR_5 = (struct qeth_ipa_cmd *)VAR_4;
 struct qeth_qoat_priv *VAR_6;
 char *VAR_7;
 int VAR_8;

 FUNC_0(VAR_2, 3, "qoatcb");
 if (FUNC_2(VAR_5))
  return -VAR_0;

 VAR_6 = (struct qeth_qoat_priv *)VAR_3->param;
 VAR_8 = VAR_5->data.setadapterparms.hdr.cmdlength;
 VAR_7 = (char *)VAR_4 + 28;

 if (VAR_8 > (VAR_6->buffer_len - VAR_6->response_len))
  return -VAR_1;

 FUNC_1((VAR_6->buffer + VAR_6->response_len), VAR_7,
  VAR_8);
 VAR_6->response_len += VAR_8;

 if (VAR_5->data.setadapterparms.hdr.seq_no <
     VAR_5->data.setadapterparms.hdr.used_total)
  return 1;
 return 0;
}
