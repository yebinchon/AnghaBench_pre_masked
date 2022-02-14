
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_device {int coproc_clock_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct octeon_device*,int ) ;
 int FUNC_2 (struct octeon_device*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct octeon_device *VAR_3)
{
 u64 VAR_4, VAR_5;

 VAR_4 = (u64)VAR_2 << 32;
 FUNC_0(VAR_4, VAR_3->coproc_clock_rate);
 FUNC_2(VAR_3, VAR_4, VAR_1);


 VAR_5 = FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_5 | 0x01, VAR_0);
}
