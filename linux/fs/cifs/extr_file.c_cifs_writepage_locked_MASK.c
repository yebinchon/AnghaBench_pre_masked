
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; } ;
struct page {int mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct page*,int ,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct page*) ;
 unsigned int FUNC_8 () ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct writeback_control*,struct page*) ;
 int FUNC_13 (struct page*) ;

__attribute__((used)) static int
FUNC_14(struct page *VAR_4, struct writeback_control *VAR_5)
{
 int VAR_6;
 unsigned int VAR_7;

 VAR_7 = FUNC_8();

 FUNC_7(VAR_4);
 if (!FUNC_0(VAR_4))
  FUNC_3(VAR_1, "ppw - page not up to date\n");
 FUNC_13(VAR_4);
retry_write:
 VAR_6 = FUNC_4(VAR_4, 0, VAR_2);
 if (FUNC_9(VAR_6)) {
  if (VAR_5->sync_mode == VAR_3 && VAR_6 == -VAR_0)
   goto retry_write;
  FUNC_12(VAR_5, VAR_4);
 } else if (VAR_6 != 0) {
  FUNC_1(VAR_4);
  FUNC_10(VAR_4->mapping, VAR_6);
 } else {
  FUNC_2(VAR_4);
 }
 FUNC_5(VAR_4);
 FUNC_11(VAR_4);
 FUNC_6(VAR_7);
 return VAR_6;
}
