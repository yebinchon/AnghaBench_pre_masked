
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct the_nilfs {int ns_flushed_device; int ns_sbsize; int ns_crc_seed; int ns_sbwtime; struct nilfs_super_block** ns_sbp; } ;
struct super_block {struct the_nilfs* s_fs_info; } ;
struct nilfs_super_block {void* s_sum; int s_wtime; } ;


 int VAR_0 ;
 int FUNC_0 (struct the_nilfs*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned char*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct super_block*,int) ;
 int FUNC_6 () ;

int FUNC_7(struct super_block *VAR_1, int VAR_2)
{
 struct the_nilfs *VAR_3 = VAR_1->s_fs_info;
 struct nilfs_super_block **VAR_4 = VAR_3->ns_sbp;
 time64_t VAR_5;


 VAR_5 = FUNC_4();
 VAR_3->ns_sbwtime = VAR_5;
 VAR_4[0]->s_wtime = FUNC_2(VAR_5);
 VAR_4[0]->s_sum = 0;
 VAR_4[0]->s_sum = FUNC_1(FUNC_3(VAR_3->ns_crc_seed,
          (unsigned char *)VAR_4[0],
          VAR_3->ns_sbsize));
 if (VAR_2 == VAR_0 && VAR_4[1]) {
  VAR_4[1]->s_wtime = VAR_4[0]->s_wtime;
  VAR_4[1]->s_sum = 0;
  VAR_4[1]->s_sum = FUNC_1(FUNC_3(VAR_3->ns_crc_seed,
         (unsigned char *)VAR_4[1],
         VAR_3->ns_sbsize));
 }
 FUNC_0(VAR_3);
 VAR_3->ns_flushed_device = 1;

 FUNC_6();
 return FUNC_5(VAR_1, VAR_2);
}
