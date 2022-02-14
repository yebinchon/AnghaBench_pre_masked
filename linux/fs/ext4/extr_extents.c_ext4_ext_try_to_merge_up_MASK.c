
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_extent_idx {int dummy; } ;
struct ext4_extent_header {int dummy; } ;
struct ext4_ext_path {int p_depth; int p_bh; TYPE_1__* p_hdr; scalar_t__ p_ext; int p_maxdepth; int p_idx; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;
struct TYPE_4__ {int eh_max; int eh_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int *,struct inode*,int *,int ,int,int) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,TYPE_1__*,size_t) ;

__attribute__((used)) static void FUNC_9(handle_t *VAR_2,
         struct inode *VAR_3,
         struct ext4_ext_path *VAR_4)
{
 size_t VAR_5;
 unsigned VAR_6 = FUNC_3(VAR_3, 0);
 ext4_fsblk_t VAR_7;

 if ((VAR_4[0].p_depth != 1) ||
     (FUNC_7(VAR_4[0].p_hdr->eh_entries) != 1) ||
     (FUNC_7(VAR_4[1].p_hdr->eh_entries) > VAR_6))
  return;






 if (FUNC_6(VAR_2, 2))
  return;




 VAR_7 = FUNC_5(VAR_4[0].p_idx);
 VAR_5 = FUNC_7(VAR_4[1].p_hdr->eh_entries) *
  sizeof(struct ext4_extent_idx);
 VAR_5 += sizeof(struct ext4_extent_header);

 VAR_4[1].p_maxdepth = VAR_4[0].p_maxdepth;
 FUNC_8(VAR_4[0].p_hdr, VAR_4[1].p_hdr, VAR_5);
 VAR_4[0].p_depth = 0;
 VAR_4[0].p_ext = FUNC_0(VAR_4[0].p_hdr) +
  (VAR_4[1].p_ext - FUNC_0(VAR_4[1].p_hdr));
 VAR_4[0].p_hdr->eh_max = FUNC_2(VAR_6);

 FUNC_1(VAR_4[1].p_bh);
 FUNC_4(VAR_2, VAR_3, ((void*)0), VAR_7, 1,
    VAR_1 | VAR_0);
}
