
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recv_frame {int dummy; } ;
struct __queue {int lock; } ;


 int FUNC_0 (struct recv_frame*,struct __queue*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct recv_frame *VAR_0, struct __queue *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
