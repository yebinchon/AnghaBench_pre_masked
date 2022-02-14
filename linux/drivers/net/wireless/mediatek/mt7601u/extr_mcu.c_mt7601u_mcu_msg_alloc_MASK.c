
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*,void const*,int) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_4(const void *VAR_2, int VAR_3)
{
 struct sk_buff *VAR_4;

 FUNC_0(VAR_3 % 4);

 VAR_4 = FUNC_1(VAR_3 + VAR_1 + 4, VAR_0);
 if (VAR_4) {
  FUNC_3(VAR_4, VAR_1);
  FUNC_2(VAR_4, VAR_2, VAR_3);
 }

 return VAR_4;
}
