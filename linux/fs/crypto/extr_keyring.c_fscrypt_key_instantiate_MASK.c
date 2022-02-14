
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct key_preparsed_payload {scalar_t__ data; } ;
struct TYPE_2__ {struct fscrypt_master_key** data; } ;
struct key {TYPE_1__ payload; } ;
struct fscrypt_master_key {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct key *VAR_0,
       struct key_preparsed_payload *VAR_1)
{
 VAR_0->payload.data[0] = (struct fscrypt_master_key *)VAR_1->data;
 return 0;
}
