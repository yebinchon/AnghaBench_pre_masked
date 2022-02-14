
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_scan_leb {int dummy; } ;
struct ubifs_info {int orph_first; int orph_last; int leb_size; scalar_t__ no_orphs; } ;
struct check_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_scan_leb*) ;
 int VAR_1 ;
 int FUNC_1 (struct ubifs_scan_leb*) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct check_info*,struct ubifs_scan_leb*) ;
 int FUNC_4 (struct ubifs_info*,char*) ;
 struct ubifs_scan_leb* FUNC_5 (struct ubifs_info*,int,int ,void*,int ) ;
 int FUNC_6 (struct ubifs_scan_leb*) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static int FUNC_8(struct ubifs_info *VAR_2, struct check_info *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 void *VAR_6;


 if (VAR_2->no_orphs)
  return 0;

 VAR_6 = FUNC_2(VAR_2->leb_size, VAR_0, VAR_1);
 if (!VAR_6) {
  FUNC_4(VAR_2, "cannot allocate memory to check orphans");
  return 0;
 }

 for (VAR_4 = VAR_2->orph_first; VAR_4 <= VAR_2->orph_last; VAR_4++) {
  struct ubifs_scan_leb *VAR_7;

  VAR_7 = FUNC_5(VAR_2, VAR_4, 0, VAR_6, 0);
  if (FUNC_0(VAR_7)) {
   VAR_5 = FUNC_1(VAR_7);
   break;
  }

  VAR_5 = FUNC_3(VAR_3, VAR_7);
  FUNC_6(VAR_7);
  if (VAR_5)
   break;
 }

 FUNC_7(VAR_6);
 return VAR_5;
}
