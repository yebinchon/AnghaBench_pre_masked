
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfs_server {int dummy; } ;
struct nfs4_fs_locations {int nlocations; struct nfs4_fs_location* locations; } ;
struct TYPE_2__ {scalar_t__ ncomponents; } ;
struct nfs4_fs_location {scalar_t__ nservers; TYPE_1__ rootpath; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct nfs_server*,char*,char*,struct nfs4_fs_location const*) ;

int FUNC_3(struct nfs_server *VAR_3,
      const struct nfs4_fs_locations *VAR_4)
{
 char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 int VAR_7, VAR_8;

 VAR_8 = -VAR_0;
 if (VAR_4 == ((void*)0) || VAR_4->nlocations <= 0)
  goto out;

 VAR_8 = -VAR_1;
 VAR_5 = (char *) FUNC_0(VAR_2);
 if (!VAR_5)
  goto out;
 VAR_6 = (char *) FUNC_0(VAR_2);
 if (!VAR_6)
  goto out;

 for (VAR_7 = 0; VAR_7 < VAR_4->nlocations; VAR_7++) {
  const struct nfs4_fs_location *VAR_9 =
      &VAR_4->locations[VAR_7];

  if (VAR_9 == ((void*)0) || VAR_9->nservers <= 0 ||
      VAR_9->rootpath.ncomponents == 0)
   continue;

  VAR_8 = FUNC_2(VAR_3, VAR_5,
       VAR_6, VAR_9);
  if (VAR_8 == 0)
   break;
 }

out:
 FUNC_1((unsigned long)VAR_5);
 FUNC_1((unsigned long)VAR_6);
 return VAR_8;
}
