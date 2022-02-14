
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_mode; int i_gid; void* i_ctime; void* i_mtime; void* i_atime; int i_uid; } ;
struct iattr {unsigned int ia_valid; int ia_mode; int ia_ctime; int ia_mtime; int ia_atime; int ia_gid; int ia_uid; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,struct inode*) ;

void FUNC_3(struct inode *VAR_8, const struct iattr *VAR_9)
{
 unsigned int VAR_10 = VAR_9->ia_valid;

 if (VAR_10 & VAR_5)
  VAR_8->i_uid = VAR_9->ia_uid;
 if (VAR_10 & VAR_2)
  VAR_8->i_gid = VAR_9->ia_gid;
 if (VAR_10 & VAR_0) {
  VAR_8->i_atime = FUNC_2(VAR_9->ia_atime,
        VAR_8);
 }
 if (VAR_10 & VAR_4) {
  VAR_8->i_mtime = FUNC_2(VAR_9->ia_mtime,
        VAR_8);
 }
 if (VAR_10 & VAR_1) {
  VAR_8->i_ctime = FUNC_2(VAR_9->ia_ctime,
        VAR_8);
 }
 if (VAR_10 & VAR_3) {
  umode_t VAR_11 = VAR_9->ia_mode;

  if (!FUNC_1(VAR_8->i_gid) &&
      !FUNC_0(VAR_8, VAR_6))
   VAR_11 &= ~VAR_7;
  VAR_8->i_mode = VAR_11;
 }
}
