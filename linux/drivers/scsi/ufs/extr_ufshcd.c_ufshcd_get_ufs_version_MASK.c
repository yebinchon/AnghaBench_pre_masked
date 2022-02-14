
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ufs_hba*,int ) ;
 int FUNC_1 (struct ufs_hba*) ;

__attribute__((used)) static inline u32 FUNC_2(struct ufs_hba *VAR_2)
{
 if (VAR_2->quirks & VAR_1)
  return FUNC_1(VAR_2);

 return FUNC_0(VAR_2, VAR_0);
}
