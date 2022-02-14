
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bfa_qos_stats_s {int dummy; } ;
typedef int __be32 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bfa_qos_stats_s *VAR_0,
 struct bfa_qos_stats_s *VAR_1)
{
 u32 *VAR_2 = (u32 *) VAR_0;
 __be32 *VAR_3 = (__be32 *) VAR_1;
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < (sizeof(struct bfa_qos_stats_s)/sizeof(u32)); ++VAR_4)
  VAR_2[VAR_4] = FUNC_0(VAR_3[VAR_4]);
}
