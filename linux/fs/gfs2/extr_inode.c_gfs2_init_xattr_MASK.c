
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int sd_jbsize; } ;
struct gfs2_meta_header {int dummy; } ;
struct gfs2_inode {int i_gl; int i_eattr; int i_inode; } ;
struct gfs2_ea_header {int ea_flags; int ea_type; int ea_rec_len; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gfs2_ea_header* FUNC_0 (struct buffer_head*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct gfs2_sbd* FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*,int) ;
 struct buffer_head* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct buffer_head*,int ,int ) ;
 int FUNC_7 (int ,struct buffer_head*) ;

__attribute__((used)) static void FUNC_8(struct gfs2_inode *VAR_4)
{
 struct gfs2_sbd *VAR_5 = FUNC_1(&VAR_4->i_inode);
 struct buffer_head *VAR_6;
 struct gfs2_ea_header *VAR_7;

 VAR_6 = FUNC_5(VAR_4->i_gl, VAR_4->i_eattr);
 FUNC_7(VAR_4->i_gl, VAR_6);
 FUNC_6(VAR_6, VAR_3, VAR_2);
 FUNC_4(VAR_6, sizeof(struct gfs2_meta_header));

 VAR_7 = FUNC_0(VAR_6);
 VAR_7->ea_rec_len = FUNC_3(VAR_5->sd_jbsize);
 VAR_7->ea_type = VAR_1;
 VAR_7->ea_flags = VAR_0;

 FUNC_2(VAR_6);
}
