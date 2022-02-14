
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __le16 ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char VAR_8 ;
 int FUNC_0 (char) ;

__attribute__((used)) static __le16 FUNC_1(char VAR_9, bool VAR_10)
{
 __le16 VAR_11;

 if (VAR_9 >= 0x01 && VAR_9 <= 0x1F) {
  VAR_11 = FUNC_0(VAR_9 + 0xF000);
  return VAR_11;
 }
 switch (VAR_9) {
 case ':':
  VAR_11 = FUNC_0(VAR_1);
  break;
 case '"':
  VAR_11 = FUNC_0(VAR_2);
  break;
 case '*':
  VAR_11 = FUNC_0(VAR_0);
  break;
 case '?':
  VAR_11 = FUNC_0(VAR_7);
  break;
 case '<':
  VAR_11 = FUNC_0(VAR_4);
  break;
 case '>':
  VAR_11 = FUNC_0(VAR_3);
  break;
 case '|':
  VAR_11 = FUNC_0(VAR_6);
  break;
 case '.':
  if (VAR_10)
   VAR_11 = FUNC_0(VAR_5);
  else
   VAR_11 = 0;
  break;
 case ' ':
  if (VAR_10)
   VAR_11 = FUNC_0(VAR_8);
  else
   VAR_11 = 0;
  break;
 default:
  VAR_11 = 0;
 }

 return VAR_11;
}
