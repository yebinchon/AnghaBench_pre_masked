
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
struct qtree_mem_dqinfo {int dqi_type; int dqi_sb; scalar_t__ dqi_free_entry; int dqi_usable_bs; } ;
struct qt_disk_dqdbheader {void* dqdh_prev_free; void* dqdh_next_free; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct qtree_mem_dqinfo*,scalar_t__,char*) ;
 int FUNC_5 (struct qtree_mem_dqinfo*,scalar_t__,char*) ;

__attribute__((used)) static int FUNC_6(struct qtree_mem_dqinfo *VAR_1, char *VAR_2,
          uint VAR_3)
{
 char *VAR_4 = FUNC_1(VAR_1->dqi_usable_bs);
 struct qt_disk_dqdbheader *VAR_5 = (struct qt_disk_dqdbheader *)VAR_2;
 int VAR_6;

 if (!VAR_4)
  return -VAR_0;
 VAR_5->dqdh_next_free = FUNC_0(VAR_1->dqi_free_entry);
 VAR_5->dqdh_prev_free = FUNC_0(0);
 VAR_6 = FUNC_5(VAR_1, VAR_3, VAR_2);
 if (VAR_6 < 0)
  goto out_buf;
 if (VAR_1->dqi_free_entry) {
  VAR_6 = FUNC_4(VAR_1, VAR_1->dqi_free_entry, VAR_4);
  if (VAR_6 < 0)
   goto out_buf;
  ((struct qt_disk_dqdbheader *)VAR_4)->dqdh_prev_free =
       FUNC_0(VAR_3);
  VAR_6 = FUNC_5(VAR_1, VAR_1->dqi_free_entry, VAR_4);
  if (VAR_6 < 0)
   goto out_buf;
 }
 FUNC_2(VAR_4);
 VAR_1->dqi_free_entry = VAR_3;
 FUNC_3(VAR_1->dqi_sb, VAR_1->dqi_type);
 return 0;
out_buf:
 FUNC_2(VAR_4);
 return VAR_6;
}
