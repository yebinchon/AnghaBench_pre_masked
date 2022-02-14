
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adfs_dir {int nr_buffers; int * sb; int * bh_fplus; int * bh; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct adfs_dir *VAR_0)
{
 int VAR_1;

 if (VAR_0->bh_fplus) {
  for (VAR_1 = 0; VAR_1 < VAR_0->nr_buffers; VAR_1++)
   FUNC_0(VAR_0->bh_fplus[VAR_1]);

  if (&VAR_0->bh[0] != VAR_0->bh_fplus)
   FUNC_1(VAR_0->bh_fplus);

  VAR_0->bh_fplus = ((void*)0);
 }

 VAR_0->nr_buffers = 0;
 VAR_0->sb = ((void*)0);
}
