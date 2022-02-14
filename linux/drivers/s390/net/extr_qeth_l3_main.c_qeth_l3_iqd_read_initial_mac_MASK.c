
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * unique_id; } ;
struct TYPE_6__ {TYPE_2__ create_destroy_addr; } ;
struct qeth_ipa_cmd {TYPE_3__ data; } ;
struct qeth_cmd_buffer {int dummy; } ;
struct TYPE_4__ {int unique_id; } ;
struct qeth_card {TYPE_1__ info; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int VAR_2 ;
 struct qeth_ipa_cmd* FUNC_2 (struct qeth_cmd_buffer*) ;
 int VAR_3 ;
 struct qeth_cmd_buffer* FUNC_3 (struct qeth_card*,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (struct qeth_card*,struct qeth_cmd_buffer*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct qeth_card *VAR_5)
{
 int VAR_6 = 0;
 struct qeth_cmd_buffer *VAR_7;
 struct qeth_ipa_cmd *VAR_8;

 FUNC_1(VAR_5, 2, "hsrmac");

 VAR_7 = FUNC_3(VAR_5, VAR_1, VAR_2,
     FUNC_0(VAR_3));
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = FUNC_2(VAR_7);
 *((__u16 *) &VAR_8->data.create_destroy_addr.unique_id[6]) =
   VAR_5->info.unique_id;

 VAR_6 = FUNC_4(VAR_5, VAR_7, VAR_4,
    ((void*)0));
 return VAR_6;
}
