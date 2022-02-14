
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_pqueue {int connected; int io; int * processing; int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct fuse_pqueue *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(&VAR_1->lock);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->processing[VAR_2]);
 FUNC_0(&VAR_1->io);
 VAR_1->connected = 1;
}
