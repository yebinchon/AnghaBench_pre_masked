
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {scalar_t__ connection_state; int extcon_work; int forced_b_device; scalar_t__ extcon_host; int role_sw_by_connector; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct renesas_usb3*) ;
 int FUNC_2 (struct renesas_usb3*,int,int) ;

__attribute__((used)) static void FUNC_3(struct renesas_usb3 *VAR_1)
{
 VAR_1->extcon_host = FUNC_1(VAR_1);

 if ((!VAR_1->role_sw_by_connector && VAR_1->extcon_host &&
      !VAR_1->forced_b_device) || VAR_1->connection_state == VAR_0)
  FUNC_2(VAR_1, 1, 1);
 else
  FUNC_2(VAR_1, 0, 0);

 FUNC_0(&VAR_1->extcon_work);
}
