
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_server {int usage; } ;
typedef enum afs_server_trace { ____Placeholder_afs_server_trace } afs_server_trace ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (struct afs_server*,unsigned int,int) ;

struct afs_server *FUNC_2(struct afs_server *VAR_0,
      enum afs_server_trace VAR_1)
{
 unsigned int VAR_2 = FUNC_0(&VAR_0->usage);

 FUNC_1(VAR_0, VAR_2, VAR_1);
 return VAR_0;
}
