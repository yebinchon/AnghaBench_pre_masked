
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; int lock; int wait_state; int wait_command_queue; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ipw_priv*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ipw_priv *VAR_3)
{
 int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_0(">>\n");

 VAR_4 = FUNC_1(VAR_3);

 FUNC_2(&VAR_3->lock, VAR_5);

 VAR_3->status &= ~VAR_0;
 FUNC_4(&VAR_3->wait_command_queue);
 VAR_3->status &= ~(VAR_1 | VAR_2);
 FUNC_4(&VAR_3->wait_state);
 FUNC_3(&VAR_3->lock, VAR_5);

 FUNC_0("<<\n");
 return VAR_4;
}
