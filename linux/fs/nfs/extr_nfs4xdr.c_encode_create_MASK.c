
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct xdr_stream {TYPE_2__* buf; } ;
struct TYPE_9__ {int specdata2; int specdata1; } ;
struct TYPE_7__ {int len; int pages; } ;
struct TYPE_10__ {TYPE_3__ device; TYPE_1__ symlink; } ;
struct nfs4_create_arg {int ftype; TYPE_6__* server; int umask; int label; int attrs; TYPE_5__* name; TYPE_4__ u; } ;
struct compound_hdr {int dummy; } ;
typedef void* __be32 ;
struct TYPE_12__ {int attr_bitmask; } ;
struct TYPE_11__ {int name; int len; } ;
struct TYPE_8__ {int flags; } ;





 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct xdr_stream*,int ,int ,int *,TYPE_6__*,int ) ;
 int FUNC_2 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int ,int ) ;
 int FUNC_4 (struct xdr_stream*,int) ;
 void** FUNC_5 (struct xdr_stream*,int) ;
 int FUNC_6 (struct xdr_stream*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct xdr_stream *VAR_3, const struct nfs4_create_arg *VAR_4, struct compound_hdr *VAR_5)
{
 __be32 *VAR_6;

 FUNC_2(VAR_3, VAR_0, VAR_2, VAR_5);
 FUNC_4(VAR_3, VAR_4->ftype);

 switch (VAR_4->ftype) {
 case 128:
  VAR_6 = FUNC_5(VAR_3, 4);
  *VAR_6 = FUNC_0(VAR_4->u.symlink.len);
  FUNC_6(VAR_3, VAR_4->u.symlink.pages, 0,
    VAR_4->u.symlink.len);
  VAR_3->buf->flags |= VAR_1;
  break;

 case 130: case 129:
  VAR_6 = FUNC_5(VAR_3, 8);
  *VAR_6++ = FUNC_0(VAR_4->u.device.specdata1);
  *VAR_6 = FUNC_0(VAR_4->u.device.specdata2);
  break;

 default:
  break;
 }

 FUNC_3(VAR_3, VAR_4->name->len, VAR_4->name->name);
 FUNC_1(VAR_3, VAR_4->attrs, VAR_4->label, &VAR_4->umask,
   VAR_4->server, VAR_4->server->attr_bitmask);
}
