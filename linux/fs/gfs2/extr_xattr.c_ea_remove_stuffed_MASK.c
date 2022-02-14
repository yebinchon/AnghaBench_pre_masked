
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int i_ctime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_ea_location {int el_bh; struct gfs2_ea_header* el_prev; struct gfs2_ea_header* el_ea; } ;
struct gfs2_ea_header {int ea_type; int ea_flags; int ea_rec_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gfs2_ea_header*) ;
 scalar_t__ FUNC_1 (struct gfs2_ea_header*) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct gfs2_inode *VAR_5, struct gfs2_ea_location *VAR_6)
{
 struct gfs2_ea_header *VAR_7 = VAR_6->el_ea;
 struct gfs2_ea_header *VAR_8 = VAR_6->el_prev;
 int VAR_9;

 VAR_9 = FUNC_7(FUNC_2(&VAR_5->i_inode), VAR_3 + VAR_4, 0);
 if (VAR_9)
  return VAR_9;

 FUNC_6(VAR_5->i_gl, VAR_6->el_bh);

 if (VAR_8) {
  u32 VAR_10;

  VAR_10 = FUNC_1(VAR_8) + FUNC_1(VAR_7);
  VAR_8->ea_rec_len = FUNC_4(VAR_10);

  if (FUNC_0(VAR_7))
   VAR_8->ea_flags |= VAR_0;
 } else {
  VAR_7->ea_type = VAR_1;
 }

 VAR_5->i_inode.i_ctime = FUNC_5(&VAR_5->i_inode);
 FUNC_3(&VAR_5->i_inode, VAR_2);

 FUNC_8(FUNC_2(&VAR_5->i_inode));

 return VAR_9;
}
