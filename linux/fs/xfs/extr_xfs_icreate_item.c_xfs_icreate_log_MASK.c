
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int xfs_agnumber_t ;
typedef unsigned int xfs_agblock_t ;
struct xfs_trans {int t_flags; int t_mountp; } ;
struct TYPE_5__ {int li_flags; } ;
struct TYPE_4__ {int icl_size; void* icl_gen; void* icl_length; void* icl_isize; void* icl_count; void* icl_agbno; void* icl_ag; int icl_type; } ;
struct xfs_icreate_item {TYPE_2__ ic_item; TYPE_1__ ic_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned int) ;
 struct xfs_icreate_item* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,TYPE_2__*,int ,int *) ;
 int FUNC_4 (struct xfs_trans*,TYPE_2__*) ;

void
FUNC_5(
 struct xfs_trans *VAR_5,
 xfs_agnumber_t VAR_6,
 xfs_agblock_t VAR_7,
 unsigned int VAR_8,
 unsigned int VAR_9,
 xfs_agblock_t VAR_10,
 unsigned int VAR_11)
{
 struct xfs_icreate_item *VAR_12;

 VAR_12 = FUNC_1(VAR_4, 0);

 FUNC_3(VAR_5->t_mountp, &VAR_12->ic_item, VAR_1,
     &VAR_3);

 VAR_12->ic_format.icl_type = VAR_1;
 VAR_12->ic_format.icl_size = 1;
 VAR_12->ic_format.icl_ag = FUNC_0(VAR_6);
 VAR_12->ic_format.icl_agbno = FUNC_0(VAR_7);
 VAR_12->ic_format.icl_count = FUNC_0(VAR_8);
 VAR_12->ic_format.icl_isize = FUNC_0(VAR_9);
 VAR_12->ic_format.icl_length = FUNC_0(VAR_10);
 VAR_12->ic_format.icl_gen = FUNC_0(VAR_11);

 FUNC_4(VAR_5, &VAR_12->ic_item);
 VAR_5->t_flags |= VAR_2;
 FUNC_2(VAR_0, &VAR_12->ic_item.li_flags);
}
