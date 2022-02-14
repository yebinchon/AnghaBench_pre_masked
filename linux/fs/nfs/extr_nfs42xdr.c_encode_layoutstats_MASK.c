
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_4__ {int data; } ;
struct nfs42_layoutstat_devinfo {TYPE_3__ ld_private; int layout_type; TYPE_1__ dev_id; int write_bytes; int write_count; int read_bytes; int read_count; int length; int offset; } ;
struct nfs42_layoutstat_args {int stateid; } ;
struct compound_hdr {int dummy; } ;
typedef int __be32 ;
struct TYPE_5__ {int (* encode ) (struct xdr_stream*,struct nfs42_layoutstat_args const*,TYPE_3__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int FUNC_2 (struct xdr_stream*,int ,int ,struct compound_hdr*) ;
 int FUNC_3 (struct xdr_stream*,int ) ;
 int * FUNC_4 (struct xdr_stream*,int) ;
 int FUNC_5 (struct xdr_stream*,struct nfs42_layoutstat_args const*,TYPE_3__*) ;
 int * FUNC_6 (int *,int ) ;
 int * FUNC_7 (int *,int ,int) ;

__attribute__((used)) static void FUNC_8(struct xdr_stream *VAR_3,
          const struct nfs42_layoutstat_args *VAR_4,
          struct nfs42_layoutstat_devinfo *VAR_5,
          struct compound_hdr *VAR_6)
{
 __be32 *VAR_7;

 FUNC_2(VAR_3, VAR_1, VAR_2, VAR_6);
 VAR_7 = FUNC_4(VAR_3, 8 + 8);
 VAR_7 = FUNC_6(VAR_7, VAR_5->offset);
 VAR_7 = FUNC_6(VAR_7, VAR_5->length);
 FUNC_1(VAR_3, &VAR_4->stateid);
 VAR_7 = FUNC_4(VAR_3, 4*8 + VAR_0 + 4);
 VAR_7 = FUNC_6(VAR_7, VAR_5->read_count);
 VAR_7 = FUNC_6(VAR_7, VAR_5->read_bytes);
 VAR_7 = FUNC_6(VAR_7, VAR_5->write_count);
 VAR_7 = FUNC_6(VAR_7, VAR_5->write_bytes);
 VAR_7 = FUNC_7(VAR_7, VAR_5->dev_id.data,
   VAR_0);

 *VAR_7++ = FUNC_0(VAR_5->layout_type);
 if (VAR_5->ld_private.ops)
  VAR_5->ld_private.ops->encode(VAR_3, VAR_4,
    &VAR_5->ld_private);
 else
  FUNC_3(VAR_3, 0);
}
