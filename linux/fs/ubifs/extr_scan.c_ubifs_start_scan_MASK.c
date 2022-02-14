
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_scan_leb {int lnum; void* buf; int nodes; } ;
struct ubifs_info {scalar_t__ leb_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ubifs_scan_leb* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct ubifs_scan_leb*) ;
 struct ubifs_scan_leb* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ubifs_info const*,char*,scalar_t__,int,int,int) ;
 int FUNC_6 (struct ubifs_info const*,int,void*,int,scalar_t__,int ) ;

struct ubifs_scan_leb *FUNC_7(const struct ubifs_info *VAR_3, int VAR_4,
     int VAR_5, void *VAR_6)
{
 struct ubifs_scan_leb *VAR_7;
 int VAR_8;

 FUNC_2("scan LEB %d:%d", VAR_4, VAR_5);

 VAR_7 = FUNC_4(sizeof(struct ubifs_scan_leb), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 VAR_7->lnum = VAR_4;
 FUNC_1(&VAR_7->nodes);
 VAR_7->buf = VAR_6;

 VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_6 + VAR_5, VAR_5, VAR_3->leb_size - VAR_5, 0);
 if (VAR_8 && VAR_8 != -VAR_0) {
  FUNC_5(VAR_3, "cannot read %d bytes from LEB %d:%d, error %d",
     VAR_3->leb_size - VAR_5, VAR_4, VAR_5, VAR_8);
  FUNC_3(VAR_7);
  return FUNC_0(VAR_8);
 }





 return VAR_7;
}
