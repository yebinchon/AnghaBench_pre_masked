
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_delegation {int stateid; } ;
struct inode {int dummy; } ;
typedef int nfs4_stateid ;
struct TYPE_2__ {int delegation; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int const*,int *) ;
 int FUNC_4 (struct inode*,int const*) ;
 int FUNC_5 (int ,struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static bool FUNC_9(struct inode *VAR_0,
  const nfs4_stateid *VAR_1)
{
 struct nfs_delegation *VAR_2;
 nfs4_stateid VAR_3;
 bool VAR_4 = 0;

 FUNC_7();
 VAR_2 = FUNC_6(FUNC_0(VAR_0)->delegation);
 if (VAR_2 == ((void*)0))
  goto out;
 if (VAR_1 == ((void*)0)) {
  FUNC_2(&VAR_3, &VAR_2->stateid);
  VAR_1 = &VAR_3;
 } else if (!FUNC_3(VAR_1, &VAR_2->stateid))
  goto out;
 FUNC_5(FUNC_1(VAR_0), VAR_2);
 VAR_4 = 1;
out:
 FUNC_8();
 if (VAR_4)
  FUNC_4(VAR_0, VAR_1);
 return VAR_4;
}
