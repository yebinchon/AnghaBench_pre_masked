
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
struct qtree_mem_dqinfo {int dqi_type; int dqi_sb; int dqi_free_blk; } ;
struct qt_disk_dqdbheader {int dqdh_entries; void* dqdh_prev_free; void* dqdh_next_free; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct qtree_mem_dqinfo*,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct qtree_mem_dqinfo *VAR_0, char *VAR_1, uint VAR_2)
{
 struct qt_disk_dqdbheader *VAR_3 = (struct qt_disk_dqdbheader *)VAR_1;
 int VAR_4;

 VAR_3->dqdh_next_free = FUNC_1(VAR_0->dqi_free_blk);
 VAR_3->dqdh_prev_free = FUNC_1(0);
 VAR_3->dqdh_entries = FUNC_0(0);
 VAR_4 = FUNC_3(VAR_0, VAR_2, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_0->dqi_free_blk = VAR_2;
 FUNC_2(VAR_0->dqi_sb, VAR_0->dqi_type);
 return 0;
}
