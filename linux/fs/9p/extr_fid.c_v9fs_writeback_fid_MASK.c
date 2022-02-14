
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_fid {int dummy; } ;
struct dentry {int dummy; } ;


 struct p9_fid* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct p9_fid*) ;
 int VAR_1 ;
 struct p9_fid* FUNC_2 (int ) ;
 int FUNC_3 (struct p9_fid*) ;
 int FUNC_4 (struct p9_fid*,int ) ;
 int FUNC_5 (struct dentry*,int ,int ) ;

struct p9_fid *FUNC_6(struct dentry *VAR_2)
{
 int VAR_3;
 struct p9_fid *VAR_4;

 VAR_4 = FUNC_2(FUNC_5(VAR_2, VAR_0, 0));
 if (FUNC_1(VAR_4))
  goto error_out;






 VAR_3 = FUNC_4(VAR_4, VAR_1);
 if (VAR_3 < 0) {
  FUNC_3(VAR_4);
  VAR_4 = FUNC_0(VAR_3);
  goto error_out;
 }
error_out:
 return VAR_4;
}
