
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ range_end; scalar_t__ range_start; int nr_to_write; int sync_mode; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct page*,struct writeback_control*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (struct page*) ;

int FUNC_8(struct inode *VAR_3, struct page *VAR_4)
{
 loff_t VAR_5 = FUNC_4(VAR_4);
 loff_t VAR_6 = VAR_5 + (loff_t)(VAR_1 - 1);
 struct writeback_control VAR_7 = {
  .sync_mode = VAR_2,
  .nr_to_write = 0,
  .range_start = VAR_5,
  .range_end = VAR_6,
 };
 int VAR_8;

 FUNC_5(VAR_3);

 for (;;) {
  FUNC_7(VAR_4);
  if (FUNC_1(VAR_4)) {
   VAR_8 = FUNC_3(VAR_4, &VAR_7);
   if (VAR_8 < 0)
    goto out_error;
   continue;
  }
  VAR_8 = 0;
  if (!FUNC_0(VAR_4))
   break;
  VAR_8 = FUNC_2(VAR_3, VAR_0);
  if (VAR_8 < 0)
   goto out_error;
 }
out_error:
 FUNC_6(VAR_3, VAR_8);
 return VAR_8;
}
