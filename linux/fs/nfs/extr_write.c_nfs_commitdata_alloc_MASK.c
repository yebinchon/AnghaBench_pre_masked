
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_commit_data {int pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfs_commit_data* FUNC_1 (int ,int) ;
 struct nfs_commit_data* FUNC_2 (int ,int) ;
 int FUNC_3 (struct nfs_commit_data*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;

struct nfs_commit_data *FUNC_4(bool VAR_6)
{
 struct nfs_commit_data *VAR_7;

 if (VAR_6)
  VAR_7 = FUNC_2(VAR_5, VAR_0);
 else {





  VAR_7 = FUNC_2(VAR_5, VAR_1);
  if (!VAR_7)
   VAR_7 = FUNC_1(VAR_4, VAR_0 |
          VAR_3 | VAR_2);
  if (!VAR_7)
   return ((void*)0);
 }

 FUNC_3(VAR_7, 0, sizeof(*VAR_7));
 FUNC_0(&VAR_7->pages);
 return VAR_7;
}
