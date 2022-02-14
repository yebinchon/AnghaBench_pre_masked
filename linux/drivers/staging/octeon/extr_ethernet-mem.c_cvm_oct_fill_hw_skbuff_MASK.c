
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;


 int FUNC_0 (int,int,int) ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(int VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2;

 while (VAR_3) {
  struct sk_buff *VAR_4 = FUNC_1(VAR_1 + 256);

  if (FUNC_3(!VAR_4))
   break;
  FUNC_2(VAR_4, 256 - (((unsigned long)VAR_4->data) & 0x7f));
  *(struct sk_buff **)(VAR_4->data - sizeof(void *)) = VAR_4;
  FUNC_0(VAR_4->data, VAR_0, VAR_1 / 128);
  VAR_3--;
 }
 return VAR_2 - VAR_3;
}
