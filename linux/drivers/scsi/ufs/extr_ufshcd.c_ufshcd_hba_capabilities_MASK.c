
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_hba {int capabilities; int nutrs; int nutmrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ufs_hba*,int ) ;

__attribute__((used)) static inline void FUNC_1(struct ufs_hba *VAR_3)
{
 VAR_3->capabilities = FUNC_0(VAR_3, VAR_2);


 VAR_3->nutrs = (VAR_3->capabilities & VAR_1) + 1;
 VAR_3->nutmrs =
 ((VAR_3->capabilities & VAR_0) >> 16) + 1;
}
