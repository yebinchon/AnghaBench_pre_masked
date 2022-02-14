
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct htc_target {TYPE_2__* dev; struct htc_endpoint* endpoint; } ;
struct htc_packet {size_t endpoint; int list; scalar_t__ status; } ;
struct htc_endpoint {int dummy; } ;
struct hif_scatter_req {int scat_entries; scalar_t__ status; TYPE_1__* scat_list; int len; } ;
struct TYPE_4__ {int ar; } ;
struct TYPE_3__ {struct htc_packet* packet; } ;


 int VAR_0 ;
 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int ,struct hif_scatter_req*) ;
 int FUNC_5 (struct htc_target*,struct htc_endpoint*,struct htc_packet*) ;
 int FUNC_6 (struct htc_endpoint*,struct list_head*) ;
 int FUNC_7 (int *,struct list_head*) ;

__attribute__((used)) static void FUNC_8(struct htc_target *VAR_1,
           struct hif_scatter_req *VAR_2)
{
 struct htc_endpoint *VAR_3;
 struct htc_packet *VAR_4;
 struct list_head VAR_5;
 int VAR_6;

 FUNC_0(&VAR_5);

 FUNC_2(VAR_0,
     "htc tx scat complete len %d entries %d\n",
     VAR_2->len, VAR_2->scat_entries);

 if (VAR_2->status)
  FUNC_3("send scatter req failed: %d\n", VAR_2->status);

 VAR_4 = VAR_2->scat_list[0].packet;
 VAR_3 = &VAR_1->endpoint[VAR_4->endpoint];


 for (VAR_6 = 0; VAR_6 < VAR_2->scat_entries; VAR_6++) {
  VAR_4 = VAR_2->scat_list[VAR_6].packet;
  if (!VAR_4) {
   FUNC_1(1);
   return;
  }

  VAR_4->status = VAR_2->status;
  FUNC_5(VAR_1, VAR_3, VAR_4);
  FUNC_7(&VAR_4->list, &VAR_5);
 }


 FUNC_4(VAR_1->dev->ar, VAR_2);


 FUNC_6(VAR_3, &VAR_5);
}
