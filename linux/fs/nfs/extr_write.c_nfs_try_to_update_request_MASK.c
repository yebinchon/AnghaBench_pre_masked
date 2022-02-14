
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nfs_page {unsigned int wb_offset; unsigned int wb_bytes; unsigned int wb_pgbase; scalar_t__ wb_nio; } ;
struct inode {int dummy; } ;


 struct nfs_page* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nfs_page*) ;
 struct nfs_page* FUNC_2 (struct page*) ;
 int FUNC_3 (struct nfs_page*) ;
 int FUNC_4 (struct nfs_page*) ;
 int FUNC_5 (struct inode*,struct page*) ;

__attribute__((used)) static struct nfs_page *FUNC_6(struct inode *VAR_0,
  struct page *VAR_1,
  unsigned int VAR_2,
  unsigned int VAR_3)
{
 struct nfs_page *VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 VAR_6 = VAR_2 + VAR_3;

 VAR_4 = FUNC_2(VAR_1);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_5 = VAR_4->wb_offset + VAR_4->wb_bytes;






 if (VAR_2 > VAR_5 || VAR_6 < VAR_4->wb_offset)
  goto out_flushme;


 if (VAR_2 < VAR_4->wb_offset) {
  VAR_4->wb_offset = VAR_2;
  VAR_4->wb_pgbase = VAR_2;
 }
 if (VAR_6 > VAR_5)
  VAR_4->wb_bytes = VAR_6 - VAR_4->wb_offset;
 else
  VAR_4->wb_bytes = VAR_5 - VAR_4->wb_offset;
 VAR_4->wb_nio = 0;
 return VAR_4;
out_flushme:





 FUNC_3(VAR_4);
 FUNC_4(VAR_4);
 VAR_7 = FUNC_5(VAR_0, VAR_1);
 return (VAR_7 < 0) ? FUNC_0(VAR_7) : ((void*)0);
}
