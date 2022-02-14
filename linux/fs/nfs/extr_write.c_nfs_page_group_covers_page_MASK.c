
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {unsigned int wb_pgbase; unsigned int wb_bytes; int wb_head; int wb_page; } ;


 int FUNC_0 (struct nfs_page*) ;
 struct nfs_page* FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (struct nfs_page*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct nfs_page *VAR_0)
{
 struct nfs_page *VAR_1;
 unsigned int VAR_2 = 0;
 unsigned int VAR_3 = FUNC_3(VAR_0->wb_page);

 FUNC_0(VAR_0);

 for (;;) {
  VAR_1 = FUNC_1(VAR_0->wb_head, VAR_2);
  if (!VAR_1)
   break;
  VAR_2 = VAR_1->wb_pgbase + VAR_1->wb_bytes;
 }

 FUNC_2(VAR_0);
 return VAR_2 >= VAR_3;
}
