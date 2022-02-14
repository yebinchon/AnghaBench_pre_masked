
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufshcd_dme_attr_val {int member_1; int member_2; int member_0; } ;
struct ufs_hba {int dummy; } ;


 int FUNC_0 (struct ufshcd_dme_attr_val const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ufs_hba*,struct ufshcd_dme_attr_val const*,int ) ;

__attribute__((used)) static int FUNC_3(struct ufs_hba *VAR_10)
{
 const struct ufshcd_dme_attr_val VAR_11[] = {
  { FUNC_1(VAR_4), 0, VAR_0 },
  { FUNC_1(VAR_2), 0, VAR_0 },
  { FUNC_1(VAR_3), 0, VAR_0 },
  { FUNC_1(VAR_8), 1, VAR_0 },
  { FUNC_1(VAR_7), 0, VAR_0 },
  { FUNC_1(VAR_9), 0, VAR_0 },
  { FUNC_1(VAR_5), 0x6, VAR_0 },
  { FUNC_1(VAR_6), 1, VAR_0 },
  { FUNC_1(VAR_4), 1, VAR_0 },
  { FUNC_1(VAR_4), 0, VAR_1 },
  { FUNC_1(VAR_2), 1, VAR_1 },
  { FUNC_1(VAR_3), 1, VAR_1 },
  { FUNC_1(VAR_8), 1, VAR_1 },
  { FUNC_1(VAR_7), 0, VAR_1 },
  { FUNC_1(VAR_9), 0, VAR_1 },
  { FUNC_1(VAR_5), 0x6, VAR_1 },
  { FUNC_1(VAR_6), 1, VAR_1 },
  { FUNC_1(VAR_4), 1, VAR_1 }
 };

 return FUNC_2(VAR_10, VAR_11, FUNC_0(VAR_11));
}
