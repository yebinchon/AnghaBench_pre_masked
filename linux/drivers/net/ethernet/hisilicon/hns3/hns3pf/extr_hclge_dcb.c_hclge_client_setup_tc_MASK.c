
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct hnae3_handle {struct hnae3_client* client; } ;
struct hnae3_client {TYPE_1__* ops; } ;
struct hclge_vport {struct hnae3_handle nic; } ;
struct TYPE_4__ {int num_tc; } ;
struct hclge_dev {size_t num_vmdq_vport; TYPE_2__ tm_info; struct hclge_vport* vport; } ;
struct TYPE_3__ {int (* setup_tc ) (struct hnae3_handle*,int ) ;} ;


 int FUNC_0 (struct hnae3_handle*,int ) ;

__attribute__((used)) static int FUNC_1(struct hclge_dev *VAR_0)
{
 struct hclge_vport *VAR_1 = VAR_0->vport;
 struct hnae3_client *VAR_2;
 struct hnae3_handle *VAR_3;
 int VAR_4;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->num_vmdq_vport + 1; VAR_5++) {
  VAR_3 = &VAR_1[VAR_5].nic;
  VAR_2 = VAR_3->client;

  if (!VAR_2 || !VAR_2->ops || !VAR_2->ops->setup_tc)
   continue;

  VAR_4 = VAR_2->ops->setup_tc(VAR_3, VAR_0->tm_info.num_tc);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
