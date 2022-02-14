
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ufs_hba {int dummy; } ;
typedef enum query_opcode { ____Placeholder_query_opcode } query_opcode ;
typedef enum desc_idn { ____Placeholder_desc_idn } desc_idn ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ufs_hba*,int,int,int ,int ,int *,int*) ;

int FUNC_1(struct ufs_hba *VAR_2,
      enum query_opcode VAR_3,
      enum desc_idn VAR_4, u8 VAR_5,
      u8 VAR_6,
      u8 *VAR_7, int *VAR_8)
{
 int VAR_9;
 int VAR_10;

 for (VAR_10 = VAR_1; VAR_10 > 0; VAR_10--) {
  VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8);
  if (!VAR_9 || VAR_9 == -VAR_0)
   break;
 }

 return VAR_9;
}
