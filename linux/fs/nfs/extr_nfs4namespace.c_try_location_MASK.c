
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char vfsmount ;
struct sockaddr_storage {int dummy; } ;
struct nfs_clone_mount {char* mnt_path; char* hostname; int * addr; int dentry; int addrlen; int sb; } ;
struct nfs4_string {unsigned int len; int data; } ;
struct nfs4_fs_location {unsigned int nservers; struct nfs4_string* servers; int rootpath; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 TYPE_1__* FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (size_t const,int ) ;
 scalar_t__ FUNC_6 (int ,int ,unsigned int) ;
 int FUNC_7 (char*,int ,unsigned int) ;
 char* FUNC_8 (int *,char*,int ) ;
 int VAR_5 ;
 int FUNC_9 (int ,unsigned int,int *,size_t const,struct net*) ;
 struct net* FUNC_10 (int ) ;
 int FUNC_11 (char*,int ,char*,char*,char*) ;
 char* FUNC_12 (int ,int *,char*,struct nfs_clone_mount*) ;

__attribute__((used)) static struct vfsmount *FUNC_13(struct nfs_clone_mount *VAR_6,
         char *VAR_7, char *VAR_8,
         const struct nfs4_fs_location *VAR_9)
{
 const size_t VAR_10 = sizeof(struct sockaddr_storage);
 struct net *VAR_11 = FUNC_10(FUNC_3(VAR_6->sb)->client);
 struct vfsmount *VAR_12 = FUNC_1(-VAR_0);
 char *VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;

 VAR_13 = FUNC_8(&VAR_9->rootpath, VAR_8, VAR_4);
 if (FUNC_2(VAR_13))
  return FUNC_0(VAR_13);
 VAR_6->mnt_path = VAR_13;
 VAR_14 = VAR_13 - 1 - VAR_8;

 VAR_6->addr = FUNC_5(VAR_10, VAR_2);
 if (VAR_6->addr == ((void*)0))
  return FUNC_1(-VAR_1);

 for (VAR_15 = 0; VAR_15 < VAR_9->nservers; VAR_15++) {
  const struct nfs4_string *VAR_16 = &VAR_9->servers[VAR_15];

  if (VAR_16->len <= 0 || VAR_16->len >= VAR_14)
   continue;

  if (FUNC_6(VAR_16->data, VAR_3, VAR_16->len))
   continue;

  VAR_6->addrlen = FUNC_9(VAR_16->data, VAR_16->len,
    VAR_6->addr, VAR_10, VAR_11);
  if (VAR_6->addrlen == 0)
   continue;

  FUNC_7(VAR_8, VAR_16->data, VAR_16->len);
  VAR_8[VAR_16->len] = '\0';
  VAR_6->hostname = VAR_8;

  FUNC_11(VAR_7, VAR_4, "%s:%s",
    VAR_6->hostname,
    VAR_6->mnt_path);

  VAR_12 = FUNC_12(VAR_6->dentry, &VAR_5, VAR_7, VAR_6);
  if (!FUNC_2(VAR_12))
   break;
 }
 FUNC_4(VAR_6->addr);
 return VAR_12;
}
