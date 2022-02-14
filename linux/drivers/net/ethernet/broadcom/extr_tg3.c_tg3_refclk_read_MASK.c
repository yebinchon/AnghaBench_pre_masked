
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct tg3 {int dummy; } ;
struct ptp_system_timestamp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ptp_system_timestamp*) ;
 int FUNC_1 (struct ptp_system_timestamp*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static u64 FUNC_3(struct tg3 *VAR_2, struct ptp_system_timestamp *VAR_3)
{
 u64 VAR_4;

 FUNC_1(VAR_3);
 VAR_4 = FUNC_2(VAR_0);
 FUNC_0(VAR_3);
 VAR_4 |= (u64)FUNC_2(VAR_1) << 32;

 return VAR_4;
}
