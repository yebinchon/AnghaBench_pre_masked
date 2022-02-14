
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
typedef char sockaddr ;
struct nfs_server {int client; } ;
struct nfs4_string {scalar_t__ len; int data; } ;
struct nfs4_fs_location {unsigned int nservers; struct nfs4_string* servers; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t const,int ) ;
 char* FUNC_2 (int ,scalar_t__,int ) ;
 int * FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (struct nfs_server*,char*,char*,size_t,struct net*) ;
 size_t FUNC_5 (int ,scalar_t__,char*,size_t const,struct net*) ;
 struct net* FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct nfs_server *VAR_6,
  char *VAR_7, char *VAR_8,
  const struct nfs4_fs_location *VAR_9)
{
 const size_t VAR_10 = sizeof(struct sockaddr_storage);
 struct net *VAR_11 = FUNC_6(VAR_6->client);
 struct sockaddr *VAR_12;
 unsigned int VAR_13;
 size_t VAR_14;
 int VAR_15;

 VAR_12 = FUNC_1(VAR_10, VAR_2);
 if (VAR_12 == ((void*)0))
  return -VAR_1;

 VAR_15 = -VAR_0;
 for (VAR_13 = 0; VAR_13 < VAR_9->nservers; VAR_13++) {
  const struct nfs4_string *VAR_16 = &VAR_9->servers[VAR_13];
  char *VAR_17;

  if (VAR_16->len <= 0 || VAR_16->len > VAR_5)
   continue;

  if (FUNC_3(VAR_16->data, VAR_3, VAR_16->len) != ((void*)0))
   continue;

  VAR_14 = FUNC_5(VAR_16->data, VAR_16->len,
      VAR_12, VAR_10, VAR_11);
  if (VAR_14 == 0)
   continue;
  FUNC_7(VAR_12, VAR_4);

  VAR_15 = -VAR_1;
  VAR_17 = FUNC_2(VAR_16->data, VAR_16->len, VAR_2);
  if (VAR_17 == ((void*)0))
   break;

  VAR_15 = FUNC_4(VAR_6, VAR_17, VAR_12, VAR_14, VAR_11);
  FUNC_0(VAR_17);
  if (VAR_15 == 0)
   break;
 }

 FUNC_0(VAR_12);
 return VAR_15;
}
