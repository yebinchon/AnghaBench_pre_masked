
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_mode; int i_gid; void* i_ctime; void* i_mtime; void* i_atime; int i_uid; } ;
struct iattr {int ia_valid; int ia_mode; int ia_ctime; int ia_mtime; int ia_atime; int ia_gid; int ia_uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,struct inode*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_8, const struct iattr *VAR_9)
{
 if (VAR_9->ia_valid & VAR_5)
  VAR_8->i_uid = VAR_9->ia_uid;
 if (VAR_9->ia_valid & VAR_2)
  VAR_8->i_gid = VAR_9->ia_gid;
 if (VAR_9->ia_valid & VAR_0) {
  VAR_8->i_atime = FUNC_2(VAR_9->ia_atime,
        VAR_8);
 }
 if (VAR_9->ia_valid & VAR_4) {
  VAR_8->i_mtime = FUNC_2(VAR_9->ia_mtime,
        VAR_8);
 }
 if (VAR_9->ia_valid & VAR_1) {
  VAR_8->i_ctime = FUNC_2(VAR_9->ia_ctime,
        VAR_8);
 }
 if (VAR_9->ia_valid & VAR_3) {
  umode_t VAR_10 = VAR_9->ia_mode;

  if (!FUNC_1(VAR_8->i_gid) && !FUNC_0(VAR_6))
   VAR_10 &= ~VAR_7;
  VAR_8->i_mode = VAR_10;
 }
}
