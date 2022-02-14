
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_4__ {int data; } ;
struct nfs42_layoutstat_devinfo {TYPE_1__ dev_id; int write_bytes; int write_count; int read_bytes; int read_count; int length; int offset; } ;
struct TYPE_5__ {int data; } ;
typedef TYPE_2__ nfs4_stateid ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xdr_stream*,int ,int ) ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void
FUNC_3(struct xdr_stream *VAR_2,
       const nfs4_stateid *VAR_3,
       const struct nfs42_layoutstat_devinfo *VAR_4)
{
 __be32 *VAR_5;

 VAR_5 = FUNC_2(VAR_2, 8 + 8);
 VAR_5 = FUNC_1(VAR_5, VAR_4->offset);
 VAR_5 = FUNC_1(VAR_5, VAR_4->length);
 FUNC_0(VAR_2, VAR_3->data, VAR_1);
 VAR_5 = FUNC_2(VAR_2, 4*8);
 VAR_5 = FUNC_1(VAR_5, VAR_4->read_count);
 VAR_5 = FUNC_1(VAR_5, VAR_4->read_bytes);
 VAR_5 = FUNC_1(VAR_5, VAR_4->write_count);
 VAR_5 = FUNC_1(VAR_5, VAR_4->write_bytes);
 FUNC_0(VAR_2, VAR_4->dev_id.data, VAR_0);
}
