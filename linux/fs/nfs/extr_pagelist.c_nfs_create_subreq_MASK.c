
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int wb_nio; int wb_index; int wb_page; int wb_lock_context; } ;


 int FUNC_0 (struct nfs_page*) ;
 struct nfs_page* FUNC_1 (int ,int ,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct nfs_page*) ;
 int FUNC_3 (struct nfs_page*,struct nfs_page*) ;

__attribute__((used)) static struct nfs_page *
FUNC_4(struct nfs_page *VAR_0, struct nfs_page *VAR_1,
    unsigned int VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{
 struct nfs_page *VAR_5;

 VAR_5 = FUNC_1(VAR_0->wb_lock_context, VAR_0->wb_page,
   VAR_2, VAR_3, VAR_4);
 if (!FUNC_0(VAR_5)) {
  FUNC_2(VAR_5);
  VAR_5->wb_index = VAR_0->wb_index;
  FUNC_3(VAR_5, VAR_1);
  VAR_5->wb_nio = VAR_0->wb_nio;
 }
 return VAR_5;
}
