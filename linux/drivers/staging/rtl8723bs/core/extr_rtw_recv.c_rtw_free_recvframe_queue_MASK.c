
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union recv_frame {int dummy; } recv_frame ;
struct list_head {int dummy; } ;
struct __queue {int lock; } ;


 struct list_head* FUNC_0 (struct __queue*) ;
 struct list_head* FUNC_1 (struct list_head*) ;
 int FUNC_2 (union recv_frame*,struct __queue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct __queue *VAR_0, struct __queue *VAR_1)
{
 union recv_frame *VAR_2;
 struct list_head *VAR_3, *VAR_4;

 FUNC_3(&VAR_0->lock);

 VAR_4 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_4);

 while (VAR_4 != VAR_3) {
  VAR_2 = (union recv_frame *)VAR_3;

  VAR_3 = FUNC_1(VAR_3);

  FUNC_2(VAR_2, VAR_1);
 }

 FUNC_4(&VAR_0->lock);
}
