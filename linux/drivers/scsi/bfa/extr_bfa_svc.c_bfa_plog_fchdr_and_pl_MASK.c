
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct bfa_plog_s {scalar_t__ plog_enabled; } ;
struct bfa_plog_rec_s {int dummy; } ;
typedef enum bfa_plog_mid { ____Placeholder_bfa_plog_mid } bfa_plog_mid ;
typedef enum bfa_plog_eid { ____Placeholder_bfa_plog_eid } bfa_plog_eid ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_plog_s*,int,int,int ,int *,int) ;
 int FUNC_1 (struct bfa_plog_rec_s*,int ,int) ;

void
FUNC_2(struct bfa_plog_s *VAR_1, enum bfa_plog_mid VAR_2,
        enum bfa_plog_eid VAR_3, u16 VAR_4, struct fchs_s *VAR_5,
        u32 VAR_6)
{
 struct bfa_plog_rec_s VAR_7;
 u32 *VAR_8 = (u32 *) VAR_5;
 u32 VAR_9[VAR_0];

 if (VAR_1->plog_enabled) {
  FUNC_1(&VAR_7, 0, sizeof(struct bfa_plog_rec_s));

  VAR_9[0] = VAR_8[0];
  VAR_9[1] = VAR_8[1];
  VAR_9[2] = VAR_8[4];
  VAR_9[3] = VAR_6;

  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_9, 4);
 }
}
