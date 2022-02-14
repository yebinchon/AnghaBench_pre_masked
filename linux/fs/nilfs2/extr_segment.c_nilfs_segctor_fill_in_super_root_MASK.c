
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {unsigned int ns_inode_size; scalar_t__ ns_blocksize; int ns_sufile; int ns_cpfile; int ns_dat; int ns_nongc_ctime; } ;
struct nilfs_super_root {scalar_t__ sr_flags; int sr_nongc_ctime; int sr_bytes; } ;
struct nilfs_sc_info {int sc_seg_ctime; int sc_segbufs; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_2__ {struct buffer_head* sb_super_root; } ;


 TYPE_1__* FUNC_0 (int *) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ,void*,int) ;

__attribute__((used)) static void FUNC_10(struct nilfs_sc_info *VAR_0,
          struct the_nilfs *VAR_1)
{
 struct buffer_head *VAR_2;
 struct nilfs_super_root *VAR_3;
 unsigned int VAR_4, VAR_5;

 VAR_2 = FUNC_0(&VAR_0->sc_segbufs)->sb_super_root;
 VAR_3 = (struct nilfs_super_root *)VAR_2->b_data;
 VAR_4 = VAR_1->ns_inode_size;
 VAR_5 = FUNC_1(VAR_4);

 VAR_3->sr_bytes = FUNC_5(VAR_5);
 VAR_3->sr_nongc_ctime
  = FUNC_6(FUNC_8() ?
         VAR_1->ns_nongc_ctime : VAR_0->sc_seg_ctime);
 VAR_3->sr_flags = 0;

 FUNC_9(VAR_1->ns_dat, (void *)VAR_3 +
     FUNC_3(VAR_4), 1);
 FUNC_9(VAR_1->ns_cpfile, (void *)VAR_3 +
     FUNC_2(VAR_4), 1);
 FUNC_9(VAR_1->ns_sufile, (void *)VAR_3 +
     FUNC_4(VAR_4), 1);
 FUNC_7((void *)VAR_3 + VAR_5, 0, VAR_1->ns_blocksize - VAR_5);
}
