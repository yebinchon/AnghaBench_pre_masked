
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* io_end; } ;
struct ext4_map_blocks {int m_flags; scalar_t__ m_len; } ;
struct mpage_da_data {TYPE_1__ io_submit; struct ext4_map_blocks map; struct inode* inode; } ;
struct inode {int dummy; } ;
struct TYPE_8__ {int * h_rsv_handle; } ;
typedef TYPE_2__ handle_t ;
struct TYPE_9__ {int * handle; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,struct inode*,struct ext4_map_blocks*,int) ;
 int FUNC_3 (struct inode*,TYPE_4__*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct ext4_map_blocks*) ;

__attribute__((used)) static int FUNC_6(handle_t *VAR_7, struct mpage_da_data *VAR_8)
{
 struct inode *VAR_9 = VAR_8->inode;
 struct ext4_map_blocks *VAR_10 = &VAR_8->map;
 int VAR_11;
 int VAR_12, VAR_13;

 FUNC_5(VAR_9, VAR_10);
 VAR_11 = VAR_1 |
      VAR_5 |
      VAR_4;
 VAR_13 = FUNC_4(VAR_9);
 if (VAR_13)
  VAR_11 |= VAR_3;
 if (VAR_10->m_flags & (1 << VAR_0))
  VAR_11 |= VAR_2;

 VAR_12 = FUNC_2(VAR_7, VAR_9, VAR_10, VAR_11);
 if (VAR_12 < 0)
  return VAR_12;
 if (VAR_13 && (VAR_10->m_flags & VAR_6)) {
  if (!VAR_8->io_submit.io_end->handle &&
      FUNC_1(VAR_7)) {
   VAR_8->io_submit.io_end->handle = VAR_7->h_rsv_handle;
   VAR_7->h_rsv_handle = ((void*)0);
  }
  FUNC_3(VAR_9, VAR_8->io_submit.io_end);
 }

 FUNC_0(VAR_10->m_len == 0);
 return 0;
}
