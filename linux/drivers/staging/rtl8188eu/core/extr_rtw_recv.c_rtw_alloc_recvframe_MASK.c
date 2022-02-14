
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_frame {int dummy; } ;
struct __queue {int lock; } ;


 struct recv_frame* FUNC_0 (struct __queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct recv_frame *FUNC_3(struct __queue *VAR_0)
{
 struct recv_frame *VAR_1;

 FUNC_1(&VAR_0->lock);

 VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_0->lock);

 return VAR_1;
}
