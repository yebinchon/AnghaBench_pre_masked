
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int mapping; } ;
struct list_head {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 struct page* FUNC_0 (struct list_head*,int ,int) ;

__attribute__((used)) static inline struct page *FUNC_1(struct list_head *VAR_1,
            gfp_t VAR_2)
{
 struct page *VAR_3 = FUNC_0(VAR_1, VAR_2, 1);

 VAR_3->mapping = VAR_0;
 return VAR_3;
}
