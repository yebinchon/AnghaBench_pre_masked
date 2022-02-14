
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct brcmf_pub {int bus_if; } ;


 int FUNC_0 (int ,struct sk_buff*) ;
 int FUNC_1 (struct brcmf_pub*,int,int ,struct sk_buff*) ;

__attribute__((used)) static int
FUNC_2(struct brcmf_pub *VAR_0, int VAR_1, u8 VAR_2,
   struct sk_buff *VAR_3)
{
 FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 return FUNC_0(VAR_0->bus_if, VAR_3);
}
