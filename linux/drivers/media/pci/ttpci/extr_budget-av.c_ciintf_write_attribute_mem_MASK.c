
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;
struct budget_av {TYPE_1__ budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_ca_en50221*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int,int,int ,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct dvb_ca_en50221 *VAR_4, int VAR_5, int VAR_6, u8 VAR_7)
{
 struct budget_av *VAR_8 = (struct budget_av *) VAR_4->data;
 int VAR_9;

 if (VAR_5 != 0)
  return -VAR_1;

 FUNC_2(VAR_8->budget.dev, 1, VAR_3);
 FUNC_4(1);

 VAR_9 = FUNC_3(&VAR_8->budget, VAR_0, VAR_6 & 0xfff, 1, VAR_7, 0, 1);
 if (VAR_9 == -VAR_2) {
  FUNC_0(VAR_4, VAR_5);
  FUNC_1("cam ejected 2\n");
 }
 return VAR_9;
}
