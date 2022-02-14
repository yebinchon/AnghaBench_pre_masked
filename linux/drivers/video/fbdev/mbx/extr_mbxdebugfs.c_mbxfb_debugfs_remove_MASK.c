
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbxfb_info {int debugfs_dir; } ;
struct fb_info {struct mbxfb_info* par; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_0)
{
 struct mbxfb_info *VAR_1 = VAR_0->par;

 FUNC_0(VAR_1->debugfs_dir);
}
