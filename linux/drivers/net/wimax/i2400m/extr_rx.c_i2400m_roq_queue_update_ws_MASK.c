
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int cb; } ;
struct i2400m_roq_data {int cs; } ;
struct i2400m_roq {unsigned int ws; int queue; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct i2400m_roq*,unsigned int) ;
 int FUNC_1 (struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int,unsigned int) ;
 int FUNC_2 (struct i2400m*,struct i2400m_roq*,int ) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 int FUNC_4 (int,struct device*,char*,struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 struct device* FUNC_5 (struct i2400m*) ;
 int FUNC_6 (struct i2400m*,struct sk_buff*,int ) ;
 int FUNC_7 (struct i2400m*,struct i2400m_roq*,int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_8 (int *) ;

__attribute__((used)) static
void FUNC_9(struct i2400m *VAR_1, struct i2400m_roq *VAR_2,
    struct sk_buff * VAR_3, unsigned VAR_4)
{
 struct device *VAR_5 = FUNC_5(VAR_1);
 unsigned VAR_6, VAR_7, VAR_8;

 FUNC_4(2, VAR_5, "(i2400m %p roq %p skb %p sn %u)\n",
    VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_8 = FUNC_8(&VAR_2->queue);
 VAR_6 = FUNC_0(VAR_2, VAR_4);






 VAR_7 = VAR_2->ws;



 if (VAR_8 == 0) {
  struct i2400m_roq_data *VAR_9;
  VAR_9 = (struct i2400m_roq_data *) &VAR_3->cb;
  FUNC_6(VAR_1, VAR_3, VAR_9->cs);
 } else
  FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_6);

 FUNC_2(VAR_1, VAR_2, VAR_4 + 1);
 FUNC_7(VAR_1, VAR_2, VAR_0,
      VAR_7, VAR_8, VAR_4, VAR_6, VAR_2->ws);

 FUNC_3(2, VAR_5, "(i2400m %p roq %p skb %p sn %u) = void\n",
  VAR_1, VAR_2, VAR_3, VAR_4);
}
