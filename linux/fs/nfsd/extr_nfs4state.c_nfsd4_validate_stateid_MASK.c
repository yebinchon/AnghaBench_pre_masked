
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct nfs4_stid {int sc_type; } ;
struct nfs4_client {int cl_lock; int cl_addr; int cl_clientid; } ;
struct TYPE_9__ {int so_clid; } ;
struct TYPE_10__ {TYPE_1__ si_opaque; } ;
typedef TYPE_2__ stateid_t ;
typedef int addr_str ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;






 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 struct nfs4_stid* FUNC_3 (struct nfs4_client*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,struct nfs4_stid*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct nfs4_stid*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (struct sockaddr*,char*,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static __be32 FUNC_13(struct nfs4_client *VAR_4, stateid_t *VAR_5)
{
 struct nfs4_stid *VAR_6;
 __be32 VAR_7 = VAR_2;

 if (FUNC_2(VAR_5) || FUNC_1(VAR_5) ||
  FUNC_0(VAR_5))
  return VAR_7;

 if (!FUNC_10(&VAR_5->si_opaque.so_clid, &VAR_4->cl_clientid)) {
  char VAR_8[VAR_0];
  FUNC_9((struct sockaddr *)&VAR_4->cl_addr, VAR_8,
     sizeof(VAR_8));
  FUNC_7("NFSD: client %s testing state ID "
     "with incorrect client ID\n", VAR_8);
  return VAR_7;
 }
 FUNC_11(&VAR_4->cl_lock);
 VAR_6 = FUNC_3(VAR_4, VAR_5);
 if (!VAR_6)
  goto out_unlock;
 VAR_7 = FUNC_5(VAR_5, VAR_6, 1);
 if (VAR_7)
  goto out_unlock;
 switch (VAR_6->sc_type) {
 case 131:
  VAR_7 = VAR_1;
  break;
 case 128:
  VAR_7 = VAR_3;
  break;
 case 129:
 case 130:
  VAR_7 = FUNC_4(FUNC_6(VAR_6));
  break;
 default:
  FUNC_8("unknown stateid type %x\n", VAR_6->sc_type);

 case 132:
 case 133:
  VAR_7 = VAR_2;
 }
out_unlock:
 FUNC_12(&VAR_4->cl_lock);
 return VAR_7;
}
