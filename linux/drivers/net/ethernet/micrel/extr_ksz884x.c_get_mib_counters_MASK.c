
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ksz_port_mib {int mib_start; scalar_t__* counter; } ;
struct ksz_hw {int mib_cnt; struct ksz_port_mib* port_mib; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ksz_hw *VAR_1, int VAR_2, int VAR_3,
 u64 *VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 struct ksz_port_mib *VAR_8;

 FUNC_0(VAR_4, 0, sizeof(u64) * VAR_0);
 for (VAR_5 = 0, VAR_7 = VAR_2; VAR_5 < VAR_3; VAR_5++, VAR_7++) {
  VAR_8 = &VAR_1->port_mib[VAR_7];
  for (VAR_6 = VAR_8->mib_start; VAR_6 < VAR_1->mib_cnt; VAR_6++)
   VAR_4[VAR_6] += VAR_8->counter[VAR_6];
 }
}
