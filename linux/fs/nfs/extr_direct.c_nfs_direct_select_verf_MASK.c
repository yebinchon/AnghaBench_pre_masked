
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_writeverf {int dummy; } ;
struct TYPE_3__ {int nbuckets; TYPE_2__* buckets; } ;
struct nfs_direct_req {TYPE_1__ ds_cinfo; struct nfs_writeverf verf; } ;
struct nfs_client {int dummy; } ;
struct TYPE_4__ {struct nfs_writeverf direct_verf; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct nfs_writeverf *
FUNC_1(struct nfs_direct_req *VAR_0,
         struct nfs_client *VAR_1,
         int VAR_2)
{
 struct nfs_writeverf *VAR_3 = &VAR_0->verf;
 return VAR_3;
}
