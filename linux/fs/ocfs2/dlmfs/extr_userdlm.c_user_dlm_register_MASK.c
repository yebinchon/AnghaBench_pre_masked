
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int len; int name; } ;
struct ocfs2_cluster_connection {int dummy; } ;


 struct ocfs2_cluster_connection* FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int *,int ,int *,struct ocfs2_cluster_connection**) ;
 int VAR_0 ;
 int VAR_1 ;

struct ocfs2_cluster_connection *FUNC_3(const struct qstr *VAR_2)
{
 int VAR_3;
 struct ocfs2_cluster_connection *VAR_4;

 VAR_3 = FUNC_2(VAR_2->name, VAR_2->len,
         &VAR_0,
         VAR_1,
         ((void*)0), &VAR_4);
 if (VAR_3)
  FUNC_1(VAR_3);

 return VAR_3 ? FUNC_0(VAR_3) : VAR_4;
}
