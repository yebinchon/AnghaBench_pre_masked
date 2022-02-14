
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tb_switch {scalar_t__ drom; } ;
struct tb_drom_header {scalar_t__ data_len; } ;
struct tb_drom_entry_header {scalar_t__ len; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;


 int FUNC_0 (struct tb_switch*,struct tb_drom_entry_header*) ;
 int FUNC_1 (struct tb_switch*,struct tb_drom_entry_header*) ;
 int FUNC_2 (struct tb_switch*,char*) ;

__attribute__((used)) static int FUNC_3(struct tb_switch *VAR_2)
{
 struct tb_drom_header *VAR_3 = (void *) VAR_2->drom;
 u16 VAR_4 = sizeof(*VAR_3);
 u16 VAR_5 = VAR_3->data_len + VAR_1;
 int VAR_6;

 while (VAR_4 < VAR_5) {
  struct tb_drom_entry_header *VAR_7 = (void *) (VAR_2->drom + VAR_4);
  if (VAR_4 + 1 == VAR_5 || VAR_4 + VAR_7->len > VAR_5
    || !VAR_7->len) {
   FUNC_2(VAR_2, "drom buffer overrun, aborting\n");
   return -VAR_0;
  }

  switch (VAR_7->type) {
  case 129:
   VAR_6 = FUNC_0(VAR_2, VAR_7);
   break;
  case 128:
   VAR_6 = FUNC_1(VAR_2, VAR_7);
   break;
  }
  if (VAR_6)
   return VAR_6;

  VAR_4 += VAR_7->len;
 }
 return 0;
}
