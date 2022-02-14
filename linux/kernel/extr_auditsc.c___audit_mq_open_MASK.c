
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct mq_attr {int dummy; } ;
struct TYPE_2__ {int oflag; int mode; int attr; } ;
struct audit_context {int type; TYPE_1__ mq_open; } ;


 int VAR_0 ;
 struct audit_context* FUNC_0 () ;
 int FUNC_1 (int *,struct mq_attr*,int) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(int VAR_1, umode_t VAR_2, struct mq_attr *VAR_3)
{
 struct audit_context *VAR_4 = FUNC_0();

 if (VAR_3)
  FUNC_1(&VAR_4->mq_open.attr, VAR_3, sizeof(struct mq_attr));
 else
  FUNC_2(&VAR_4->mq_open.attr, 0, sizeof(struct mq_attr));

 VAR_4->mq_open.oflag = VAR_1;
 VAR_4->mq_open.mode = VAR_2;

 VAR_4->type = VAR_0;
}
