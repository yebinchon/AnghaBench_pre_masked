
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int irqreturn_t ;
struct TYPE_2__ {int cmd_complete; } ;
typedef TYPE_1__ IPC_DEV ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 IPC_DEV *VAR_3 = VAR_2;

 FUNC_0(&VAR_3->cmd_complete);
 return VAR_0;
}
