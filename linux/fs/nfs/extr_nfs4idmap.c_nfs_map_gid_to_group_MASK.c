
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int caps; TYPE_1__* nfs_client; } ;
struct idmap {int dummy; } ;
typedef int kgid_t ;
typedef int __u32 ;
struct TYPE_2__ {struct idmap* cl_idmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct idmap*) ;
 int FUNC_2 (int ,char*,char*,size_t,struct idmap*) ;
 int FUNC_3 (int ,char*,size_t) ;
 int FUNC_4 (char*,int,int ,int) ;

int FUNC_5(const struct nfs_server *VAR_2, kgid_t VAR_3, char *VAR_4, size_t VAR_5)
{
 struct idmap *VAR_6 = VAR_2->nfs_client->cl_idmap;
 int VAR_7 = -VAR_0;
 __u32 VAR_8;

 VAR_8 = FUNC_0(FUNC_1(VAR_6), VAR_3);
 if (!(VAR_2->caps & VAR_1))
  VAR_7 = FUNC_2(VAR_8, "group", VAR_4, VAR_5, VAR_6);
 if (VAR_7 < 0)
  VAR_7 = FUNC_3(VAR_8, VAR_4, VAR_5);
 FUNC_4(VAR_4, VAR_7, VAR_8, VAR_7);
 return VAR_7;
}
