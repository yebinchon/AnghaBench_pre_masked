
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct i2400m_roq {int ws; int queue; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct i2400m_roq*,unsigned int) ;
 int FUNC_1 (struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int,unsigned int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,struct i2400m_roq*,struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct device*,char*,unsigned int,unsigned int,int ) ;
 struct device* FUNC_5 (struct i2400m*) ;
 int FUNC_6 (struct i2400m*,int ) ;
 int FUNC_7 (struct i2400m*,struct i2400m_roq*,int ,int ,unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_8 (struct i2400m*,struct i2400m_roq*) ;
 unsigned int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static
void FUNC_11(struct i2400m *VAR_2, struct i2400m_roq *VAR_3,
        struct sk_buff * VAR_4, unsigned VAR_5)
{
 struct device *VAR_6 = FUNC_5(VAR_2);
 unsigned VAR_7, VAR_8;

 FUNC_3(2, VAR_6, "(i2400m %p roq %p skb %p lbn %u) = void\n",
    VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_8 = FUNC_9(&VAR_3->queue);
 VAR_7 = FUNC_0(VAR_3, VAR_5);
 if (FUNC_10(VAR_7 >= 1024)) {
  FUNC_4(VAR_6, "SW BUG? queue nsn %d (lbn %u ws %u)\n",
   VAR_7, VAR_5, VAR_3->ws);
  FUNC_8(VAR_2, VAR_3);
  FUNC_6(VAR_2, VAR_1);
 } else {
  FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7);
  FUNC_7(VAR_2, VAR_3, VAR_0,
         VAR_3->ws, VAR_8, VAR_5, VAR_7, ~0);
 }
 FUNC_2(2, VAR_6, "(i2400m %p roq %p skb %p lbn %u) = void\n",
  VAR_2, VAR_3, VAR_4, VAR_5);
}
