
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int csum_level; int encapsulation; int ip_summed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_3, u8 VAR_4)
{
 FUNC_0(VAR_3);

 if (VAR_4 & VAR_1)
  VAR_3->ip_summed = VAR_0;

 if (VAR_4 & VAR_2) {
  VAR_3->csum_level = 1;
  VAR_3->encapsulation = 1;
 }
}
