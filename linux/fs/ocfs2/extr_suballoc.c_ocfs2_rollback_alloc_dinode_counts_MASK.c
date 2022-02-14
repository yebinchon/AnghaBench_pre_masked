
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct TYPE_5__ {int i_used; } ;
struct TYPE_6__ {TYPE_1__ bitmap1; } ;
struct TYPE_8__ {int i_chain; } ;
struct ocfs2_dinode {TYPE_2__ id1; TYPE_4__ id2; } ;
struct ocfs2_chain_list {TYPE_3__* cl_recs; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
struct TYPE_7__ {int c_free; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct inode *VAR_0,
           struct buffer_head *VAR_1,
           u32 VAR_2,
           u16 VAR_3)
{
 u32 VAR_4;
 struct ocfs2_dinode *VAR_5 = (struct ocfs2_dinode *) VAR_1->b_data;
 struct ocfs2_chain_list *VAR_6;

 VAR_6 = (struct ocfs2_chain_list *)&VAR_5->id2.i_chain;
 VAR_4 = FUNC_2(VAR_5->id1.bitmap1.i_used);
 VAR_5->id1.bitmap1.i_used = FUNC_0(VAR_4 - VAR_2);
 FUNC_1(&VAR_6->cl_recs[VAR_3].c_free, VAR_2);
}
