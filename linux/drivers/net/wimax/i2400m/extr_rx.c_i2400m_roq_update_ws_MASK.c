
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_roq {unsigned int ws; int queue; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct i2400m*,struct i2400m_roq*,unsigned int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct i2400m_roq*,unsigned int) ;
 struct device* FUNC_2 (struct i2400m*) ;
 int FUNC_3 (struct i2400m*,struct i2400m_roq*,int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (int *) ;

__attribute__((used)) static
void FUNC_5(struct i2400m *VAR_1, struct i2400m_roq *VAR_2,
     unsigned VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_1);
 unsigned VAR_5, VAR_6, VAR_7;

 FUNC_1(2, VAR_4, "(i2400m %p roq %p sn %u)\n", VAR_1, VAR_2, VAR_3);
 VAR_5 = VAR_2->ws;
 VAR_7 = FUNC_4(&VAR_2->queue);
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_1, VAR_2, VAR_0,
        VAR_5, VAR_7, VAR_3, VAR_6, VAR_2->ws);
 FUNC_1(2, VAR_4, "(i2400m %p roq %p sn %u) = void\n", VAR_1, VAR_2, VAR_3);
}
