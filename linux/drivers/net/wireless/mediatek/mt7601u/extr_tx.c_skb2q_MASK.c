
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static u8 FUNC_4(struct sk_buff *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2);

 if (FUNC_0(VAR_3 >= VAR_1)) {
  VAR_3 = VAR_0;
  FUNC_3(VAR_2, VAR_3);
 }

 return FUNC_1(VAR_3);
}
