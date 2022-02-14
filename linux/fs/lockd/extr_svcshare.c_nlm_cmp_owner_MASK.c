
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_netobj {scalar_t__ len; int data; } ;
struct TYPE_2__ {scalar_t__ len; int data; } ;
struct nlm_share {TYPE_1__ s_owner; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1(struct nlm_share *VAR_0, struct xdr_netobj *VAR_1)
{
 return VAR_0->s_owner.len == VAR_1->len
     && !FUNC_0(VAR_0->s_owner.data, VAR_1->data, VAR_1->len);
}
