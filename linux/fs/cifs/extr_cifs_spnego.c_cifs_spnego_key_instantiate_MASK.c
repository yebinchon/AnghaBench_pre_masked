
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_preparsed_payload {int datalen; int data; } ;
struct TYPE_2__ {char** data; } ;
struct key {TYPE_1__ payload; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_1(struct key *VAR_2, struct key_preparsed_payload *VAR_3)
{
 char *VAR_4;
 int VAR_5;

 VAR_5 = -VAR_0;
 VAR_4 = FUNC_0(VAR_3->data, VAR_3->datalen, VAR_1);
 if (!VAR_4)
  goto error;


 VAR_2->payload.data[0] = VAR_4;
 VAR_5 = 0;

error:
 return VAR_5;
}
