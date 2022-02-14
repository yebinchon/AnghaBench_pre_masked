
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int nrexceptional; int i_pages; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (void*,struct address_space*,int) ;
 void* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,void*) ;
 int FUNC_5 (void*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct address_space *VAR_3,
       pgoff_t VAR_4, bool VAR_5)
{
 FUNC_1(VAR_2, &VAR_3->i_pages, VAR_4);
 int VAR_6 = 0;
 void *VAR_7;

 FUNC_7(&VAR_2);
 VAR_7 = FUNC_3(&VAR_2, 0);
 if (!VAR_7 || FUNC_0(!FUNC_5(VAR_7)))
  goto out;
 if (!VAR_5 &&
     (FUNC_6(&VAR_2, VAR_0) ||
      FUNC_6(&VAR_2, VAR_1)))
  goto out;
 FUNC_2(VAR_7, VAR_3, VAR_5);
 FUNC_8(&VAR_2, ((void*)0));
 VAR_3->nrexceptional--;
 VAR_6 = 1;
out:
 FUNC_4(&VAR_2, VAR_7);
 FUNC_9(&VAR_2);
 return VAR_6;
}
