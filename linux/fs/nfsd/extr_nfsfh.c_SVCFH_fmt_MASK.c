
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* fh_pad; } ;
struct knfsd_fh {int fh_size; TYPE_1__ fh_base; } ;
struct svc_fh {struct knfsd_fh fh_handle; } ;


 int FUNC_0 (char*,char*,int,int,int,int,int,int,int) ;

char * FUNC_1(struct svc_fh *VAR_0)
{
 struct knfsd_fh *VAR_1 = &VAR_0->fh_handle;

 static char VAR_2[80];
 FUNC_0(VAR_2, "%d: %08x %08x %08x %08x %08x %08x",
  VAR_1->fh_size,
  VAR_1->fh_base.fh_pad[0],
  VAR_1->fh_base.fh_pad[1],
  VAR_1->fh_base.fh_pad[2],
  VAR_1->fh_base.fh_pad[3],
  VAR_1->fh_base.fh_pad[4],
  VAR_1->fh_base.fh_pad[5]);
 return VAR_2;
}
