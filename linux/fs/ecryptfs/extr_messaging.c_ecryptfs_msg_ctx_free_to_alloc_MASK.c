
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_msg_ctx {scalar_t__ counter; int state; int node; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct ecryptfs_msg_ctx *VAR_3)
{
 FUNC_0(&VAR_3->node, &VAR_2);
 VAR_3->state = VAR_0;
 VAR_3->counter = ++VAR_1;
}
