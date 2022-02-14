
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct qeth_reply {int dummy; } ;
struct TYPE_6__ {int * unique_id; } ;
struct TYPE_7__ {TYPE_1__ create_destroy_addr; } ;
struct TYPE_9__ {scalar_t__ return_code; } ;
struct qeth_ipa_cmd {TYPE_2__ data; TYPE_4__ hdr; } ;
struct TYPE_10__ {int unique_id; } ;
struct qeth_card {TYPE_3__* gdev; TYPE_5__ info; } ;
typedef int __u16 ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct qeth_card *VAR_3,
  struct qeth_reply *VAR_4, unsigned long VAR_5)
{
 struct qeth_ipa_cmd *VAR_6 = (struct qeth_ipa_cmd *) VAR_5;

 if (VAR_6->hdr.return_code == 0) {
  VAR_3->info.unique_id = *((__u16 *)
    &VAR_6->data.create_destroy_addr.unique_id[6]);
  return 0;
 }

 VAR_3->info.unique_id = VAR_1 |
          VAR_2;
 FUNC_0(&VAR_3->gdev->dev, "The network adapter failed to generate a unique ID\n");
 return -VAR_0;
}
