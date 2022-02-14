
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int dummy; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*,struct writeback_control*,void*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(struct page *VAR_1, struct writeback_control *VAR_2, void *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4 != VAR_0)
  FUNC_1(VAR_1);
 return VAR_4;
}
