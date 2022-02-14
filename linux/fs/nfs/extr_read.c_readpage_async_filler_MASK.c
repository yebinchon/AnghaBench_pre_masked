
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct nfs_readdesc {TYPE_1__* pgio; int ctx; } ;
struct nfs_page {int dummy; } ;
struct TYPE_2__ {int pg_error; } ;


 scalar_t__ FUNC_0 (struct nfs_page*) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct nfs_page*) ;
 struct nfs_page* FUNC_2 (int ,struct page*,int ,unsigned int) ;
 int FUNC_3 (struct nfs_page*) ;
 unsigned int FUNC_4 (struct page*) ;
 int FUNC_5 (TYPE_1__*,struct nfs_page*) ;
 int FUNC_6 (struct nfs_page*,int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static int
FUNC_10(void *VAR_1, struct page *VAR_2)
{
 struct nfs_readdesc *VAR_3 = (struct nfs_readdesc *)VAR_1;
 struct nfs_page *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5 == 0)
  return FUNC_7(VAR_2);

 VAR_4 = FUNC_2(VAR_3->ctx, VAR_2, 0, VAR_5);
 if (FUNC_0(VAR_4))
  goto out_error;

 if (VAR_5 < VAR_0)
  FUNC_9(VAR_2, VAR_5, VAR_0);
 if (!FUNC_5(VAR_3->pgio, VAR_4)) {
  FUNC_3(VAR_4);
  VAR_6 = VAR_3->pgio->pg_error;
  FUNC_6(VAR_4, VAR_6);
  goto out;
 }
 return 0;
out_error:
 VAR_6 = FUNC_1(VAR_4);
 FUNC_8(VAR_2);
out:
 return VAR_6;
}
