
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_diskflags; int i_eattr; } ;
struct gfs2_ea_location {int el_bh; scalar_t__ el_ea; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_5 ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 struct gfs2_sbd* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct gfs2_sbd*,unsigned int,size_t) ;
 int FUNC_7 (struct gfs2_inode*,int,char const*,void const*,size_t) ;
 int FUNC_8 (struct gfs2_inode*,int,char const*,void const*,size_t,struct gfs2_ea_location*) ;
 int FUNC_9 (struct gfs2_inode*,struct gfs2_ea_location*) ;
 int FUNC_10 (struct gfs2_inode*,int,char const*,struct gfs2_ea_location*) ;
 int FUNC_11 (struct gfs2_inode*,int,char const*) ;
 unsigned int FUNC_12 (char const*) ;

int FUNC_13(struct inode *VAR_8, const char *VAR_9,
     const void *VAR_10, size_t VAR_11, int VAR_12, int VAR_13)
{
 struct gfs2_inode *VAR_14 = FUNC_1(VAR_8);
 struct gfs2_sbd *VAR_15 = FUNC_2(VAR_8);
 struct gfs2_ea_location VAR_16;
 unsigned int VAR_17 = FUNC_12(VAR_9);
 int VAR_18;

 if (FUNC_4(VAR_8) || FUNC_3(VAR_8))
  return -VAR_2;
 if (VAR_17 > VAR_5)
  return -VAR_3;

 if (VAR_10 == ((void*)0)) {
  VAR_18 = FUNC_11(VAR_14, VAR_13, VAR_9);
  if (VAR_18 == -VAR_1 && !(VAR_12 & VAR_7))
   VAR_18 = 0;
  return VAR_18;
 }

 if (FUNC_6(VAR_15, VAR_17, VAR_11))
  return -VAR_3;

 if (!VAR_14->i_eattr) {
  if (VAR_12 & VAR_7)
   return -VAR_1;
  return FUNC_7(VAR_14, VAR_13, VAR_9, VAR_10, VAR_11);
 }

 VAR_18 = FUNC_10(VAR_14, VAR_13, VAR_9, &VAR_16);
 if (VAR_18)
  return VAR_18;

 if (VAR_16.el_ea) {
  if (VAR_14->i_diskflags & VAR_4) {
   FUNC_5(VAR_16.el_bh);
   return -VAR_2;
  }

  VAR_18 = -VAR_0;
  if (!(VAR_12 & VAR_6)) {
   int VAR_19 = !FUNC_0(VAR_16.el_ea);
   VAR_18 = FUNC_8(VAR_14, VAR_13, VAR_9, VAR_10, VAR_11, &VAR_16);
   if (!VAR_18 && VAR_19)
    FUNC_9(VAR_14, &VAR_16);
  }

  FUNC_5(VAR_16.el_bh);
  return VAR_18;
 }

 VAR_18 = -VAR_1;
 if (!(VAR_12 & VAR_7))
  VAR_18 = FUNC_8(VAR_14, VAR_13, VAR_9, VAR_10, VAR_11, ((void*)0));

 return VAR_18;
}
