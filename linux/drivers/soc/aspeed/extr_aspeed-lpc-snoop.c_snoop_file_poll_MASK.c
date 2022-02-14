
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {int dummy; } ;
struct aspeed_lpc_snoop_channel {int fifo; int wq; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,struct poll_table_struct*) ;
 struct aspeed_lpc_snoop_channel* FUNC_2 (struct file*) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_1,
        struct poll_table_struct *VAR_2)
{
 struct aspeed_lpc_snoop_channel *VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_1, &VAR_3->wq, VAR_2);
 return !FUNC_0(&VAR_3->fifo) ? VAR_0 : 0;
}
