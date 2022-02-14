
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int file; } ;
struct mac_entry {char* addr; } ;
struct TYPE_2__ {int policy; char* entries; } ;
struct ap_data {TYPE_1__ mac_restrictions; } ;





 struct ap_data* FUNC_0 (int ) ;
 void* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct seq_file*,char*,char*) ;
 int FUNC_3 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct ap_data *VAR_3 = FUNC_0(FUNC_1(VAR_1->file));
 char *VAR_4;
 struct mac_entry *VAR_5;

 if (VAR_2 == VAR_0) {
  switch (VAR_3->mac_restrictions.policy) {
  case 128:
   VAR_4 = "open";
   break;
  case 130:
   VAR_4 = "allow";
   break;
  case 129:
   VAR_4 = "deny";
   break;
  default:
   VAR_4 = "unknown";
   break;
  }
  FUNC_2(VAR_1, "MAC policy: %s\n", VAR_4);
  FUNC_2(VAR_1, "MAC entries: %u\n", VAR_3->mac_restrictions.entries);
  FUNC_3(VAR_1, "MAC list:\n");
  return 0;
 }

 VAR_5 = VAR_2;
 FUNC_2(VAR_1, "%pM\n", VAR_5->addr);
 return 0;
}
