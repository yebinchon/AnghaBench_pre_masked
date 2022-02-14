
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ufs_hba {int dummy; } ;
typedef int ssize_t ;
typedef enum desc_idn { ____Placeholder_desc_idn } desc_idn ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*,char*,int) ;
 int FUNC_4 (struct ufs_hba*,int,int,int,int*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct ufs_hba *VAR_1,
      enum desc_idn VAR_2,
      u8 VAR_3,
      u8 VAR_4,
      u8 *VAR_5,
      u8 VAR_6)
{
 u8 VAR_7[8] = {0};
 int VAR_8;

 if (VAR_6 > 8)
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_3,
    VAR_4, VAR_7, VAR_6);
 if (VAR_8)
  return -VAR_0;
 switch (VAR_6) {
 case 1:
  VAR_8 = FUNC_3(VAR_5, "0x%02X\n", *VAR_7);
  break;
 case 2:
  VAR_8 = FUNC_3(VAR_5, "0x%04X\n",
   FUNC_0(VAR_7));
  break;
 case 4:
  VAR_8 = FUNC_3(VAR_5, "0x%08X\n",
   FUNC_1(VAR_7));
  break;
 case 8:
  VAR_8 = FUNC_3(VAR_5, "0x%016llX\n",
   FUNC_2(VAR_7));
  break;
 }

 return VAR_8;
}
