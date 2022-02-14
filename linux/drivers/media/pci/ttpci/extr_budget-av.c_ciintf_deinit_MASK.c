
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct TYPE_2__ {struct saa7146_dev* dev; } ;
struct budget_av {int ca; TYPE_1__ budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct saa7146_dev*,int,int ) ;
 int FUNC_2 (struct saa7146_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct budget_av *VAR_3)
{
 struct saa7146_dev *VAR_4 = VAR_3->budget.dev;

 FUNC_1(VAR_4, 0, VAR_2);
 FUNC_1(VAR_4, 1, VAR_2);
 FUNC_1(VAR_4, 2, VAR_2);
 FUNC_1(VAR_4, 3, VAR_2);


 FUNC_0(&VAR_3->ca);


 FUNC_2(VAR_4, VAR_1, VAR_0);
}
