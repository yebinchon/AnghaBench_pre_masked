
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct TYPE_4__ {int size; int data; } ;
struct TYPE_3__ {int si_generation; int si_opaque; } ;
struct pnfs_ff_layout {int flags; TYPE_2__ fh; TYPE_1__ stateid; int deviceid; int gid; int uid; } ;
struct nfsd4_layoutget {struct pnfs_ff_layout* lg_content; } ;
struct nfsd4_deviceid {int dummy; } ;
struct ff_idmap {int len; int buf; } ;
typedef int stateid_opaque_t ;
typedef int __be32 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_3 (int ,char*,int) ;
 int * FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,int ,int) ;
 int * FUNC_6 (int *,int *,int) ;
 int * FUNC_7 (struct xdr_stream*,int) ;

__be32
FUNC_8(struct xdr_stream *VAR_2,
  struct nfsd4_layoutget *VAR_3)
{
 struct pnfs_ff_layout *VAR_4 = VAR_3->lg_content;
 int VAR_5, VAR_6, VAR_7, VAR_8;
 __be32 *VAR_9;





 struct ff_idmap VAR_10;
 struct ff_idmap VAR_11;

 VAR_8 = 4 + VAR_4->fh.size;

 VAR_10.len = FUNC_3(VAR_10.buf, "%u", FUNC_2(&VAR_0, VAR_4->uid));
 VAR_11.len = FUNC_3(VAR_11.buf, "%u", FUNC_1(&VAR_0, VAR_4->gid));


 VAR_7 = 20 + sizeof(stateid_opaque_t) + 4 + VAR_8 +
   8 + VAR_10.len + 8 + VAR_11.len;

 VAR_6 = 4 + VAR_7;


 VAR_5 = 20 + VAR_6;

 VAR_9 = FUNC_7(VAR_2, sizeof(__be32) + VAR_5);
 if (!VAR_9)
  return VAR_1;

 *VAR_9++ = FUNC_0(VAR_5);
 VAR_9 = FUNC_4(VAR_9, 0);

 *VAR_9++ = FUNC_0(1);
 *VAR_9++ = FUNC_0(1);

 VAR_9 = FUNC_6(VAR_9, &VAR_4->deviceid,
   sizeof(struct nfsd4_deviceid));

 *VAR_9++ = FUNC_0(1);

 *VAR_9++ = FUNC_0(VAR_4->stateid.si_generation);
 VAR_9 = FUNC_6(VAR_9, &VAR_4->stateid.si_opaque,
        sizeof(stateid_opaque_t));

 *VAR_9++ = FUNC_0(1);
 VAR_9 = FUNC_5(VAR_9, VAR_4->fh.data, VAR_4->fh.size);

 VAR_9 = FUNC_5(VAR_9, VAR_10.buf, VAR_10.len);
 VAR_9 = FUNC_5(VAR_9, VAR_11.buf, VAR_11.len);

 *VAR_9++ = FUNC_0(VAR_4->flags);
 *VAR_9++ = FUNC_0(0);

 return 0;
}
