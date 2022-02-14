
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_locking_protocol {int dummy; } ;
struct ocfs2_cluster_connection {int dummy; } ;


 char* VAR_0 ;
 int FUNC_0 (char*,int *,int ,char const*,int,struct ocfs2_locking_protocol*,void (*) (int,void*),void*,struct ocfs2_cluster_connection**) ;

int FUNC_1(const char *VAR_1,
       int VAR_2,
       struct ocfs2_locking_protocol *VAR_3,
       void (*VAR_4)(int VAR_5,
           void *VAR_6),
       void *VAR_7,
       struct ocfs2_cluster_connection **VAR_8)
{
 char *VAR_9 = ((void*)0);

 if (VAR_0[0])
  VAR_9 = VAR_0;
 return FUNC_0(VAR_9, ((void*)0), 0, VAR_1, VAR_2,
         VAR_3, VAR_4, VAR_7,
         VAR_8);
}
