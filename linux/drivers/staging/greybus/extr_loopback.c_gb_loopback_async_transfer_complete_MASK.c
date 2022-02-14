
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u32 ;
struct gb_operation {int id; TYPE_2__* response; TYPE_1__* request; } ;
struct gb_loopback_transfer_response {int reserved1; int reserved0; int data; } ;
struct gb_loopback_transfer_request {int data; int len; } ;
struct gb_loopback_async_operation {struct gb_operation* operation; struct gb_loopback* gb; } ;
struct gb_loopback {void* gbphy_latency_ts; void* apbridge_latency_ts; TYPE_4__* connection; } ;
struct TYPE_8__ {TYPE_3__* bundle; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {struct gb_loopback_transfer_response* payload; } ;
struct TYPE_5__ {struct gb_loopback_transfer_request* payload; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ) ;
 size_t FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static int FUNC_4(
    struct gb_loopback_async_operation *VAR_1)
{
 struct gb_loopback *VAR_2;
 struct gb_operation *VAR_3;
 struct gb_loopback_transfer_request *VAR_4;
 struct gb_loopback_transfer_response *VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;

 VAR_2 = VAR_1->gb;
 VAR_3 = VAR_1->operation;
 VAR_4 = VAR_3->request->payload;
 VAR_5 = VAR_3->response->payload;
 VAR_6 = FUNC_2(VAR_4->len);

 if (FUNC_3(VAR_4->data, VAR_5->data, VAR_6)) {
  FUNC_1(&VAR_2->connection->bundle->dev,
   "Loopback Data doesn't match operation id %d\n",
   VAR_3->id);
  VAR_7 = -VAR_0;
 } else {
  VAR_2->apbridge_latency_ts =
   (u32)FUNC_0(VAR_5->reserved0);
  VAR_2->gbphy_latency_ts =
   (u32)FUNC_0(VAR_5->reserved1);
 }

 return VAR_7;
}
