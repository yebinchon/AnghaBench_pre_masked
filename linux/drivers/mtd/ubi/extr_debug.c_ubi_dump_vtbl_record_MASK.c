
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_vtbl_record {char* name; int crc; scalar_t__ upd_marker; scalar_t__ vol_type; int data_pad; int alignment; int reserved_pebs; int name_len; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int) ;

void FUNC_4(const struct ubi_vtbl_record *VAR_1, int VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1->name_len);

 FUNC_2("Volume table record %d dump:\n", VAR_2);
 FUNC_2("\treserved_pebs   %d\n", FUNC_1(VAR_1->reserved_pebs));
 FUNC_2("\talignment       %d\n", FUNC_1(VAR_1->alignment));
 FUNC_2("\tdata_pad        %d\n", FUNC_1(VAR_1->data_pad));
 FUNC_2("\tvol_type        %d\n", (int)VAR_1->vol_type);
 FUNC_2("\tupd_marker      %d\n", (int)VAR_1->upd_marker);
 FUNC_2("\tname_len        %d\n", VAR_3);

 if (VAR_1->name[0] == '\0') {
  FUNC_2("\tname            NULL\n");
  return;
 }

 if (VAR_3 <= VAR_0 &&
     FUNC_3(&VAR_1->name[0], VAR_3 + 1) == VAR_3) {
  FUNC_2("\tname            %s\n", &VAR_1->name[0]);
 } else {
  FUNC_2("\t1st 5 characters of name: %c%c%c%c%c\n",
   VAR_1->name[0], VAR_1->name[1], VAR_1->name[2], VAR_1->name[3],
   VAR_1->name[4]);
 }
 FUNC_2("\tcrc             %#08x\n", FUNC_1(VAR_1->crc));
}
