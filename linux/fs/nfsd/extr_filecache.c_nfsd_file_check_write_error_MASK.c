
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {struct file* nf_file; } ;
struct file {int f_mode; int f_wb_err; int f_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct nfsd_file *VAR_1)
{
 struct file *VAR_2 = VAR_1->nf_file;

 if (!VAR_2 || !(VAR_2->f_mode & VAR_0))
  return 0;
 return FUNC_1(VAR_2->f_mapping, FUNC_0(VAR_2->f_wb_err));
}
