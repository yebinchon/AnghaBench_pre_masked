
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int csum; } ;
struct iphdr {scalar_t__ protocol; int ihl; int daddr; int saddr; int tot_len; } ;
typedef int __wsum ;
typedef scalar_t__ __u8 ;
typedef scalar_t__ __u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(__wsum VAR_1, struct sk_buff *VAR_2,
          struct iphdr *VAR_3)
{
 __u16 VAR_4 = 0;
 __wsum VAR_5 = 0;
 __u8 VAR_6 = VAR_3->protocol;

 if (FUNC_3(VAR_6 == VAR_0))
  return -1;

 VAR_4 = (FUNC_0(VAR_3->tot_len) - (VAR_3->ihl << 2));
 VAR_5 = FUNC_2(VAR_3->saddr, VAR_3->daddr,
      VAR_4, VAR_6, 0);
 VAR_2->csum = FUNC_1(VAR_1, VAR_5);
 return 0;
}
