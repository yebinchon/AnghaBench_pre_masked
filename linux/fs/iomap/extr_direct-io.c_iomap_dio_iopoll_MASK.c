
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct kiocb {int ki_cookie; int private; } ;


 struct request_queue* FUNC_0 (int ) ;
 int FUNC_1 (struct request_queue*,struct request_queue*,int) ;

int FUNC_2(struct kiocb *VAR_0, bool VAR_1)
{
 struct request_queue *VAR_2 = FUNC_0(VAR_0->private);

 if (!VAR_2)
  return 0;
 return FUNC_1(VAR_2, FUNC_0(VAR_0->ki_cookie), VAR_1);
}
