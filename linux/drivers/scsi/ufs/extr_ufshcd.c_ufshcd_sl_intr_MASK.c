
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {int errors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ufs_hba*) ;
 scalar_t__ FUNC_1 (struct ufs_hba*,int) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*,int) ;

__attribute__((used)) static void FUNC_5(struct ufs_hba *VAR_5, u32 VAR_6)
{
 VAR_5->errors = VAR_0 & VAR_6;

 if (FUNC_1(VAR_5, VAR_6))
  VAR_5->errors |= (VAR_1 & VAR_6);

 if (VAR_5->errors)
  FUNC_0(VAR_5);

 if (VAR_6 & VAR_2)
  FUNC_4(VAR_5, VAR_6);

 if (VAR_6 & VAR_3)
  FUNC_2(VAR_5);

 if (VAR_6 & VAR_4)
  FUNC_3(VAR_5);
}
