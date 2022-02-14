
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; scalar_t__ len; } ;
struct nfs4_client {TYPE_1__ cl_name; } ;


 int FUNC_0 (char*,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct nfs4_client *VAR_0, int VAR_1)
{
 FUNC_0("NFSD: warning: no callback path to client %.*s: error %d\n",
  (int)VAR_0->cl_name.len, VAR_0->cl_name.data, VAR_1);
}
