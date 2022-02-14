
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_delegation {int dummy; } ;
struct inode {int dummy; } ;
typedef int fmode_t ;
struct TYPE_2__ {int delegation; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct nfs_delegation*,int) ;
 int FUNC_2 (struct nfs_delegation*) ;
 struct nfs_delegation* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_2, fmode_t VAR_3, bool VAR_4)
{
 struct nfs_delegation *VAR_5;
 int VAR_6 = 0;

 VAR_3 &= VAR_0|VAR_1;
 FUNC_4();
 VAR_5 = FUNC_3(FUNC_0(VAR_2)->delegation);
 if (FUNC_1(VAR_5, VAR_3)) {
  if (VAR_4)
   FUNC_2(VAR_5);
  VAR_6 = 1;
 }
 FUNC_5();
 return VAR_6;
}
