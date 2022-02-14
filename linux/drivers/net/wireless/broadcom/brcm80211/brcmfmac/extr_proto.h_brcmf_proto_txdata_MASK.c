
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct brcmf_pub {TYPE_1__* proto; } ;
struct TYPE_2__ {int (* txdata ) (struct brcmf_pub*,int,int ,struct sk_buff*) ;} ;


 int FUNC_0 (struct brcmf_pub*,int,int ,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_1(struct brcmf_pub *VAR_0, int VAR_1,
         u8 VAR_2, struct sk_buff *VAR_3)
{
 return VAR_0->proto->txdata(VAR_0, VAR_1, VAR_2, VAR_3);
}
