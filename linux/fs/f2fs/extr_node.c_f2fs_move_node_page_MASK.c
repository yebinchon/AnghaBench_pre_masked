
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int nr_to_write; int for_reclaim; int sync_mode; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct page*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct page*,int,int *,struct writeback_control*,int,int ,int *) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct page*,int ,int,int) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

int FUNC_7(struct page *VAR_5, int VAR_6)
{
 int VAR_7 = 0;

 if (VAR_6 == VAR_1) {
  struct writeback_control VAR_8 = {
   .sync_mode = VAR_4,
   .nr_to_write = 1,
   .for_reclaim = 0,
  };

  FUNC_4(VAR_5, VAR_3, 1, 1);

  FUNC_5(VAR_5);

  if (!FUNC_2(VAR_5)) {
   VAR_7 = -VAR_0;
   goto out_page;
  }

  if (FUNC_1(VAR_5, 0, ((void*)0),
     &VAR_8, 0, VAR_2, ((void*)0))) {
   VAR_7 = -VAR_0;
   FUNC_6(VAR_5);
  }
  goto release_page;
 } else {

  if (!FUNC_0(VAR_5))
   FUNC_5(VAR_5);
 }
out_page:
 FUNC_6(VAR_5);
release_page:
 FUNC_3(VAR_5, 0);
 return VAR_7;
}
