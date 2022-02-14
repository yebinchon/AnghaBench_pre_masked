
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbxfb_info {struct dentry* debugfs_dir; } ;
struct fb_info {struct mbxfb_info* par; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,int,struct dentry*,struct fb_info*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(struct fb_info *VAR_6)
{
 struct mbxfb_info *VAR_7 = VAR_6->par;
 struct dentry *VAR_8;

 VAR_8 = FUNC_0("mbxfb", ((void*)0));
 VAR_7->debugfs_dir = VAR_8;

 FUNC_1("sysconf", 0444, VAR_8, VAR_6, &VAR_5);
 FUNC_1("clock", 0444, VAR_8, VAR_6, &VAR_0);
 FUNC_1("display", 0444, VAR_8, VAR_6, &VAR_1);
 FUNC_1("gsctl", 0444, VAR_8, VAR_6, &VAR_2);
 FUNC_1("sdram", 0444, VAR_8, VAR_6, &VAR_4);
 FUNC_1("misc", 0444, VAR_8, VAR_6, &VAR_3);
}
