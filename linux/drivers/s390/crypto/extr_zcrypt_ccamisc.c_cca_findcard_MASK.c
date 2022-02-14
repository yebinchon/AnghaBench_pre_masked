
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct secaeskeytoken {int mkvp; } ;
struct keytoken_header {scalar_t__ type; int version; } ;
struct cipherkeytoken {int mkvp0; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int FUNC_0 (int ,int *,int *,int,int) ;

int FUNC_1(const u8 *VAR_3, u16 *VAR_4, u16 *VAR_5, int VAR_6)
{
 u64 VAR_7;
 int VAR_8 = 0;
 const struct keytoken_header *VAR_9 = (struct keytoken_header *) VAR_3;

 if (VAR_9->type != VAR_2)
  return -VAR_1;

 switch (VAR_9->version) {
 case 129:
  VAR_7 = ((struct secaeskeytoken *)VAR_3)->mkvp;
  break;
 case 128:
  VAR_7 = ((struct cipherkeytoken *)VAR_3)->mkvp0;
  VAR_8 = VAR_0;
  break;
 default:
  return -VAR_1;
 }

 return FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6, VAR_8);
}
