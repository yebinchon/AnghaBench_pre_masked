
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct gb_sdio_host {scalar_t__ removed; int mmc; } ;
struct gb_sdio_event_request {scalar_t__ event; } ;
struct gb_operation {scalar_t__ type; struct gb_message* request; int connection; } ;
struct gb_message {int payload_size; struct gb_sdio_event_request* payload; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gb_sdio_host*,scalar_t__) ;
 int FUNC_1 (struct gb_sdio_host*,scalar_t__) ;
 int FUNC_2 (int ,char*,int,...) ;
 struct gb_sdio_host* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gb_operation *VAR_2)
{
 struct gb_sdio_host *VAR_3 = FUNC_3(VAR_2->connection);
 struct gb_message *VAR_4;
 struct gb_sdio_event_request *VAR_5;
 u8 VAR_6 = VAR_2->type;
 int VAR_7 = 0;
 u8 VAR_8;

 if (VAR_6 != VAR_1) {
  FUNC_2(FUNC_4(VAR_3->mmc),
   "unsupported unsolicited event: %u\n", VAR_6);
  return -VAR_0;
 }

 VAR_4 = VAR_2->request;

 if (VAR_4->payload_size < sizeof(*VAR_5)) {
  FUNC_2(FUNC_4(VAR_3->mmc), "wrong event size received (%zu < %zu)\n",
   VAR_4->payload_size, sizeof(*VAR_5));
  return -VAR_0;
 }

 VAR_5 = VAR_4->payload;
 VAR_8 = VAR_5->event;

 if (VAR_3->removed)
  FUNC_0(VAR_3, VAR_8);
 else
  VAR_7 = FUNC_1(VAR_3, VAR_8);

 return VAR_7;
}
