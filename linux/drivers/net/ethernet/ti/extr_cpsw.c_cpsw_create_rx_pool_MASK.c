
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page_pool {int dummy; } ;
struct cpsw_common {struct page_pool** page_pool; TYPE_1__* rxv; } ;
struct TYPE_2__ {int ch; } ;


 scalar_t__ FUNC_0 (struct page_pool*) ;
 int FUNC_1 (struct page_pool*) ;
 int FUNC_2 (int ) ;
 struct page_pool* FUNC_3 (struct cpsw_common*,int) ;

__attribute__((used)) static int FUNC_4(struct cpsw_common *VAR_0, int VAR_1)
{
 struct page_pool *VAR_2;
 int VAR_3 = 0, VAR_4;

 VAR_4 = FUNC_2(VAR_0->rxv[VAR_1].ch);
 VAR_2 = FUNC_3(VAR_0, VAR_4);
 if (FUNC_0(VAR_2))
  VAR_3 = FUNC_1(VAR_2);
 else
  VAR_0->page_pool[VAR_1] = VAR_2;

 return VAR_3;
}
