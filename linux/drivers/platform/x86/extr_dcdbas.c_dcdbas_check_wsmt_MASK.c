
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct smm_eps_table {int num_of_4k_pages; scalar_t__ smm_comm_buff_addr; } ;
struct acpi_table_wsmt {int protection_flags; } ;
struct acpi_table_header {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,struct acpi_table_header**) ;
 struct smm_eps_table* FUNC_2 (int *) ;
 TYPE_1__* VAR_9 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (scalar_t__,int,int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_8(void)
{
 struct acpi_table_wsmt *VAR_16 = ((void*)0);
 struct smm_eps_table *VAR_17 = ((void*)0);
 u64 VAR_18;
 u8 *VAR_19;

 FUNC_1(VAR_0, 0, (struct acpi_table_header **)&VAR_16);
 if (!VAR_16)
  return 0;


 if (!(VAR_16->protection_flags & VAR_2) ||
     !(VAR_16->protection_flags & VAR_1))
  return 0;


 for (VAR_19 = (u8 *)FUNC_0(0xf0000);
      VAR_19 < (u8 *)FUNC_0(0x100000 - sizeof(struct smm_eps_table));
      VAR_19 += 16) {
  VAR_17 = FUNC_2(VAR_19);
  if (VAR_17)
   break;
 }

 if (!VAR_17) {
  FUNC_3(&VAR_9->dev, "found WSMT, but no EPS found\n");
  return -VAR_4;
 }





 if (FUNC_7(VAR_17->smm_comm_buff_addr + 8)) {
  FUNC_5(&VAR_9->dev, "found WSMT, but EPS buffer address is above 4GB\n");
  return -VAR_3;
 }




 VAR_18 = VAR_17->num_of_4k_pages * VAR_8;
 if (VAR_18 > VAR_6 + 8)
  VAR_18 = VAR_6 + 8;
 VAR_10 = FUNC_6(VAR_17->smm_comm_buff_addr, VAR_18, VAR_7);
 if (!VAR_10) {
  FUNC_5(&VAR_9->dev, "found WSMT, but failed to map EPS buffer\n");
  return -VAR_5;
 }


 VAR_13 = VAR_17->smm_comm_buff_addr + 8;
 VAR_12 = VAR_10 + 8;
 VAR_14 = VAR_18 - 8;
 VAR_11 = VAR_14;
 VAR_15 = 1;
 FUNC_4(&VAR_9->dev,
   "WSMT found, using firmware-provided SMI buffer.\n");
 return 1;
}
