
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int seqid; } ;
struct nfs_delegation {int type; TYPE_1__ stateid; } ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 () ;

__attribute__((used)) static void
FUNC_2(struct nfs_delegation *VAR_0,
  const struct nfs_delegation *VAR_1)
{
 if (FUNC_0(&VAR_1->stateid, &VAR_0->stateid)) {
  VAR_0->stateid.seqid = VAR_1->stateid.seqid;
  FUNC_1();
  VAR_0->type = VAR_1->type;
 }
}
