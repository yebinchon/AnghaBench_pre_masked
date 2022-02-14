
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ufs_hba {int dummy; } ;
typedef enum unit_desc_param { ____Placeholder_unit_desc_param } unit_desc_param ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ufs_hba*,int ,int,int,int *,int ) ;

__attribute__((used)) static inline int FUNC_2(struct ufs_hba *VAR_2,
           int VAR_3,
           enum unit_desc_param VAR_4,
           u8 *VAR_5,
           u32 VAR_6)
{




 if (!FUNC_0(VAR_3))
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_1, VAR_3,
          VAR_4, VAR_5, VAR_6);
}
