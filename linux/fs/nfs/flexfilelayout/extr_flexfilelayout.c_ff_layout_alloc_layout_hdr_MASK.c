
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_layout_hdr {int dummy; } ;
struct nfs4_flexfile_layout {struct pnfs_layout_hdr generic_hdr; int last_report_time; int mirrors; int error_list; } ;
struct inode {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 struct nfs4_flexfile_layout* FUNC_2 (int,int ) ;

__attribute__((used)) static struct pnfs_layout_hdr *
FUNC_3(struct inode *VAR_0, gfp_t VAR_1)
{
 struct nfs4_flexfile_layout *VAR_2;

 VAR_2 = FUNC_2(sizeof(*VAR_2), VAR_1);
 if (VAR_2) {
  FUNC_0(&VAR_2->error_list);
  FUNC_0(&VAR_2->mirrors);
  VAR_2->last_report_time = FUNC_1();
  return &VAR_2->generic_hdr;
 } else
  return ((void*)0);
}
