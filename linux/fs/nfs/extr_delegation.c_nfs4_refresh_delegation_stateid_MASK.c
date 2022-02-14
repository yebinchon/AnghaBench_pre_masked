
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int seqid; } ;
struct nfs_delegation {TYPE_3__ stateid; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {int seqid; } ;
typedef TYPE_1__ nfs4_stateid ;
struct TYPE_8__ {int delegation; } ;


 TYPE_5__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_3__*) ;
 struct nfs_delegation* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

bool FUNC_5(nfs4_stateid *VAR_0, struct inode *VAR_1)
{
 struct nfs_delegation *VAR_2;
 bool VAR_3 = 0;
 if (!VAR_1)
  goto out;

 FUNC_3();
 VAR_2 = FUNC_2(FUNC_0(VAR_1)->delegation);
 if (VAR_2 != ((void*)0) &&
     FUNC_1(VAR_0, &VAR_2->stateid)) {
  VAR_0->seqid = VAR_2->stateid.seqid;
  VAR_3 = 1;
 }
 FUNC_4();
out:
 return VAR_3;
}
