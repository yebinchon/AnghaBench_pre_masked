
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int * data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2,
     u16 VAR_3,
     u16 VAR_4)
{
 u8 *VAR_5;

 VAR_5 = VAR_2->data;

 FUNC_0(VAR_5 + VAR_1,
  VAR_5, VAR_3 + VAR_4);
 FUNC_1(VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_2->len - VAR_0);
 return 0;
}
