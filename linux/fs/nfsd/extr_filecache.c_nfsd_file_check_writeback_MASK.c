
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd_file {struct file* nf_file; } ;
struct file {int f_mode; struct address_space* f_mapping; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct address_space*,int ) ;

__attribute__((used)) static bool
FUNC_1(struct nfsd_file *VAR_3)
{
 struct file *VAR_4 = VAR_3->nf_file;
 struct address_space *VAR_5;

 if (!VAR_4 || !(VAR_4->f_mode & VAR_0))
  return 0;
 VAR_5 = VAR_4->f_mapping;
 return FUNC_0(VAR_5, VAR_1) ||
  FUNC_0(VAR_5, VAR_2);
}
