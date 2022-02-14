
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint ;
struct sk_buff {scalar_t__ data; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 long FUNC_1 (long,int) ;
 int FUNC_2 (struct sk_buff*,long) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0, int VAR_1, int VAR_2)
{
 uint VAR_3;
 VAR_3 = (unsigned long)(VAR_0->data);
 VAR_3 = FUNC_1(VAR_3, (VAR_2)) - VAR_3;
 if (VAR_3)
  FUNC_2(VAR_0, VAR_3);
 FUNC_0(VAR_0, VAR_1);
}
