
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {char* name; int len; int hash; } ;
struct gfs2_sbd {int sd_journals; int sd_jindex_mutex; int sd_jindex_spin; int sd_jindex_list; int sd_jindex; } ;
struct gfs2_jdesc {int jd_list; scalar_t__ jd_jid; int jd_inode; int jd_work; int jd_revoke_list; int extent_list; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_holder {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct qstr*,int *) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct gfs2_holder*) ;
 int FUNC_8 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_9 (int ,struct qstr*,int) ;
 int VAR_4 ;
 int FUNC_10 (struct gfs2_jdesc*) ;
 struct gfs2_jdesc* FUNC_11 (int,int ) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,char*,int) ;

__attribute__((used)) static int FUNC_18(struct gfs2_sbd *VAR_5, struct gfs2_holder *VAR_6)
{
 struct gfs2_inode *VAR_7 = FUNC_0(VAR_5->sd_jindex);
 struct qstr VAR_8;
 char VAR_9[20];
 struct gfs2_jdesc *VAR_10;
 int VAR_11;

 VAR_8.name = VAR_9;

 FUNC_13(&VAR_5->sd_jindex_mutex);

 for (;;) {
  VAR_11 = FUNC_8(VAR_7->i_gl, VAR_3, 0, VAR_6);
  if (VAR_11)
   break;

  VAR_8.len = FUNC_17(VAR_9, "journal%u", VAR_5->sd_journals);
  VAR_8.hash = FUNC_6(VAR_8.name, VAR_8.len);

  VAR_11 = FUNC_5(VAR_5->sd_jindex, &VAR_8, ((void*)0));
  if (VAR_11 == -VAR_0) {
   VAR_11 = 0;
   break;
  }

  FUNC_7(VAR_6);

  if (VAR_11)
   break;

  VAR_11 = -VAR_1;
  VAR_10 = FUNC_11(sizeof(struct gfs2_jdesc), VAR_2);
  if (!VAR_10)
   break;

  FUNC_1(&VAR_10->extent_list);
  FUNC_1(&VAR_10->jd_revoke_list);

  FUNC_2(&VAR_10->jd_work, VAR_4);
  VAR_10->jd_inode = FUNC_9(VAR_5->sd_jindex, &VAR_8, 1);
  if (FUNC_3(VAR_10->jd_inode)) {
   if (!VAR_10->jd_inode)
    VAR_11 = -VAR_0;
   else
    VAR_11 = FUNC_4(VAR_10->jd_inode);
   FUNC_10(VAR_10);
   break;
  }

  FUNC_15(&VAR_5->sd_jindex_spin);
  VAR_10->jd_jid = VAR_5->sd_journals++;
  FUNC_12(&VAR_10->jd_list, &VAR_5->sd_jindex_list);
  FUNC_16(&VAR_5->sd_jindex_spin);
 }

 FUNC_14(&VAR_5->sd_jindex_mutex);

 return VAR_11;
}
