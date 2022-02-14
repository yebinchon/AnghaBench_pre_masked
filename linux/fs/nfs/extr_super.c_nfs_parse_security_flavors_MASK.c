
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
struct nfs_parsed_mount_data {int auth_info; } ;
typedef int rpc_authflavor_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_13 ;
 char* FUNC_3 (char**,char*) ;

__attribute__((used)) static int FUNC_4(char *VAR_14,
          struct nfs_parsed_mount_data *VAR_15)
{
 substring_t VAR_16[VAR_0];
 rpc_authflavor_t VAR_17;
 char *VAR_18;

 FUNC_0(VAR_1, "NFS: parsing sec=%s option\n", VAR_14);

 while ((VAR_18 = FUNC_3(&VAR_14, ":")) != ((void*)0)) {
  switch (FUNC_1(VAR_18, VAR_13, VAR_16)) {
  case 132:
   VAR_17 = VAR_11;
   break;
  case 128:
   VAR_17 = VAR_12;
   break;
  case 138:
   VAR_17 = VAR_2;
   break;
  case 137:
   VAR_17 = VAR_3;
   break;
  case 136:
   VAR_17 = VAR_4;
   break;
  case 135:
   VAR_17 = VAR_5;
   break;
  case 134:
   VAR_17 = VAR_6;
   break;
  case 133:
   VAR_17 = VAR_7;
   break;
  case 131:
   VAR_17 = VAR_8;
   break;
  case 130:
   VAR_17 = VAR_9;
   break;
  case 129:
   VAR_17 = VAR_10;
   break;
  default:
   FUNC_0(VAR_1,
     "NFS: sec= option '%s' not recognized\n", VAR_18);
   return 0;
  }

  if (!FUNC_2(&VAR_15->auth_info, VAR_17))
   return 0;
 }

 return 1;
}
