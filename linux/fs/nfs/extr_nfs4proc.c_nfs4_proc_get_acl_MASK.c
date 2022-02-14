
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int dummy; } ;
struct inode {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int cache_validity; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_2 ;
 struct nfs_server* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,void*,size_t) ;
 int FUNC_3 (struct inode*,void*,size_t) ;
 int FUNC_4 (struct nfs_server*) ;
 int FUNC_5 (struct nfs_server*,struct inode*) ;
 int FUNC_6 (struct inode*) ;

__attribute__((used)) static ssize_t FUNC_7(struct inode *VAR_3, void *VAR_4, size_t VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 if (!FUNC_4(VAR_6))
  return -VAR_1;
 VAR_7 = FUNC_5(VAR_6, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;
 if (FUNC_0(VAR_3)->cache_validity & VAR_2)
  FUNC_6(VAR_3);
 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (VAR_7 != -VAR_0)


  return VAR_7;
 return FUNC_2(VAR_3, VAR_4, VAR_5);
}
