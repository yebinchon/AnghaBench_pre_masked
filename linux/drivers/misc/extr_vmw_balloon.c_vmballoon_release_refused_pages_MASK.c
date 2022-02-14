
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmballoon_ctl {int page_size; int n_refused_pages; int refused_pages; } ;
struct vmballoon {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (struct vmballoon*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vmballoon *VAR_1,
         struct vmballoon_ctl *VAR_2)
{
 FUNC_1(VAR_1, VAR_0,
     VAR_2->page_size);

 FUNC_0(&VAR_2->refused_pages, &VAR_2->n_refused_pages,
        VAR_2->page_size);
}
