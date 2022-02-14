
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_statfs_change_host {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct gfs2_holder {int gh_gl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct gfs2_rgrpd* FUNC_0 (int ) ;
 int FUNC_1 (struct gfs2_holder*) ;
 int FUNC_2 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_3 (struct gfs2_holder*) ;
 int FUNC_4 (struct gfs2_holder*) ;
 scalar_t__ FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (struct gfs2_holder*) ;
 struct gfs2_rgrpd* FUNC_8 (struct gfs2_sbd*) ;
 struct gfs2_rgrpd* FUNC_9 (struct gfs2_rgrpd*) ;
 int FUNC_10 (struct gfs2_holder*) ;
 struct gfs2_holder* FUNC_11 (unsigned int,int,int ) ;
 int FUNC_12 (struct gfs2_statfs_change_host*,int ,int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (struct gfs2_rgrpd*,struct gfs2_statfs_change_host*) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(struct gfs2_sbd *VAR_6, struct gfs2_statfs_change_host *VAR_7)
{
 struct gfs2_rgrpd *VAR_8;
 struct gfs2_holder *VAR_9, *VAR_10;
 unsigned int VAR_11 = 64;
 unsigned int VAR_12;
 int VAR_13;
 int VAR_14 = 0, VAR_15;

 FUNC_12(VAR_7, 0, sizeof(struct gfs2_statfs_change_host));
 VAR_9 = FUNC_11(VAR_11, sizeof(struct gfs2_holder), VAR_2);
 if (!VAR_9)
  return -VAR_0;
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  FUNC_6(VAR_9 + VAR_12);

 VAR_8 = FUNC_8(VAR_6);

 for (;;) {
  VAR_13 = 1;

  for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
   VAR_10 = VAR_9 + VAR_12;

   if (FUNC_5(VAR_10) && FUNC_3(VAR_10)) {
    VAR_15 = FUNC_4(VAR_10);
    if (VAR_15) {
     FUNC_7(VAR_10);
     VAR_14 = VAR_15;
    } else {
     if (!VAR_14) {
      struct gfs2_rgrpd *VAR_16 =
       FUNC_0(VAR_10->gh_gl);

      VAR_14 = FUNC_14(VAR_16, VAR_7);
     }
     FUNC_1(VAR_10);
    }
   }

   if (FUNC_5(VAR_10))
    VAR_13 = 0;
   else if (VAR_8 && !VAR_14) {
    VAR_14 = FUNC_2(VAR_8->rd_gl,
          VAR_4,
          VAR_3,
          VAR_10);
    VAR_8 = FUNC_9(VAR_8);
    VAR_13 = 0;
   }

   if (FUNC_13(VAR_5))
    VAR_14 = -VAR_1;
  }

  if (VAR_13)
   break;

  FUNC_15();
 }

 FUNC_10(VAR_9);
 return VAR_14;
}
