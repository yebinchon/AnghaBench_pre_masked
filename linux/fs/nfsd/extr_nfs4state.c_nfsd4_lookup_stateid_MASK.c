
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nfsd_net {int dummy; } ;
struct nfsd4_compound_state {scalar_t__ minorversion; int clp; scalar_t__ session; } ;
struct nfs4_stid {unsigned char sc_type; } ;
struct TYPE_8__ {int so_clid; } ;
struct TYPE_9__ {TYPE_1__ si_opaque; } ;
typedef TYPE_2__ stateid_t ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 struct nfs4_stid* FUNC_3 (int ,TYPE_2__*,unsigned char) ;
 scalar_t__ FUNC_4 (int *,struct nfsd4_compound_state*,struct nfsd_net*) ;
 int FUNC_5 (struct nfs4_stid*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__be32
FUNC_6(struct nfsd4_compound_state *VAR_7,
       stateid_t *VAR_8, unsigned char VAR_9,
       struct nfs4_stid **VAR_10, struct nfsd_net *VAR_11)
{
 __be32 VAR_12;
 bool VAR_13 = 0;





 if (VAR_9 & VAR_1)
  VAR_13 = 1;
 else if (VAR_9 & VAR_0)
  VAR_9 |= VAR_1;

 if (FUNC_2(VAR_8) || FUNC_1(VAR_8) ||
  FUNC_0(VAR_8))
  return VAR_3;
 VAR_12 = FUNC_4(&VAR_8->si_opaque.so_clid, VAR_7, VAR_11);
 if (VAR_12 == VAR_5) {
  if (VAR_7->session)
   return VAR_3;
  return VAR_6;
 }
 if (VAR_12)
  return VAR_12;
 *VAR_10 = FUNC_3(VAR_7->clp, VAR_8, VAR_9);
 if (!*VAR_10)
  return VAR_3;
 if (((*VAR_10)->sc_type == VAR_1) && !VAR_13) {
  FUNC_5(*VAR_10);
  if (VAR_7->minorversion)
   return VAR_4;
  return VAR_3;
 }
 return VAR_2;
}
