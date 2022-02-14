
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ nr_to_write; int range_end; int range_start; int sync_mode; } ;
struct inode {int i_mapping; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*,struct writeback_control*) ;

int FUNC_3(struct inode *VAR_4, int VAR_5)
{
 struct writeback_control VAR_6 = {
  .nr_to_write = VAR_1,
  .sync_mode = VAR_5 ? VAR_2 : VAR_3,
  .range_start = 0,
  .range_end = VAR_0,
 };

 if (!FUNC_0(VAR_4->i_mapping))
  VAR_6.nr_to_write = 0;

 FUNC_1();
 return FUNC_2(VAR_4, &VAR_6);
}
