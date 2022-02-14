
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_scan_leb {int endpt; } ;
struct ubifs_info {int min_io_size; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct ubifs_info const*,int) ;

void FUNC_3(const struct ubifs_info *VAR_0, struct ubifs_scan_leb *VAR_1,
      int VAR_2, int VAR_3)
{
 FUNC_1("stop scanning LEB %d at offset %d", VAR_2, VAR_3);
 FUNC_2(VAR_0, VAR_3 % VAR_0->min_io_size == 0);

 VAR_1->endpt = FUNC_0(VAR_3, VAR_0->min_io_size);
}
