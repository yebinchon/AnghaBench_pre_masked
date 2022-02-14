
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufs_hba {int ufs_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





__attribute__((used)) static inline u32 FUNC_0(struct ufs_hba *VAR_3)
{
 u32 VAR_4 = 0;

 switch (VAR_3->ufs_version) {
 case 131:
  VAR_4 = VAR_0;
  break;
 case 130:
 case 129:
  VAR_4 = VAR_1;
  break;
 case 128:
 default:
  VAR_4 = VAR_2;
  break;
 }

 return VAR_4;
}
