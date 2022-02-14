
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tun_struct {int steering_prog; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 struct tun_struct* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct tun_struct*,struct sk_buff*) ;
 int FUNC_5 (struct tun_struct*,struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_6(struct net_device *VAR_0, struct sk_buff *VAR_1,
       struct net_device *VAR_2)
{
 struct tun_struct *VAR_3 = FUNC_0(VAR_0);
 u16 VAR_4;

 FUNC_2();
 if (FUNC_1(VAR_3->steering_prog))
  VAR_4 = FUNC_5(VAR_3, VAR_1);
 else
  VAR_4 = FUNC_4(VAR_3, VAR_1);
 FUNC_3();

 return VAR_4;
}
