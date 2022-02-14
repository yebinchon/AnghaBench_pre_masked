
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int work_func_t ;
struct page {int dummy; } ;
struct cifs_readdata {int work; int done; int list; int refcount; struct page** pages; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct cifs_readdata* FUNC_4 (int,int ) ;

__attribute__((used)) static struct cifs_readdata *
FUNC_5(struct page **VAR_1, work_func_t VAR_2)
{
 struct cifs_readdata *VAR_3;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_0);
 if (VAR_3 != ((void*)0)) {
  VAR_3->pages = VAR_1;
  FUNC_3(&VAR_3->refcount);
  FUNC_0(&VAR_3->list);
  FUNC_2(&VAR_3->done);
  FUNC_1(&VAR_3->work, VAR_2);
 }

 return VAR_3;
}
