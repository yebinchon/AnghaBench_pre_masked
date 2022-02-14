
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_dst_cache; } ;
struct sk_buff {struct sock* sk; } ;
struct net_device_context {int* tx_table; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct net_device_context* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sk_buff*,struct net_device_context const*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int) ;

__attribute__((used)) static inline int FUNC_5(struct net_device *VAR_1,
          struct sk_buff *VAR_2, int VAR_3)
{
 const struct net_device_context *VAR_4 = FUNC_0(VAR_1);
 struct sock *VAR_5 = VAR_2->sk;
 int VAR_6;

 VAR_6 = VAR_4->tx_table[FUNC_1(VAR_2, VAR_4) &
         (VAR_0 - 1)];


 if (VAR_6 != VAR_3 &&
     VAR_5 && FUNC_3(VAR_5) && FUNC_2(VAR_5->sk_dst_cache))
  FUNC_4(VAR_5, VAR_6);

 return VAR_6;
}
