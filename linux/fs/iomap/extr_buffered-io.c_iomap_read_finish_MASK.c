
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct iomap_page {int read_count; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static void
FUNC_2(struct iomap_page *VAR_0, struct page *VAR_1)
{
 if (!VAR_0 || FUNC_0(&VAR_0->read_count))
  FUNC_1(VAR_1);
}
