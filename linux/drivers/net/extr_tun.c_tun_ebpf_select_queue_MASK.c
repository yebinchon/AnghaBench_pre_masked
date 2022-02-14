
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tun_struct {int steering_prog; int numqueues; } ;
struct tun_prog {int prog; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct sk_buff*) ;
 struct tun_prog* FUNC_2 (int ) ;

__attribute__((used)) static u16 FUNC_3(struct tun_struct *VAR_0, struct sk_buff *VAR_1)
{
 struct tun_prog *VAR_2;
 u32 VAR_3;
 u16 VAR_4 = 0;

 VAR_3 = FUNC_0(VAR_0->numqueues);
 if (!VAR_3)
  return 0;

 VAR_2 = FUNC_2(VAR_0->steering_prog);
 if (VAR_2)
  VAR_4 = FUNC_1(VAR_2->prog, VAR_1);

 return VAR_4 % VAR_3;
}
