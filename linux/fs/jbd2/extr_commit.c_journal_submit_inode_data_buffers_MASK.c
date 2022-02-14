
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int nr_to_write; int range_end; int range_start; int sync_mode; } ;
struct address_space {int nrpages; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct address_space*,struct writeback_control*) ;

__attribute__((used)) static int FUNC_1(struct address_space *VAR_1,
  loff_t VAR_2, loff_t VAR_3)
{
 int VAR_4;
 struct writeback_control VAR_5 = {
  .sync_mode = VAR_0,
  .nr_to_write = VAR_1->nrpages * 2,
  .range_start = VAR_2,
  .range_end = VAR_3,
 };

 VAR_4 = FUNC_0(VAR_1, &VAR_5);
 return VAR_4;
}
