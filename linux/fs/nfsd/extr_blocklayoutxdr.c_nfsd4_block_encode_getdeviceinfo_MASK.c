
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct pnfs_block_deviceaddr {int nr_volumes; int * volumes; } ;
struct nfsd4_getdeviceinfo {struct pnfs_block_deviceaddr* gd_device; } ;
typedef int __be32 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct xdr_stream*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__be32
FUNC_4(struct xdr_stream *VAR_1,
  struct nfsd4_getdeviceinfo *VAR_2)
{
 struct pnfs_block_deviceaddr *VAR_3 = VAR_2->gd_device;
 int VAR_4 = sizeof(__be32), VAR_5, VAR_6;
 __be32 *VAR_7;

 VAR_7 = FUNC_3(VAR_1, VAR_4 + sizeof(__be32));
 if (!VAR_7)
  return VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_3->nr_volumes; VAR_6++) {
  VAR_5 = FUNC_1(VAR_1, &VAR_3->volumes[VAR_6]);
  if (VAR_5 < 0)
   return FUNC_2(VAR_5);
  VAR_4 += VAR_5;
 }





 *VAR_7++ = FUNC_0(VAR_4);
 *VAR_7++ = FUNC_0(VAR_3->nr_volumes);
 return 0;
}
