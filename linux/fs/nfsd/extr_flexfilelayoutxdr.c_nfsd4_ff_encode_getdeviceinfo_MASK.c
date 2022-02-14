
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int netid_len; int addr_len; int addr; int netid; } ;
struct pnfs_ff_device_addr {int version; int minor_version; int rsize; int wsize; int tightly_coupled; TYPE_1__ netaddr; } ;
struct nfsd4_getdeviceinfo {struct pnfs_ff_device_addr* gd_device; } ;
typedef int __be32 ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 int * FUNC_1 (int *,int ,int) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__be32
FUNC_3(struct xdr_stream *VAR_1,
  struct nfsd4_getdeviceinfo *VAR_2)
{
 struct pnfs_ff_device_addr *VAR_3 = VAR_2->gd_device;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 __be32 *VAR_7;


 VAR_6 = 16 + VAR_3->netaddr.netid_len + VAR_3->netaddr.addr_len;
 VAR_5 = 20;

 VAR_4 = 4 + VAR_5 + 4 + VAR_6;

 VAR_7 = FUNC_2(VAR_1, VAR_4 + sizeof(__be32));
 if (!VAR_7)
  return VAR_0;





 *VAR_7++ = FUNC_0(VAR_4);
 *VAR_7++ = FUNC_0(1);
 VAR_7 = FUNC_1(VAR_7, VAR_3->netaddr.netid, VAR_3->netaddr.netid_len);
 VAR_7 = FUNC_1(VAR_7, VAR_3->netaddr.addr, VAR_3->netaddr.addr_len);

 *VAR_7++ = FUNC_0(1);

 *VAR_7++ = FUNC_0(VAR_3->version);
 *VAR_7++ = FUNC_0(VAR_3->minor_version);
 *VAR_7++ = FUNC_0(VAR_3->rsize);
 *VAR_7++ = FUNC_0(VAR_3->wsize);
 *VAR_7++ = FUNC_0(VAR_3->tightly_coupled);

 return 0;
}
