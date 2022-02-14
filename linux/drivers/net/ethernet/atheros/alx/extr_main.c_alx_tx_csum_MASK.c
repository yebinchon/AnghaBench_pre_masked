
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ ip_summed; int csum_offset; } ;
struct alx_txd {int word1; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_5, struct alx_txd *VAR_6)
{
 u8 VAR_7, VAR_8;

 if (VAR_5->ip_summed != VAR_0)
  return 0;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 & 1)
  return -VAR_1;

 VAR_8 = VAR_7 + VAR_5->csum_offset;
 VAR_6->word1 |= FUNC_0((VAR_7 >> 1) << VAR_3);
 VAR_6->word1 |= FUNC_0((VAR_8 >> 1) << VAR_2);
 VAR_6->word1 |= FUNC_0(1 << VAR_4);

 return 0;
}
