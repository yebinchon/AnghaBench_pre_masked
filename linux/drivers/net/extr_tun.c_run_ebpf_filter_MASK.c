
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int filter_prog; } ;
struct tun_prog {int prog; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 struct tun_prog* FUNC_1 (int ) ;

__attribute__((used)) static unsigned int FUNC_2(struct tun_struct *VAR_0,
        struct sk_buff *VAR_1,
        int VAR_2)
{
 struct tun_prog *VAR_3 = FUNC_1(VAR_0->filter_prog);

 if (VAR_3)
  VAR_2 = FUNC_0(VAR_3->prog, VAR_1);

 return VAR_2;
}
