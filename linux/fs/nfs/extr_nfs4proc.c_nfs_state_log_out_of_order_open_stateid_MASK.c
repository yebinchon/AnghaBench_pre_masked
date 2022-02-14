
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct TYPE_4__ {int seqid; } ;
struct nfs4_state {int flags; TYPE_1__ open_stateid; } ;
struct TYPE_5__ {int seqid; } ;
typedef TYPE_2__ nfs4_stateid ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct nfs4_state*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct nfs4_state *VAR_1,
  const nfs4_stateid *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_1->open_stateid.seqid);
 u32 VAR_4 = FUNC_0(VAR_2->seqid);

 if (VAR_4 == VAR_3 + 1U ||
     (VAR_4 == 1U && VAR_3 == 0xffffffffU))
  FUNC_1(VAR_1);
 else
  FUNC_2(VAR_0, &VAR_1->flags);
}
