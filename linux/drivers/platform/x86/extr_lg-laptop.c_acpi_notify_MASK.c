
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct key_entry {scalar_t__ type; } ;
struct acpi_device {int handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int VAR_2 ;
 struct key_entry* FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct key_entry*,int,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct acpi_device *VAR_4, u32 VAR_5)
{
 struct key_entry *VAR_6;

 FUNC_0(VAR_4->handle, "notify: %d\n", VAR_5);
 if (VAR_2 & VAR_0) {
  VAR_6 = FUNC_1(VAR_3, 0x80);
  if (VAR_6 && VAR_6->type == VAR_1)
   FUNC_2(VAR_3, VAR_6, 1, 1);
 }
}
