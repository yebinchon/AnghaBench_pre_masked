
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {int seqid; } ;
struct nfs4_state {int seqlock; TYPE_1__ open_stateid; } ;
typedef scalar_t__ s32 ;
struct TYPE_6__ {int seqid; } ;
typedef TYPE_2__ nfs4_stateid ;
typedef int __be32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct nfs4_state*,TYPE_2__*) ;
 int FUNC_3 (struct nfs4_state*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int) ;

__attribute__((used)) static bool FUNC_6(nfs4_stateid *VAR_0,
  struct nfs4_state *VAR_1)
{
 __be32 VAR_2;
 u32 VAR_3;
 bool VAR_4;
 int VAR_5;

 for (;;) {
  VAR_4 = 0;
  if (!FUNC_3(VAR_1))
   break;
  VAR_5 = FUNC_4(&VAR_1->seqlock);
  if (!FUNC_2(VAR_1, VAR_0)) {
   if (FUNC_5(&VAR_1->seqlock, VAR_5))
    continue;
   break;
  }
  VAR_2 = VAR_1->open_stateid.seqid;
  if (FUNC_5(&VAR_1->seqlock, VAR_5))
   continue;

  VAR_3 = FUNC_0(VAR_0->seqid);
  if ((s32)(VAR_3 - FUNC_0(VAR_2)) >= 0)
   VAR_0->seqid = FUNC_1(VAR_3 + 1);
  else
   VAR_0->seqid = VAR_2;
  VAR_4 = 1;
  break;
 }

 return VAR_4;
}
