
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_session_info {int flags; int uid; } ;
struct p9_fid {int dummy; } ;
struct dentry {int dummy; } ;
typedef int kuid_t ;


 int VAR_0 ;


 int VAR_1 ;


 int FUNC_0 () ;
 struct v9fs_session_info* FUNC_1 (struct dentry*) ;
 struct p9_fid* FUNC_2 (struct dentry*,int ,int) ;

struct p9_fid *FUNC_3(struct dentry *VAR_2)
{
 kuid_t VAR_3;
 int VAR_4, VAR_5;
 struct v9fs_session_info *VAR_6;

 VAR_6 = FUNC_1(VAR_2);
 VAR_5 = VAR_6->flags & VAR_1;
 switch (VAR_5) {
 case 129:
 case 128:
 case 130:
  VAR_3 = FUNC_0();
  VAR_4 = 0;
  break;

 case 131:
  VAR_3 = VAR_6->uid;
  VAR_4 = 1;
  break;

 default:
  VAR_3 = VAR_0;
  VAR_4 = 0;
  break;
 }
 return FUNC_2(VAR_2, VAR_3, VAR_4);
}
