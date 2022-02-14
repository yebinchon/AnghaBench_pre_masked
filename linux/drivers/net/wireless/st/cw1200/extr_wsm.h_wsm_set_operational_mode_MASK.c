
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
struct wsm_operational_mode {scalar_t__ perform_ant_diversity; scalar_t__ disable_more_flag_usage; int power_mode; } ;
struct cw1200_common {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct cw1200_common*,int ,int *,int) ;

__attribute__((used)) static inline int FUNC_2(struct cw1200_common *VAR_1,
     const struct wsm_operational_mode *VAR_2)
{
 u8 VAR_3 = VAR_2->power_mode;
 if (VAR_2->disable_more_flag_usage)
  VAR_3 |= FUNC_0(4);
 if (VAR_2->perform_ant_diversity)
  VAR_3 |= FUNC_0(5);
 return FUNC_1(VAR_1, VAR_0, &VAR_3,
        sizeof(VAR_3));
}
