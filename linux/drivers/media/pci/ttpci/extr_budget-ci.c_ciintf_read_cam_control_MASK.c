
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ca_en50221 {scalar_t__ data; } ;
struct budget_ci {int budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_ca_en50221 *VAR_3, int VAR_4, u8 VAR_5)
{
 struct budget_ci *VAR_6 = (struct budget_ci *) VAR_3->data;

 if (VAR_4 != 0)
  return -VAR_2;

 return FUNC_0(&VAR_6->budget, VAR_1,
         VAR_0 | (VAR_5 & 3), 1, 1, 0);
}
