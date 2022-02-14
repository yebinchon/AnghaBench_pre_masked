
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union recv_frame {int dummy; } recv_frame ;
struct __queue {int lock; } ;


 union recv_frame* FUNC_0 (struct __queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

union recv_frame *FUNC_3(struct __queue *VAR_0)
{
 union recv_frame *VAR_1;

 FUNC_1(&VAR_0->lock);

 VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_0->lock);

 return VAR_1;
}
