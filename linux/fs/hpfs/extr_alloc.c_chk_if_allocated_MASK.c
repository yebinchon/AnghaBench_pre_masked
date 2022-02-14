
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
typedef int secno ;
typedef int __le32 ;
struct TYPE_2__ {int sb_dirband_start; int sb_dirband_size; } ;


 int FUNC_0 (struct quad_buffer_head*) ;
 int FUNC_1 (struct super_block*,char*,char*,int) ;
 int * FUNC_2 (struct super_block*,int,struct quad_buffer_head*,char*) ;
 int * FUNC_3 (struct super_block*,struct quad_buffer_head*) ;
 TYPE_1__* FUNC_4 (struct super_block*) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct super_block *VAR_0, secno VAR_1, char *VAR_2)
{
 struct quad_buffer_head VAR_3;
 __le32 *VAR_4;
 if (!(VAR_4 = FUNC_2(VAR_0, VAR_1 >> 14, &VAR_3, "chk"))) goto fail;
 if ((FUNC_5(VAR_4[(VAR_1 & 0x3fff) >> 5]) >> (VAR_1 & 0x1f)) & 1) {
  FUNC_1(VAR_0, "sector '%s' - %08x not allocated in bitmap", VAR_2, VAR_1);
  goto fail1;
 }
 FUNC_0(&VAR_3);
 if (VAR_1 >= FUNC_4(VAR_0)->sb_dirband_start && VAR_1 < FUNC_4(VAR_0)->sb_dirband_start + FUNC_4(VAR_0)->sb_dirband_size) {
  unsigned VAR_5 = (VAR_1 - FUNC_4(VAR_0)->sb_dirband_start) / 4;
  if (!(VAR_4 = FUNC_3(VAR_0, &VAR_3))) goto fail;
  if ((FUNC_5(VAR_4[VAR_5 >> 5]) >> (VAR_5 & 0x1f)) & 1) {
   FUNC_1(VAR_0, "sector '%s' - %08x not allocated in directory bitmap", VAR_2, VAR_1);
   goto fail1;
  }
  FUNC_0(&VAR_3);
 }
 return 0;
 fail1:
 FUNC_0(&VAR_3);
 fail:
 return 1;
}
