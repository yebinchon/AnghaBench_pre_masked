
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs4_layoutreturn_args {TYPE_1__* layout; } ;
struct nfs4_flexfile_layoutreturn_args {int num_dev; int * devinfo; } ;
typedef int __be32 ;
struct TYPE_2__ {int plh_stateid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct xdr_stream*,int *,int *) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_3(struct xdr_stream *VAR_0,
  const struct nfs4_layoutreturn_args *VAR_1,
  struct nfs4_flexfile_layoutreturn_args *VAR_2)
{
 __be32 *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_0, 4);
 *VAR_3 = FUNC_0(VAR_2->num_dev);
 for (VAR_4 = 0; VAR_4 < VAR_2->num_dev; VAR_4++)
  FUNC_1(VAR_0,
    &VAR_1->layout->plh_stateid,
    &VAR_2->devinfo[VAR_4]);
}
