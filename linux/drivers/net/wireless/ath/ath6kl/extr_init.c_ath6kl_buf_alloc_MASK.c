
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct htc_packet {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

struct sk_buff *FUNC_3(int VAR_3)
{
 struct sk_buff *VAR_4;
 u16 VAR_5;


 VAR_5 = FUNC_1((2 * VAR_2) + VAR_0 +
     sizeof(struct htc_packet) + VAR_1, 4);
 VAR_4 = FUNC_0(VAR_3 + VAR_5);

 if (VAR_4)
  FUNC_2(VAR_4, VAR_5 - VAR_2);
 return VAR_4;
}
