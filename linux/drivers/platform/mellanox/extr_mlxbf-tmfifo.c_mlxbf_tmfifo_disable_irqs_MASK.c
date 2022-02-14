
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxbf_tmfifo {TYPE_1__* irq_info; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct mlxbf_tmfifo *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = VAR_1->irq_info[VAR_2].irq;
  VAR_1->irq_info[VAR_2].irq = 0;
  FUNC_0(VAR_3);
 }
}
