
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ffs_function {TYPE_1__* ffs; struct ffs_ep* eps; } ;
struct ffs_epfile {int * ep; } ;
struct ffs_ep {int ep; } ;
struct TYPE_2__ {unsigned int eps_count; int eps_lock; struct ffs_epfile* epfiles; } ;


 int FUNC_0 (struct ffs_epfile*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ffs_function *VAR_0)
{
 struct ffs_ep *VAR_1 = VAR_0->eps;
 struct ffs_epfile *VAR_2 = VAR_0->ffs->epfiles;
 unsigned VAR_3 = VAR_0->ffs->eps_count;
 unsigned long VAR_4;

 FUNC_2(&VAR_0->ffs->eps_lock, VAR_4);
 while (VAR_3--) {

  if (FUNC_1(VAR_1->ep))
   FUNC_4(VAR_1->ep);
  ++VAR_1;

  if (VAR_2) {
   VAR_2->ep = ((void*)0);
   FUNC_0(VAR_2);
   ++VAR_2;
  }
 }
 FUNC_3(&VAR_0->ffs->eps_lock, VAR_4);
}
