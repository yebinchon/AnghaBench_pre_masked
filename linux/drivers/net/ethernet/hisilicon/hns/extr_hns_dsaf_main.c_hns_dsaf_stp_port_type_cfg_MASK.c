
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_device {int dummy; } ;
typedef enum dsaf_stp_port_type { ____Placeholder_dsaf_stp_port_type } dsaf_stp_port_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dsaf_device*,scalar_t__,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct dsaf_device *VAR_4,
           enum dsaf_stp_port_type VAR_5)
{
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  FUNC_0(VAR_4,
       VAR_1 + 0x0004 * VAR_6,
       VAR_2, VAR_3,
       VAR_5);
 }
}
