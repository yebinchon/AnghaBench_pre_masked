
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct dsaf_device {int dummy; } ;
typedef enum dsaf_port_rate_mode { ____Placeholder_dsaf_port_rate_mode } dsaf_port_rate_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dsaf_device*,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct dsaf_device*,scalar_t__,int ) ;
 int FUNC_3 (struct dsaf_device*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct dsaf_device *VAR_3, int VAR_4,
       enum dsaf_port_rate_mode VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(
  VAR_3, VAR_1 + 0x4 * (u64)VAR_4);

 if (VAR_5 == VAR_0)
  FUNC_1(VAR_6, VAR_2, 1);
 else
  FUNC_1(VAR_6, VAR_2, 0);

 FUNC_2(VAR_3,
         VAR_1 + 0x4 * (u64)VAR_4,
         VAR_6);

 FUNC_3(VAR_3, VAR_4, VAR_5);
}
