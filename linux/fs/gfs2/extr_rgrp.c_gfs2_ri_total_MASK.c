
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct inode {int dummy; } ;
struct gfs2_sbd {struct inode* sd_rindex; } ;
struct gfs2_rindex {int ri_data; } ;
struct gfs2_inode {int dummy; } ;
typedef scalar_t__ loff_t ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_inode*,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (struct inode*) ;

u64 FUNC_4(struct gfs2_sbd *VAR_0)
{
 u64 VAR_1 = 0;
 struct inode *VAR_2 = VAR_0->sd_rindex;
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_2);
 char VAR_4[sizeof(struct gfs2_rindex)];
 int VAR_5, VAR_6;

 for (VAR_6 = 0;; VAR_6++) {
  loff_t VAR_7 = VAR_6 * sizeof(struct gfs2_rindex);

  if (VAR_7 + sizeof(struct gfs2_rindex) > FUNC_3(VAR_2))
   break;
  VAR_5 = FUNC_2(VAR_3, VAR_4, &VAR_7,
        sizeof(struct gfs2_rindex));
  if (VAR_5 != sizeof(struct gfs2_rindex))
   break;
  VAR_1 += FUNC_1(((struct gfs2_rindex *)VAR_4)->ri_data);
 }
 return VAR_1;
}
