
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct TYPE_2__ {struct saa7146_dev* dev; } ;
struct budget_ci {TYPE_1__ budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct saa7146_dev*,int,int ) ;
 int FUNC_1 (struct saa7146_dev*,int ) ;

__attribute__((used)) static int FUNC_2(struct dvb_ca_en50221 *VAR_3, int VAR_4)
{
 struct budget_ci *VAR_5 = (struct budget_ci *) VAR_3->data;
 struct saa7146_dev *VAR_6 = VAR_5->budget.dev;

 if (VAR_4 != 0)
  return -VAR_1;

 FUNC_0(VAR_6, 1, VAR_2);
 FUNC_1(VAR_6, VAR_0);
 return 0;
}
