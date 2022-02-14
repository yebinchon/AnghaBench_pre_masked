
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct pnfs_block_extent {int es; int soff; int len; int foff; int vol_id; } ;
struct nfsd4_layoutget {struct pnfs_block_extent* lg_content; } ;
struct nfsd4_deviceid {int dummy; } ;
typedef int __be64 ;
typedef int __be32 ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int *,int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__be32
FUNC_4(struct xdr_stream *VAR_1,
  struct nfsd4_layoutget *VAR_2)
{
 struct pnfs_block_extent *VAR_3 = VAR_2->lg_content;
 int VAR_4 = sizeof(__be32) + 5 * sizeof(__be64) + sizeof(__be32);
 __be32 *VAR_5;

 VAR_5 = FUNC_3(VAR_1, sizeof(__be32) + VAR_4);
 if (!VAR_5)
  return VAR_0;

 *VAR_5++ = FUNC_0(VAR_4);
 *VAR_5++ = FUNC_0(1);

 VAR_5 = FUNC_2(VAR_5, &VAR_3->vol_id,
   sizeof(struct nfsd4_deviceid));
 VAR_5 = FUNC_1(VAR_5, VAR_3->foff);
 VAR_5 = FUNC_1(VAR_5, VAR_3->len);
 VAR_5 = FUNC_1(VAR_5, VAR_3->soff);
 *VAR_5++ = FUNC_0(VAR_3->es);
 return 0;
}
