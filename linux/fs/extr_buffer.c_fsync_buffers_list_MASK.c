
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int prev; int next; } ;
struct buffer_head {struct address_space* b_assoc_map; int b_assoc_buffers; } ;
struct blk_plug {int dummy; } ;
struct address_space {struct list_head private_list; } ;
typedef int spinlock_t ;


 struct buffer_head* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct list_head*) ;
 int VAR_1 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct blk_plug*) ;
 int FUNC_4 (struct blk_plug*) ;
 int FUNC_5 (struct buffer_head*) ;
 scalar_t__ FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct buffer_head*) ;
 int FUNC_10 (int *,struct list_head*) ;
 int FUNC_11 (struct list_head*) ;
 int FUNC_12 (int *,struct list_head*) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct buffer_head*) ;
 int FUNC_17 (struct buffer_head*,int ) ;

__attribute__((used)) static int FUNC_18(spinlock_t *VAR_2, struct list_head *VAR_3)
{
 struct buffer_head *VAR_4;
 struct list_head VAR_5;
 struct address_space *VAR_6;
 int VAR_7 = 0, VAR_8;
 struct blk_plug VAR_9;

 FUNC_1(&VAR_5);
 FUNC_4(&VAR_9);

 FUNC_14(VAR_2);
 while (!FUNC_11(VAR_3)) {
  VAR_4 = FUNC_0(VAR_3->next);
  VAR_6 = VAR_4->b_assoc_map;
  FUNC_2(VAR_4);


  FUNC_13();
  if (FUNC_6(VAR_4) || FUNC_7(VAR_4)) {
   FUNC_10(&VAR_4->b_assoc_buffers, &VAR_5);
   VAR_4->b_assoc_map = VAR_6;
   if (FUNC_6(VAR_4)) {
    FUNC_9(VAR_4);
    FUNC_15(VAR_2);







    FUNC_17(VAR_4, VAR_1);







    FUNC_5(VAR_4);
    FUNC_14(VAR_2);
   }
  }
 }

 FUNC_15(VAR_2);
 FUNC_3(&VAR_9);
 FUNC_14(VAR_2);

 while (!FUNC_11(&VAR_5)) {
  VAR_4 = FUNC_0(VAR_5.prev);
  FUNC_9(VAR_4);
  VAR_6 = VAR_4->b_assoc_map;
  FUNC_2(VAR_4);


  FUNC_13();
  if (FUNC_6(VAR_4)) {
   FUNC_10(&VAR_4->b_assoc_buffers,
     &VAR_6->private_list);
   VAR_4->b_assoc_map = VAR_6;
  }
  FUNC_15(VAR_2);
  FUNC_16(VAR_4);
  if (!FUNC_8(VAR_4))
   VAR_7 = -VAR_0;
  FUNC_5(VAR_4);
  FUNC_14(VAR_2);
 }

 FUNC_15(VAR_2);
 VAR_8 = FUNC_12(VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;
 else
  return VAR_8;
}
