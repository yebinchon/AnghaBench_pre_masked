
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct flow_match_enc_opts {TYPE_2__* mask; TYPE_1__* key; } ;
struct flow_cls_offload {int rule; } ;
struct TYPE_4__ {int len; int data; } ;
struct TYPE_3__ {int len; int data; } ;


 int FUNC_0 (int ,struct flow_match_enc_opts*) ;
 int FUNC_1 (void*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, void *VAR_1,
         struct flow_cls_offload *VAR_2)
{
 struct flow_match_enc_opts VAR_3;

 FUNC_0(VAR_2->rule, &VAR_3);
 FUNC_1(VAR_0, VAR_3.key->data, VAR_3.key->len);
 FUNC_1(VAR_1, VAR_3.mask->data, VAR_3.mask->len);

 return 0;
}
