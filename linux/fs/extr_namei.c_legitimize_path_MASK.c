
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {TYPE_1__* dentry; int * mnt; } ;
struct nameidata {int m_seq; } ;
struct TYPE_2__ {int d_seq; int d_lockref; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(struct nameidata *VAR_0,
       struct path *VAR_1, unsigned VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1->mnt, VAR_0->m_seq);
 if (FUNC_3(VAR_3)) {
  if (VAR_3 > 0)
   VAR_1->mnt = ((void*)0);
  VAR_1->dentry = ((void*)0);
  return 0;
 }
 if (FUNC_3(!FUNC_1(&VAR_1->dentry->d_lockref))) {
  VAR_1->dentry = ((void*)0);
  return 0;
 }
 return !FUNC_2(&VAR_1->dentry->d_seq, VAR_2);
}
