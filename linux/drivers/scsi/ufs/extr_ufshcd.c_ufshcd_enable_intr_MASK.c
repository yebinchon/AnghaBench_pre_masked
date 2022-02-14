
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {scalar_t__ ufs_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ufs_hba*,int ) ;
 int FUNC_1 (struct ufs_hba*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct ufs_hba *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_3, VAR_1);

 if (VAR_3->ufs_version == VAR_2) {
  u32 VAR_6;
  VAR_6 = VAR_5 & VAR_0;
  VAR_5 = VAR_6 | ((VAR_5 ^ VAR_4) & VAR_4);
 } else {
  VAR_5 |= VAR_4;
 }

 FUNC_1(VAR_3, VAR_5, VAR_1);
}
