
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_3__ {int attrs; int verifier; } ;
struct nfs_openargs {int createmode; TYPE_2__* server; int umask; int label; TYPE_1__ u; } ;
typedef int __be32 ;
struct TYPE_4__ {int exclcreat_bitmask; int attr_bitmask; } ;






 int FUNC_0 (int const) ;
 int FUNC_1 (struct xdr_stream*,int ,int ,int *,TYPE_2__*,int ) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static inline void FUNC_4(struct xdr_stream *VAR_0, const struct nfs_openargs *VAR_1)
{
 __be32 *VAR_2;

 VAR_2 = FUNC_3(VAR_0, 4);
 switch(VAR_1->createmode) {
 case 128:
  *VAR_2 = FUNC_0(128);
  FUNC_1(VAR_0, VAR_1->u.attrs, VAR_1->label, &VAR_1->umask,
    VAR_1->server, VAR_1->server->attr_bitmask);
  break;
 case 129:
  *VAR_2 = FUNC_0(129);
  FUNC_1(VAR_0, VAR_1->u.attrs, VAR_1->label, &VAR_1->umask,
    VAR_1->server, VAR_1->server->attr_bitmask);
  break;
 case 131:
  *VAR_2 = FUNC_0(131);
  FUNC_2(VAR_0, &VAR_1->u.verifier);
  break;
 case 130:
  *VAR_2 = FUNC_0(130);
  FUNC_2(VAR_0, &VAR_1->u.verifier);
  FUNC_1(VAR_0, VAR_1->u.attrs, VAR_1->label, &VAR_1->umask,
    VAR_1->server, VAR_1->server->exclcreat_bitmask);
 }
}
