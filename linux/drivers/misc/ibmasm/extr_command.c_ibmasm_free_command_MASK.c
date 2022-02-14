
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kref {int dummy; } ;
struct command {struct command* buffer; int queue_node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct command*) ;
 int FUNC_4 (int *) ;
 struct command* FUNC_5 (struct kref*) ;

void FUNC_6(struct kref *VAR_1)
{
 struct command *VAR_2 = FUNC_5(VAR_1);

 FUNC_4(&VAR_2->queue_node);
 FUNC_0(&VAR_0);
 FUNC_2("command count: %d\n", FUNC_1(&VAR_0));
 FUNC_3(VAR_2->buffer);
 FUNC_3(VAR_2);
}
