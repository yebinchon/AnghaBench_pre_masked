
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_net {int * bl_device_pipe; } ;
struct net {int dummy; } ;


 struct nfs_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net *VAR_1)
{
 struct nfs_net *VAR_2 = FUNC_0(VAR_1, VAR_0);

 FUNC_1(VAR_1, VAR_2->bl_device_pipe);
 FUNC_2(VAR_2->bl_device_pipe);
 VAR_2->bl_device_pipe = ((void*)0);
}
