
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct gfs2_rgrpd {unsigned int rd_reserved; int rd_rsspin; } ;
struct gfs2_rbm {struct gfs2_rgrpd* rgd; } ;
struct gfs2_blkreserv {scalar_t__ rs_free; int rs_rbm; } ;
struct gfs2_inode {int i_sizehint; struct gfs2_blkreserv i_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gfs2_blkreserv*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,struct gfs2_rbm const*) ;
 int FUNC_3 (int *,unsigned int) ;
 unsigned int FUNC_4 (struct gfs2_rbm const*) ;
 scalar_t__ FUNC_5 (struct gfs2_blkreserv*) ;
 unsigned int FUNC_6 (scalar_t__,unsigned int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct gfs2_blkreserv*,int ) ;

__attribute__((used)) static void FUNC_10(struct gfs2_inode *VAR_2,
        const struct gfs2_rbm *VAR_3, unsigned VAR_4)
{
 struct gfs2_blkreserv *VAR_5 = &VAR_2->i_res;
 struct gfs2_rgrpd *VAR_6 = VAR_3->rgd;
 unsigned VAR_7;
 u64 VAR_8;
 int VAR_9;

 FUNC_7(&VAR_6->rd_rsspin);
 if (FUNC_5(VAR_5)) {
  if (FUNC_2(&VAR_5->rs_rbm, VAR_3)) {
   VAR_8 = FUNC_4(VAR_3);
   VAR_9 = FUNC_3(&VAR_5->rs_rbm, VAR_8 + VAR_4);
   VAR_7 = FUNC_6(VAR_5->rs_free, VAR_4);
   VAR_5->rs_free -= VAR_7;
   VAR_6->rd_reserved -= VAR_7;
   FUNC_9(VAR_5, VAR_1);
   if (VAR_5->rs_free && !VAR_9)
    goto out;


   FUNC_1(VAR_0, &VAR_2->i_sizehint);
  }
  FUNC_0(VAR_5);
 }
out:
 FUNC_8(&VAR_6->rd_rsspin);
}
