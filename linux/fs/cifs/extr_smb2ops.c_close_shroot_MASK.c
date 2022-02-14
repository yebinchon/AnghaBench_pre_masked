
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_fid {int fid_mutex; int refcount; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct cached_fid *VAR_1)
{
 FUNC_1(&VAR_1->fid_mutex);
 FUNC_0(&VAR_1->refcount, VAR_0);
 FUNC_2(&VAR_1->fid_mutex);
}
