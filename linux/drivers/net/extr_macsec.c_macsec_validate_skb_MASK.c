
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct macsec_eth_header {int tci_an; int short_length; int packet_number; scalar_t__ unused; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_6, u16 VAR_7)
{
 struct macsec_eth_header *VAR_8 = (struct macsec_eth_header *)VAR_6->data;
 int VAR_9 = VAR_6->len - 2 * VAR_0;
 int VAR_10 = FUNC_0(!!(VAR_8->tci_an & VAR_2)) + VAR_7;


 if (VAR_6->len <= 16)
  return 0;




 if (VAR_8->tci_an & VAR_4)
  return 0;


 if ((VAR_8->tci_an & VAR_1 || VAR_8->tci_an & VAR_3) &&
     (VAR_8->tci_an & VAR_2))
  return 0;


 if (VAR_8->unused)
  return 0;


 if (!VAR_8->packet_number)
  return 0;


 if (VAR_8->short_length)
  return VAR_9 == VAR_10 + VAR_8->short_length;
 return VAR_9 >= VAR_10 + VAR_5;
}
