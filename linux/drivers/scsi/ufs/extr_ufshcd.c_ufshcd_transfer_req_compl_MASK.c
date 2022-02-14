
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct ufs_hba {int quirks; unsigned long outstanding_reqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ufs_hba*,unsigned long) ;
 scalar_t__ FUNC_1 (struct ufs_hba*) ;
 unsigned long FUNC_2 (struct ufs_hba*,int ) ;
 int FUNC_3 (struct ufs_hba*) ;

__attribute__((used)) static void FUNC_4(struct ufs_hba *VAR_2)
{
 unsigned long VAR_3;
 u32 VAR_4;
 if (FUNC_1(VAR_2) &&
     !(VAR_2->quirks & VAR_1))
  FUNC_3(VAR_2);

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 VAR_3 = VAR_4 ^ VAR_2->outstanding_reqs;

 FUNC_0(VAR_2, VAR_3);
}
