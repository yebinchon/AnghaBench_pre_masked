
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nfsd_file {int dummy; } ;
struct nfs4_stid {int sc_type; TYPE_1__* sc_file; } ;
struct TYPE_3__ {int fi_deleg_file; } ;





 int VAR_0 ;
 int FUNC_0 (int) ;
 struct nfsd_file* FUNC_1 (TYPE_1__*) ;
 struct nfsd_file* FUNC_2 (TYPE_1__*) ;
 struct nfsd_file* FUNC_3 (int ) ;

__attribute__((used)) static struct nfsd_file *
FUNC_4(struct nfs4_stid *VAR_1, int VAR_2)
{
 if (!VAR_1)
  return ((void*)0);

 switch (VAR_1->sc_type) {
 case 130:
  if (FUNC_0(!VAR_1->sc_file->fi_deleg_file))
   return ((void*)0);
  return FUNC_3(VAR_1->sc_file->fi_deleg_file);
 case 128:
 case 129:
  if (VAR_2 & VAR_0)
   return FUNC_1(VAR_1->sc_file);
  else
   return FUNC_2(VAR_1->sc_file);
  break;
 }

 return ((void*)0);
}
