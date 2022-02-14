
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int wb_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;

int
FUNC_4(struct nfs_page *VAR_3)
{
 if (!FUNC_2(VAR_0, &VAR_3->wb_flags))
  return 0;
 FUNC_0(VAR_1, &VAR_3->wb_flags);
 FUNC_1();
 return FUNC_3(&VAR_3->wb_flags, VAR_0,
         VAR_2);
}
