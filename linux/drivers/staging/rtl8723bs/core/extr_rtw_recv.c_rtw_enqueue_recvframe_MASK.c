
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union recv_frame {int dummy; } recv_frame ;
struct __queue {int lock; } ;
typedef int sint ;


 int FUNC_0 (union recv_frame*,struct __queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

sint FUNC_3(union recv_frame *VAR_0, struct __queue *VAR_1)
{
 sint VAR_2;


 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);

 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
