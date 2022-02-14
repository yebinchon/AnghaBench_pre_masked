
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap_page {int write_count; int read_count; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iomap_page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int ) ;
 struct iomap_page* FUNC_6 (struct page*) ;

__attribute__((used)) static void
FUNC_7(struct page *VAR_0)
{
 struct iomap_page *VAR_1 = FUNC_6(VAR_0);

 if (!VAR_1)
  return;
 FUNC_1(FUNC_2(&VAR_1->read_count));
 FUNC_1(FUNC_2(&VAR_1->write_count));
 FUNC_0(VAR_0);
 FUNC_5(VAR_0, 0);
 FUNC_4(VAR_0);
 FUNC_3(VAR_1);
}
