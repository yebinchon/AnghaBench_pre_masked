
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_page {int wb_flags; struct nfs_page* wb_this_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nfs_page*) ;
 int FUNC_2 (struct nfs_page*) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct nfs_page *VAR_5)
{
 FUNC_0(VAR_5->wb_this_page != VAR_5);


 FUNC_0(FUNC_3(VAR_1, &VAR_5->wb_flags));
 FUNC_0(FUNC_3(VAR_2, &VAR_5->wb_flags));
 FUNC_0(FUNC_3(VAR_3, &VAR_5->wb_flags));
 FUNC_0(FUNC_3(VAR_4, &VAR_5->wb_flags));
 FUNC_0(FUNC_3(VAR_0, &VAR_5->wb_flags));


 FUNC_1(VAR_5);
 FUNC_2(VAR_5);
}
