
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bi_vblocknr; } ;
union nilfs_binfo {TYPE_1__ bi_v; } ;
struct nilfs_segsum_pointer {int dummy; } ;
struct nilfs_sc_info {int dummy; } ;
typedef int __le64 ;


 int * FUNC_0 (struct nilfs_sc_info*,struct nilfs_segsum_pointer*,int) ;

__attribute__((used)) static void FUNC_1(struct nilfs_sc_info *VAR_0,
     struct nilfs_segsum_pointer *VAR_1,
     union nilfs_binfo *VAR_2)
{
 __le64 *VAR_3 = FUNC_0(
  VAR_0, VAR_1, sizeof(*VAR_3));
 *VAR_3 = VAR_2->bi_v.bi_vblocknr;
}
