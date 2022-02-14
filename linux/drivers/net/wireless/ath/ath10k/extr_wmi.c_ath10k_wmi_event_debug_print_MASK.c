
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; char* data; } ;
struct ath10k {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,char*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;

void FUNC_4(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 char VAR_3[101], VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < sizeof(VAR_3) - 1; VAR_5++) {
  if (VAR_5 >= VAR_2->len)
   break;

  VAR_4 = VAR_2->data[VAR_5];

  if (VAR_4 == '\0')
   break;

  if (FUNC_2(VAR_4) && FUNC_3(VAR_4))
   VAR_3[VAR_5] = VAR_4;
  else
   VAR_3[VAR_5] = '.';
 }

 if (VAR_5 == sizeof(VAR_3) - 1)
  FUNC_1(VAR_1, "wmi debug print truncated: %d\n", VAR_2->len);


 if (VAR_2->data[VAR_5 - 1] == '\n')
  VAR_5--;


 VAR_3[VAR_5] = '\0';

 FUNC_0(VAR_1, VAR_0, "wmi print '%s'\n", VAR_3);
}
