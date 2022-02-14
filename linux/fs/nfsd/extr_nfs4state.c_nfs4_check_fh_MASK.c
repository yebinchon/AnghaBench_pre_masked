
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_fh {int fh_handle; } ;
struct nfs4_stid {TYPE_1__* sc_file; } ;
typedef int __be32 ;
struct TYPE_2__ {int fi_fhandle; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline __be32 FUNC_1(struct svc_fh *VAR_2, struct nfs4_stid *VAR_3)
{
 if (!FUNC_0(&VAR_2->fh_handle, &VAR_3->sc_file->fi_fhandle))
  return VAR_1;
 return VAR_0;
}
