
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int i_ctime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_ea_request {int dummy; } ;
struct gfs2_ea_header {int dummy; } ;
struct ea_set {scalar_t__ es_el; scalar_t__ ea_split; struct gfs2_ea_request* es_er; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct gfs2_inode*,scalar_t__) ;
 struct gfs2_ea_header* FUNC_4 (struct gfs2_ea_header*) ;
 int FUNC_5 (struct gfs2_inode*,struct gfs2_ea_header*,struct gfs2_ea_request*) ;
 int FUNC_6 (int ,struct buffer_head*) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct gfs2_inode *VAR_3, struct buffer_head *VAR_4,
     struct gfs2_ea_header *VAR_5, struct ea_set *VAR_6)
{
 struct gfs2_ea_request *VAR_7 = VAR_6->es_er;
 int VAR_8;

 VAR_8 = FUNC_7(FUNC_0(&VAR_3->i_inode), VAR_1 + 2 * VAR_2, 0);
 if (VAR_8)
  return VAR_8;

 FUNC_6(VAR_3->i_gl, VAR_4);

 if (VAR_6->ea_split)
  VAR_5 = FUNC_4(VAR_5);

 FUNC_5(VAR_3, VAR_5, VAR_7);

 if (VAR_6->es_el)
  FUNC_3(VAR_3, VAR_6->es_el);

 VAR_3->i_inode.i_ctime = FUNC_2(&VAR_3->i_inode);
 FUNC_1(&VAR_3->i_inode, VAR_0);

 FUNC_8(FUNC_0(&VAR_3->i_inode));
 return VAR_8;
}
