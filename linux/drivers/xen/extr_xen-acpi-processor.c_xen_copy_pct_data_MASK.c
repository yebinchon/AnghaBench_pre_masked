
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_pct_register {int address; int reserved; int bit_offset; int bit_width; int space_id; int length; int descriptor; } ;
struct acpi_pct_register {int address; int reserved; int bit_offset; int bit_width; int space_id; int length; int descriptor; } ;



__attribute__((used)) static int FUNC_0(struct acpi_pct_register *VAR_0,
        struct xen_pct_register *VAR_1)
{




 VAR_1->descriptor = VAR_0->descriptor;
 VAR_1->length = VAR_0->length;
 VAR_1->space_id = VAR_0->space_id;
 VAR_1->bit_width = VAR_0->bit_width;
 VAR_1->bit_offset = VAR_0->bit_offset;
 VAR_1->reserved = VAR_0->reserved;
 VAR_1->address = VAR_0->address;
 return 0;
}
