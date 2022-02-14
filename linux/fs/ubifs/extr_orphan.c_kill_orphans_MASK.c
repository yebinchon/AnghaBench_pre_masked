
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_scan_leb {scalar_t__ endpt; } ;
struct ubifs_info {int ohead_lnum; int orph_first; int orph_last; scalar_t__ ohead_offs; int sbuf; scalar_t__ no_orphs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_scan_leb*) ;
 int FUNC_1 (struct ubifs_scan_leb*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct ubifs_info*,struct ubifs_scan_leb*,unsigned long long*,int*,int*) ;
 struct ubifs_scan_leb* FUNC_4 (struct ubifs_info*,int,int ,int ,int) ;
 struct ubifs_scan_leb* FUNC_5 (struct ubifs_info*,int,int ,int ,int) ;
 int FUNC_6 (struct ubifs_scan_leb*) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_1)
{
 unsigned long long VAR_2 = 0;
 int VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;

 VAR_1->ohead_lnum = VAR_1->orph_first;
 VAR_1->ohead_offs = 0;

 if (VAR_1->no_orphs) {
  FUNC_2("no orphans");
  return 0;
 }
 for (VAR_3 = VAR_1->orph_first; VAR_3 <= VAR_1->orph_last; VAR_3++) {
  struct ubifs_scan_leb *VAR_7;

  FUNC_2("LEB %d", VAR_3);
  VAR_7 = FUNC_5(VAR_1, VAR_3, 0, VAR_1->sbuf, 1);
  if (FUNC_0(VAR_7)) {
   if (FUNC_1(VAR_7) == -VAR_0)
    VAR_7 = FUNC_4(VAR_1, VAR_3, 0,
        VAR_1->sbuf, -1);
   if (FUNC_0(VAR_7)) {
    VAR_4 = FUNC_1(VAR_7);
    break;
   }
  }
  VAR_4 = FUNC_3(VAR_1, VAR_7, &VAR_2, &VAR_5,
          &VAR_6);
  if (VAR_4 || VAR_5) {
   FUNC_6(VAR_7);
   break;
  }
  if (VAR_7->endpt) {
   VAR_1->ohead_lnum = VAR_3;
   VAR_1->ohead_offs = VAR_7->endpt;
  }
  FUNC_6(VAR_7);
 }
 return VAR_4;
}
