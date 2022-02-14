
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_preparsed_payload {int datalen; int data; } ;
struct TYPE_2__ {char** data; } ;
struct key {int datalen; TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct key *VAR_2, struct key_preparsed_payload *VAR_3)
{
 char *VAR_4;
 if (VAR_3->datalen <= sizeof(VAR_2->payload)) {
  VAR_2->payload.data[0] = ((void*)0);
  FUNC_1(&VAR_2->payload, VAR_3->data, VAR_3->datalen);
 } else {
  VAR_4 = FUNC_0(VAR_3->data, VAR_3->datalen, VAR_1);
  if (!VAR_4)
   return -VAR_0;
  VAR_2->payload.data[0] = VAR_4;
 }

 VAR_2->datalen = VAR_3->datalen;
 return 0;
}
