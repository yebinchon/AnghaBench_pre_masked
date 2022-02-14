
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_client {char* cl_owner_id; TYPE_2__* cl_rpcclient; int cl_minorversion; TYPE_1__* rpc_ops; } ;
struct TYPE_4__ {int cl_nodename; } ;
struct TYPE_3__ {int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (size_t,int ) ;
 int VAR_4 ;
 int FUNC_1 (char*,size_t,char*,int ,int ,int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct nfs_client *VAR_5)
{
 size_t VAR_6;
 char *VAR_7;

 VAR_6 = 10 + 10 + 1 + 10 + 1 +
  FUNC_2(VAR_4) + 1 +
  FUNC_2(VAR_5->cl_rpcclient->cl_nodename) + 1;

 if (VAR_6 > VAR_3 + 1)
  return -VAR_0;






 VAR_7 = FUNC_0(VAR_6, VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_1(VAR_7, VAR_6, "Linux NFSv%u.%u %s/%s",
   VAR_5->rpc_ops->version, VAR_5->cl_minorversion,
   VAR_4,
   VAR_5->cl_rpcclient->cl_nodename);
 VAR_5->cl_owner_id = VAR_7;
 return 0;
}
