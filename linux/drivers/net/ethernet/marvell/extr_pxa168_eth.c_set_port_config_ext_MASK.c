
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168_eth_private {int skb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct pxa168_eth_private*) ;
 int FUNC_1 (struct pxa168_eth_private*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pxa168_eth_private *VAR_12)
{
 int VAR_13;

 FUNC_0(VAR_12);
 if (VAR_12->skb_size <= 1518)
  VAR_13 = VAR_6;
 else if (VAR_12->skb_size <= 1536)
  VAR_13 = VAR_7;
 else if (VAR_12->skb_size <= 2048)
  VAR_13 = VAR_8;
 else
  VAR_13 = VAR_9;


 FUNC_1(VAR_12, VAR_11,
     VAR_3 |
     VAR_1 |
     VAR_2 |
     VAR_0 |
     VAR_4 |
     VAR_13 | VAR_5 |
     VAR_10);

 return 0;
}
