
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ufs_hba*,int,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ufs_hba *VAR_2, u32 VAR_3)
{
 if (VAR_2->quirks & VAR_1)
  FUNC_0(VAR_2, (1 << VAR_3), VAR_0);
 else
  FUNC_0(VAR_2, ~(1 << VAR_3), VAR_0);
}
