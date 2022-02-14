
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct hclge_vport {int dummy; } ;
typedef int msg_data ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hclge_vport*,int *,int,int ,int ) ;
 int FUNC_1 (int *,int *,int) ;

int FUNC_2(struct hclge_vport *VAR_2, u8 VAR_3,
          u16 VAR_4, u16 VAR_5, u16 VAR_6,
          u16 VAR_7)
{


 u8 VAR_8[8];

 FUNC_1(&VAR_8[0], &VAR_4, sizeof(u16));
 FUNC_1(&VAR_8[2], &VAR_7, sizeof(u16));
 FUNC_1(&VAR_8[4], &VAR_6, sizeof(u16));
 FUNC_1(&VAR_8[6], &VAR_5, sizeof(u16));

 return FUNC_0(VAR_2, VAR_8, sizeof(VAR_8),
      VAR_0, VAR_3);
}
