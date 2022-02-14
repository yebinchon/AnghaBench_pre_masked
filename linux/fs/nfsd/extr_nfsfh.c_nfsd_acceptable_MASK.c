
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* dentry; } ;
struct svc_export {int ex_flags; TYPE_1__ ex_path; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 struct dentry* FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (struct dentry*) ;
 int FUNC_4 (char*,struct dentry*,struct dentry*) ;
 int FUNC_5 (struct dentry*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_2, struct dentry *VAR_3)
{
 struct svc_export *VAR_4 = VAR_2;
 int VAR_5;
 struct dentry *VAR_6;
 struct dentry *VAR_7;

 if (VAR_4->ex_flags & VAR_1)
  return 1;

 VAR_6 = FUNC_2(VAR_3);
 while (VAR_6 != VAR_4->ex_path.dentry && !FUNC_0(VAR_6)) {

  int VAR_8;
  VAR_7 = FUNC_3(VAR_6);
  VAR_8 = FUNC_6(FUNC_1(VAR_7), VAR_0);
  if (VAR_8 < 0) {
   FUNC_5(VAR_7);
   break;
  }
  FUNC_5(VAR_6);
  VAR_6 = VAR_7;
 }
 if (VAR_6 != VAR_4->ex_path.dentry)
  FUNC_4("nfsd_acceptable failed at %p %pd\n", VAR_6, VAR_6);
 VAR_5 = (VAR_6 == VAR_4->ex_path.dentry);
 FUNC_5(VAR_6);
 return VAR_5;
}
