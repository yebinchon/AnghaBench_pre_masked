
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct qtree_mem_dqinfo {int dqi_sb; int dqi_type; scalar_t__ dqi_free_entry; int dqi_usable_bs; } ;
struct qt_disk_dqdbheader {int dqdh_prev_free; int dqdh_next_free; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int FUNC_6 (struct qtree_mem_dqinfo*,scalar_t__,char*) ;
 int FUNC_7 (struct qtree_mem_dqinfo*,scalar_t__,char*) ;

__attribute__((used)) static int FUNC_8(struct qtree_mem_dqinfo *VAR_1, char *VAR_2,
          uint VAR_3)
{
 char *VAR_4 = FUNC_1(VAR_1->dqi_usable_bs);
 struct qt_disk_dqdbheader *VAR_5 = (struct qt_disk_dqdbheader *)VAR_2;
 uint VAR_6 = FUNC_3(VAR_5->dqdh_next_free);
 uint VAR_7 = FUNC_3(VAR_5->dqdh_prev_free);
 int VAR_8;

 if (!VAR_4)
  return -VAR_0;
 if (VAR_6) {
  VAR_8 = FUNC_6(VAR_1, VAR_6, VAR_4);
  if (VAR_8 < 0)
   goto out_buf;
  ((struct qt_disk_dqdbheader *)VAR_4)->dqdh_prev_free =
       VAR_5->dqdh_prev_free;
  VAR_8 = FUNC_7(VAR_1, VAR_6, VAR_4);
  if (VAR_8 < 0)
   goto out_buf;
 }
 if (VAR_7) {
  VAR_8 = FUNC_6(VAR_1, VAR_7, VAR_4);
  if (VAR_8 < 0)
   goto out_buf;
  ((struct qt_disk_dqdbheader *)VAR_4)->dqdh_next_free =
       VAR_5->dqdh_next_free;
  VAR_8 = FUNC_7(VAR_1, VAR_7, VAR_4);
  if (VAR_8 < 0)
   goto out_buf;
 } else {
  VAR_1->dqi_free_entry = VAR_6;
  FUNC_4(VAR_1->dqi_sb, VAR_1->dqi_type);
 }
 FUNC_2(VAR_4);
 VAR_5->dqdh_next_free = VAR_5->dqdh_prev_free = FUNC_0(0);

 if (FUNC_7(VAR_1, VAR_3, VAR_2) < 0)
  FUNC_5(VAR_1->dqi_sb, "Can't write block (%u) "
       "with free entries", VAR_3);
 return 0;
out_buf:
 FUNC_2(VAR_4);
 return VAR_8;
}
