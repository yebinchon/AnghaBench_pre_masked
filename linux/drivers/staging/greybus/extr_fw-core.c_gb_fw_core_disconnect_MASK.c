
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gb_fw_core {int download_connection; int spi_connection; int cap_connection; int mgmt_connection; } ;
struct gb_bundle {TYPE_1__* intf; } ;
struct TYPE_2__ {int quirks; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct gb_bundle*) ;
 int FUNC_6 (struct gb_bundle*) ;
 struct gb_fw_core* FUNC_7 (struct gb_bundle*) ;
 int FUNC_8 (struct gb_fw_core*) ;

__attribute__((used)) static void FUNC_9(struct gb_bundle *VAR_1)
{
 struct gb_fw_core *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;


 if (!(VAR_1->intf->quirks & VAR_0)) {
  VAR_3 = FUNC_6(VAR_1);
  if (VAR_3)
   FUNC_5(VAR_1);
 }

 FUNC_3(VAR_2->mgmt_connection);
 FUNC_0(VAR_2->cap_connection);
 FUNC_4(VAR_2->spi_connection);
 FUNC_2(VAR_2->download_connection);

 FUNC_1(VAR_2->mgmt_connection);
 FUNC_1(VAR_2->cap_connection);
 FUNC_1(VAR_2->spi_connection);
 FUNC_1(VAR_2->download_connection);

 FUNC_8(VAR_2);
}
