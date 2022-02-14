
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {int mapping_lock; struct address_space* mapping; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct cxl_context *VAR_0,
   struct address_space *VAR_1)
{
 FUNC_0(&VAR_0->mapping_lock);
 VAR_0->mapping = VAR_1;
 FUNC_1(&VAR_0->mapping_lock);
}
