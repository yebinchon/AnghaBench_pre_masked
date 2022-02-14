
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_info {int ro_error; TYPE_1__* vfs_sb; scalar_t__ no_chk_data_crc; } ;
struct TYPE_2__ {int s_flags; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct ubifs_info*,char*,int) ;

void FUNC_2(struct ubifs_info *VAR_1, int VAR_2)
{
 if (!VAR_1->ro_error) {
  VAR_1->ro_error = 1;
  VAR_1->no_chk_data_crc = 0;
  VAR_1->vfs_sb->s_flags |= VAR_0;
  FUNC_1(VAR_1, "switched to read-only mode, error %d", VAR_2);
  FUNC_0();
 }
}
