
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; int len; } ;
struct bpf_prog {int dummy; } ;
struct bpf_dtab_netdev {int dev; } ;


 int FUNC_0 (struct sk_buff*,struct bpf_prog*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct bpf_dtab_netdev *VAR_0, struct sk_buff *VAR_1,
        struct bpf_prog *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_2(VAR_0->dev, VAR_1->len);
 if (FUNC_1(VAR_3))
  return VAR_3;
 VAR_1->dev = VAR_0->dev;
 FUNC_0(VAR_1, VAR_2);

 return 0;
}
