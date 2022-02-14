
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct fc_rrq_s {int rx_id; int ox_id; int s_id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fchs_s*,int ,int ,int) ;
 int FUNC_2 (struct fc_rrq_s*,int *,int) ;
 int VAR_1 ;

u16
FUNC_3(struct fchs_s *VAR_2, struct fc_rrq_s *VAR_3, u32 VAR_4, u32 VAR_5,
      u16 VAR_6, u16 VAR_7)
{
 FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6);




 FUNC_2(VAR_3, &VAR_1, sizeof(struct fc_rrq_s));
 VAR_3->s_id = (VAR_5);
 VAR_3->ox_id = FUNC_0(VAR_7);
 VAR_3->rx_id = VAR_0;

 return sizeof(struct fc_rrq_s);
}
