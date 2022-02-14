
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct pathComponent {int componentType; int lengthComponentIdent; int componentIdent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char*,char*,int) ;
 int FUNC_1 (struct super_block*,int ,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_2, unsigned char *VAR_3,
     int VAR_4, unsigned char *VAR_5, int VAR_6)
{
 struct pathComponent *VAR_7;
 int VAR_8 = 0;
 int VAR_9;
 unsigned char *VAR_10 = VAR_5;


 VAR_6--;
 while (VAR_8 < VAR_4) {
  VAR_7 = (struct pathComponent *)(VAR_3 + VAR_8);
  VAR_8 += sizeof(struct pathComponent);
  switch (VAR_7->componentType) {
  case 1:




   if (VAR_7->lengthComponentIdent > 0) {
    VAR_8 += VAR_7->lengthComponentIdent;
    break;
   }

  case 2:
   if (VAR_6 == 0)
    return -VAR_1;
   VAR_10 = VAR_5;
   *VAR_10++ = '/';
   VAR_6--;
   break;
  case 3:
   if (VAR_6 < 3)
    return -VAR_1;
   FUNC_0(VAR_10, "../", 3);
   VAR_10 += 3;
   VAR_6 -= 3;
   break;
  case 4:
   if (VAR_6 < 2)
    return -VAR_1;
   FUNC_0(VAR_10, "./", 2);
   VAR_10 += 2;
   VAR_6 -= 2;

   break;
  case 5:
   VAR_8 += VAR_7->lengthComponentIdent;
   if (VAR_8 > VAR_4)
    return -VAR_0;
   VAR_9 = FUNC_1(VAR_2, VAR_7->componentIdent,
          VAR_7->lengthComponentIdent,
          VAR_10, VAR_6);
   if (VAR_9 < 0)
    return VAR_9;

   VAR_10 += VAR_9;
   VAR_6 -= VAR_9;
   if (VAR_6 == 0)
    return -VAR_1;
   *VAR_10++ = '/';
   VAR_6--;
   break;
  }
 }
 if (VAR_10 > VAR_5 + 1)
  VAR_10[-1] = '\0';
 else
  VAR_10[0] = '\0';
 return 0;
}
