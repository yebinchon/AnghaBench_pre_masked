
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs_entry {TYPE_1__* fattr; } ;
struct TYPE_5__ {int (* decode ) (struct xdr_stream*,struct nfs_entry*,int ) ;int gencount; int timestamp; int plus; } ;
typedef TYPE_2__ nfs_readdir_descriptor_t ;
struct TYPE_4__ {int gencount; int time_start; } ;


 int FUNC_0 (struct xdr_stream*,struct nfs_entry*,int ) ;

__attribute__((used)) static int FUNC_1(nfs_readdir_descriptor_t *VAR_0,
        struct nfs_entry *VAR_1, struct xdr_stream *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_0->decode(VAR_2, VAR_1, VAR_0->plus);
 if (VAR_3)
  return VAR_3;
 VAR_1->fattr->time_start = VAR_0->timestamp;
 VAR_1->fattr->gencount = VAR_0->gencount;
 return 0;
}
