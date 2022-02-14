
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_rdir {int dummy; } ;
struct p9_fid {struct p9_rdir* rdir; } ;
struct file {struct p9_fid* private_data; } ;


 int VAR_0 ;
 struct p9_rdir* FUNC_0 (int,int ) ;

__attribute__((used)) static struct p9_rdir *FUNC_1(struct file *VAR_1, int VAR_2)
{
 struct p9_fid *VAR_3 = VAR_1->private_data;
 if (!VAR_3->rdir)
  VAR_3->rdir = FUNC_0(sizeof(struct p9_rdir) + VAR_2, VAR_0);
 return VAR_3->rdir;
}
