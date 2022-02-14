
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_7__ {int unique_id; } ;
struct TYPE_8__ {TYPE_3__ create_destroy_addr; } ;
struct TYPE_5__ {scalar_t__ return_code; } ;
struct qeth_ipa_cmd {TYPE_4__ data; TYPE_1__ hdr; } ;
struct qeth_card {TYPE_2__* dev; } ;
struct TYPE_6__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct qeth_card *VAR_1,
  struct qeth_reply *VAR_2, unsigned long VAR_3)
{
 struct qeth_ipa_cmd *VAR_4 = (struct qeth_ipa_cmd *) VAR_3;

 if (VAR_4->hdr.return_code)
  return -VAR_0;

 FUNC_0(VAR_1->dev->dev_addr,
   VAR_4->data.create_destroy_addr.unique_id);
 return 0;
}
