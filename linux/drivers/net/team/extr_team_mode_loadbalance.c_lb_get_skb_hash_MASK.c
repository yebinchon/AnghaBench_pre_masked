
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sk_buff {int dummy; } ;
struct lb_priv {int fp; } ;
struct bpf_prog {int dummy; } ;


 int FUNC_0 (struct bpf_prog*,struct sk_buff*) ;
 struct bpf_prog* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static unsigned int FUNC_3(struct lb_priv *VAR_0,
        struct sk_buff *VAR_1)
{
 struct bpf_prog *VAR_2;
 uint32_t VAR_3;
 unsigned char *VAR_4;

 VAR_2 = FUNC_1(VAR_0->fp);
 if (FUNC_2(!VAR_2))
  return 0;
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_4 = (char *) &VAR_3;
 return VAR_4[0] ^ VAR_4[1] ^ VAR_4[2] ^ VAR_4[3];
}
