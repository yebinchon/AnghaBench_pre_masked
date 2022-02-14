
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct net_device {int dummy; } ;
struct i2400m {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,int ,int ) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct net_device*,struct sk_buff*,int) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*,struct net_device*,struct sk_buff*) ;
 int FUNC_3 (int,struct device*,char*,struct sk_buff*,int ) ;
 struct device* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct i2400m*,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static
int FUNC_8(struct i2400m *VAR_1, struct net_device *VAR_2,
    struct sk_buff *VAR_3)
{
 int VAR_4;
 struct device *VAR_5 = FUNC_4(VAR_1);

 FUNC_2(3, VAR_5, "(i2400m %p net_dev %p skb %p)\n",
    VAR_1, VAR_2, VAR_3);

 FUNC_7(VAR_2);
 FUNC_6(VAR_3);
 FUNC_3(3, VAR_5, "NETTX: skb %p sending %d bytes to radio\n",
   VAR_3, VAR_3->len);
 FUNC_0(4, VAR_5, VAR_3->data, VAR_3->len);
 VAR_4 = FUNC_5(VAR_1, VAR_3->data, VAR_3->len, VAR_0);
 FUNC_1(3, VAR_5, "(i2400m %p net_dev %p skb %p) = %d\n",
  VAR_1, VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
