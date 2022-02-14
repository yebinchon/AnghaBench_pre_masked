
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_client {int cl_ipaddr; } ;


 unsigned int FUNC_0 (char*,size_t,char*) ;
 int * FUNC_1 (int ,char) ;

__attribute__((used)) static unsigned int
FUNC_2(const struct nfs_client *VAR_0, char *VAR_1, size_t VAR_2)
{
 if (FUNC_1(VAR_0->cl_ipaddr, ':') != ((void*)0))
  return FUNC_0(VAR_1, VAR_2, "tcp6");
 else
  return FUNC_0(VAR_1, VAR_2, "tcp");
}
