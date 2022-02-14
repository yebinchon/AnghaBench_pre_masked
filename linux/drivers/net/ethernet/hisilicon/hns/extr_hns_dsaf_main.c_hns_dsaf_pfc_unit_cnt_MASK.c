
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct dsaf_device {int dummy; } ;
typedef enum dsaf_port_rate_mode { ____Placeholder_dsaf_port_rate_mode } dsaf_port_rate_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dsaf_device*,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct dsaf_device *VAR_5, int VAR_6,
      enum dsaf_port_rate_mode VAR_7)
{
 u32 VAR_8;

 switch (VAR_7) {
 case 129:
  VAR_8 = VAR_4;
  break;
 case 130:
  VAR_8 = VAR_3;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 default:
  VAR_8 = VAR_4;
 }

 FUNC_0(VAR_5,
      (VAR_2 + 0x4 * (u64)VAR_6),
      VAR_0, VAR_1,
      VAR_8);
}
