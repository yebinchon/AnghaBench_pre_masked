
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 struct sk_buff* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct sk_buff*,unsigned char*,unsigned int) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_3(unsigned char *VAR_2,
            unsigned int VAR_3)
{
 struct sk_buff *VAR_4;

 if (VAR_3 > 2 && VAR_2[0] == VAR_0 && VAR_2[1] == VAR_1) {
  VAR_3 -= 2;
  VAR_2 += 2;
 }

 VAR_4 = FUNC_0(VAR_3 + 4);
 if (VAR_4 == ((void*)0))
  return ((void*)0);
 FUNC_2(VAR_4, 2);
 FUNC_1(VAR_4, VAR_2, VAR_3);

 return VAR_4;
}
