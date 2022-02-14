
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct ispif_device {scalar_t__ base; TYPE_1__* intf_cmd; } ;
typedef enum ispif_intf { ____Placeholder_ispif_intf } ispif_intf ;
struct TYPE_2__ {int cmd_1; int cmd_0; } ;


 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (size_t) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ispif_device *VAR_1, u8 VAR_2,
          enum ispif_intf VAR_3, u8 VAR_4, u8 VAR_5)
{
 u32 *VAR_6;

 if (VAR_3 == VAR_0) {
  VAR_6 = &VAR_1->intf_cmd[VAR_4].cmd_1;
  *VAR_6 &= ~(0x3 << (VAR_5 * 2 + 8));
  *VAR_6 |= (VAR_2 << (VAR_5 * 2 + 8));
  FUNC_2();
  FUNC_3(*VAR_6, VAR_1->base + FUNC_1(VAR_4));
  FUNC_2();
 } else {
  VAR_6 = &VAR_1->intf_cmd[VAR_4].cmd_0;
  *VAR_6 &= ~(0x3 << (VAR_5 * 2 + VAR_3 * 8));
  *VAR_6 |= (VAR_2 << (VAR_5 * 2 + VAR_3 * 8));
  FUNC_2();
  FUNC_3(*VAR_6, VAR_1->base + FUNC_0(VAR_4));
  FUNC_2();
 }
}
