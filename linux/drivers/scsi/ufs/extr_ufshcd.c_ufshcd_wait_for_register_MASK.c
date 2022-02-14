
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct ufs_hba*,int) ;
 int FUNC_4 (unsigned long,unsigned long) ;

int FUNC_5(struct ufs_hba *VAR_2, u32 VAR_3, u32 VAR_4,
    u32 VAR_5, unsigned long VAR_6,
    unsigned long VAR_7, bool VAR_8)
{
 int VAR_9 = 0;
 unsigned long VAR_10 = VAR_1 + FUNC_0(VAR_7);


 VAR_5 = VAR_5 & VAR_4;

 while ((FUNC_3(VAR_2, VAR_3) & VAR_4) != VAR_5) {
  if (VAR_8)
   FUNC_4(VAR_6, VAR_6 + 50);
  else
   FUNC_2(VAR_6);
  if (FUNC_1(VAR_1, VAR_10)) {
   if ((FUNC_3(VAR_2, VAR_3) & VAR_4) != VAR_5)
    VAR_9 = -VAR_0;
   break;
  }
 }

 return VAR_9;
}
