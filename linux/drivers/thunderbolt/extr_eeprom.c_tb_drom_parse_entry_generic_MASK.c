
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_switch {void* device_name; void* vendor_name; } ;
struct tb_drom_entry_header {int index; int len; } ;
struct tb_drom_entry_generic {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct tb_switch *VAR_2,
  struct tb_drom_entry_header *VAR_3)
{
 const struct tb_drom_entry_generic *VAR_4 =
  (const struct tb_drom_entry_generic *)VAR_3;

 switch (VAR_3->index) {
 case 1:

  VAR_2->vendor_name = FUNC_0(VAR_4->data,
   VAR_3->len - sizeof(*VAR_3), VAR_1);
  if (!VAR_2->vendor_name)
   return -VAR_0;
  break;

 case 2:
  VAR_2->device_name = FUNC_0(VAR_4->data,
   VAR_3->len - sizeof(*VAR_3), VAR_1);
  if (!VAR_2->device_name)
   return -VAR_0;
  break;
 }

 return 0;
}
