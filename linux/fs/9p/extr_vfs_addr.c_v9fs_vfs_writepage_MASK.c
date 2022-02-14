
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,struct page*) ;
 int FUNC_3 (struct writeback_control*,struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;

__attribute__((used)) static int FUNC_6(struct page *VAR_2, struct writeback_control *VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_1, "page %p\n", VAR_2);

 VAR_4 = FUNC_5(VAR_2);
 if (VAR_4 < 0) {
  if (VAR_4 == -VAR_0) {
   FUNC_3(VAR_3, VAR_2);
   VAR_4 = 0;
  } else {
   FUNC_0(VAR_2);
   FUNC_1(VAR_2->mapping, VAR_4);
  }
 } else
  VAR_4 = 0;

 FUNC_4(VAR_2);
 return VAR_4;
}
