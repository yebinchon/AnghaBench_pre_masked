
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {TYPE_1__* nfs_client; } ;
struct idmap {int dummy; } ;
typedef int kuid_t ;
typedef int __u32 ;
struct TYPE_2__ {struct idmap* cl_idmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct idmap*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char const*,size_t,char*,int*,struct idmap*) ;
 int FUNC_3 (char const*,size_t,int*) ;
 int FUNC_4 (char const*,size_t,int,int) ;
 int FUNC_5 (int ) ;

int FUNC_6(const struct nfs_server *VAR_1, const char *VAR_2, size_t VAR_3, kuid_t *VAR_4)
{
 struct idmap *VAR_5 = VAR_1->nfs_client->cl_idmap;
 __u32 VAR_6 = -1;
 int VAR_7 = 0;

 if (!FUNC_3(VAR_2, VAR_3, &VAR_6))
  VAR_7 = FUNC_2(VAR_2, VAR_3, "uid", &VAR_6, VAR_5);
 if (VAR_7 == 0) {
  *VAR_4 = FUNC_1(FUNC_0(VAR_5), VAR_6);
  if (!FUNC_5(*VAR_4))
   VAR_7 = -VAR_0;
 }
 FUNC_4(VAR_2, VAR_3, VAR_6, VAR_7);
 return VAR_7;
}
