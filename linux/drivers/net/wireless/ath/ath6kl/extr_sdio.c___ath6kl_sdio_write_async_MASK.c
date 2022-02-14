
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bus_request {void* packet; int request; int length; int buffer; int address; scalar_t__ scat_req; } ;
struct ath6kl_sdio {int ar; } ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (struct ath6kl_sdio*,struct bus_request*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (struct ath6kl_sdio*,struct bus_request*) ;

__attribute__((used)) static void FUNC_4(struct ath6kl_sdio *VAR_0,
          struct bus_request *VAR_1)
{
 if (VAR_1->scat_req) {
  FUNC_3(VAR_0, VAR_1);
 } else {
  void *VAR_2;
  int VAR_3;

  VAR_3 = FUNC_2(VAR_0->ar, VAR_1->address,
           VAR_1->buffer, VAR_1->length,
           VAR_1->request);
  VAR_2 = VAR_1->packet;
  FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_2, VAR_3);
 }
}
