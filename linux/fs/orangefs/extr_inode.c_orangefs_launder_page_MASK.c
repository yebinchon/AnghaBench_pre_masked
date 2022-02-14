
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int nr_to_write; int sync_mode; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*,struct writeback_control*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_1)
{
 int VAR_2 = 0;
 struct writeback_control VAR_3 = {
  .sync_mode = VAR_0,
  .nr_to_write = 0,
 };
 FUNC_3(VAR_1);
 if (FUNC_0(VAR_1)) {
  VAR_2 = FUNC_2(VAR_1, &VAR_3);
  FUNC_1(VAR_1);
 }
 return VAR_2;
}
