
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_blocks_per_segment; int ns_dat; int ns_sufile; } ;
typedef int sector_t ;
struct TYPE_2__ {int mi_sem; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct the_nilfs *VAR_0, sector_t *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&FUNC_0(VAR_0->ns_dat)->mi_sem);
 VAR_2 = FUNC_2(VAR_0->ns_sufile);
 FUNC_3(&FUNC_0(VAR_0->ns_dat)->mi_sem);
 *VAR_1 = (sector_t)VAR_2 * VAR_0->ns_blocks_per_segment;
 return 0;
}
