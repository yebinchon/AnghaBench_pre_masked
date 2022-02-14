
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct afs_vlserver_list {int nr_servers; TYPE_1__* servers; } ;
struct afs_net {int dummy; } ;
struct afs_addr_list {int nr_addrs; } ;
typedef int __be32 ;
struct TYPE_4__ {int addresses; } ;
struct TYPE_3__ {TYPE_2__* server; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct afs_vlserver_list* FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int,int ) ;
 int FUNC_2 (char*,int,int,char const*,char) ;
 int FUNC_3 (char*,...) ;
 struct afs_addr_list* FUNC_4 (unsigned int,unsigned short,int ) ;
 TYPE_2__* FUNC_5 (char*,int,int ) ;
 struct afs_vlserver_list* FUNC_6 (int) ;
 int FUNC_7 (struct afs_addr_list*,int ,unsigned int) ;
 int FUNC_8 (struct afs_addr_list*,int *,unsigned int) ;
 int FUNC_9 (struct afs_addr_list*) ;
 int FUNC_10 (struct afs_net*,struct afs_vlserver_list*) ;
 scalar_t__ FUNC_11 (char const*,int,int *,int,char const**) ;
 scalar_t__ FUNC_12 (char const*,int,int *,int,char const**) ;
 scalar_t__ FUNC_13 (char const) ;
 char* FUNC_14 (char const*,char,int) ;
 int FUNC_15 (int ,struct afs_addr_list*) ;

struct afs_vlserver_list *FUNC_16(struct afs_net *VAR_7,
            const char *VAR_8, size_t VAR_9,
            char VAR_10,
            unsigned short VAR_11,
            unsigned short VAR_12)
{
 struct afs_vlserver_list *VAR_13;
 struct afs_addr_list *VAR_14;
 const char *VAR_15, *VAR_16 = VAR_8 + VAR_9;
 const char *VAR_17;
 unsigned int VAR_18 = 0;
 int VAR_19 = -VAR_6;

 FUNC_2("%*.*s,%c", (int)VAR_9, (int)VAR_9, VAR_8, VAR_10);

 if (!VAR_9) {
  FUNC_3(" = -EDESTADDRREQ [empty]");
  return FUNC_0(-VAR_4);
 }

 if (VAR_10 == ':' && (FUNC_14(VAR_8, ',', VAR_9) || !FUNC_14(VAR_8, '.', VAR_9)))
  VAR_10 = ',';


 VAR_15 = VAR_8;
 do {
  if (!*VAR_15) {
   VAR_17 = "nul";
   goto inval;
  }
  if (*VAR_15 == VAR_10)
   continue;
  VAR_18++;
  if (*VAR_15 == '[') {
   VAR_15++;
   if (VAR_15 == VAR_16) {
    VAR_17 = "brace1";
    goto inval;
   }
   VAR_15 = FUNC_14(VAR_15, ']', VAR_16 - VAR_15);
   if (!VAR_15) {
    VAR_17 = "brace2";
    goto inval;
   }
   VAR_15++;
   if (VAR_15 >= VAR_16)
    break;
  }

  VAR_15 = FUNC_14(VAR_15, VAR_10, VAR_16 - VAR_15);
  if (!VAR_15)
   break;
  VAR_15++;
 } while (VAR_15 < VAR_16);

 FUNC_1("%u/%u addresses", VAR_18, VAR_0);

 VAR_13 = FUNC_6(1);
 if (!VAR_13)
  return FUNC_0(-VAR_6);

 VAR_13->nr_servers = 1;
 VAR_13->servers[0].server = FUNC_5("<dummy>", 7, VAR_1);
 if (!VAR_13->servers[0].server)
  goto error_vl;

 VAR_14 = FUNC_4(VAR_18, VAR_11, VAR_1);
 if (!VAR_14)
  goto error;


 VAR_15 = VAR_8;
 do {
  const char *VAR_20, *VAR_21;
  unsigned int VAR_22 = VAR_12;
  __be32 VAR_23[4];
  int VAR_24;

  if (*VAR_15 == VAR_10) {
   VAR_15++;
   continue;
  }

  if (*VAR_15 == '[') {
   VAR_15++;
   VAR_20 = FUNC_14(VAR_15, ']', VAR_16 - VAR_15);
  } else {
   for (VAR_20 = VAR_15; VAR_20 < VAR_16; VAR_20++)
    if (*VAR_20 == '+' || *VAR_20 == VAR_10)
     break;
  }

  if (FUNC_11(VAR_15, VAR_20 - VAR_15, (u8 *)&VAR_23[0], -1, &VAR_21)) {
   VAR_24 = VAR_2;
  } else if (FUNC_12(VAR_15, VAR_20 - VAR_15, (u8 *)VAR_23, -1, &VAR_21)) {
   VAR_24 = VAR_3;
  } else {
   VAR_17 = "family";
   goto bad_address;
  }

  VAR_15 = VAR_20;
  if (VAR_21 != VAR_15) {
   VAR_17 = "nostop";
   goto bad_address;
  }

  if (VAR_20 < VAR_16 && *VAR_20 == ']')
   VAR_15++;

  if (VAR_15 < VAR_16) {
   if (*VAR_15 == '+') {

    VAR_22 = 0;
    VAR_15++;
    if (VAR_15 >= VAR_16 || !FUNC_13(*VAR_15)) {
     VAR_17 = "port";
     goto bad_address;
    }
    do {
     VAR_22 *= 10;
     VAR_22 += *VAR_15 - '0';
     if (VAR_22 > 65535) {
      VAR_17 = "pval";
      goto bad_address;
     }
     VAR_15++;
    } while (VAR_15 < VAR_16 && FUNC_13(*VAR_15));
   } else if (*VAR_15 == VAR_10) {
    VAR_15++;
   } else {
    VAR_17 = "weird";
    goto bad_address;
   }
  }

  if (VAR_24 == VAR_2)
   FUNC_7(VAR_14, VAR_23[0], VAR_22);
  else
   FUNC_8(VAR_14, VAR_23, VAR_22);

 } while (VAR_15 < VAR_16);

 FUNC_15(VAR_13->servers[0].server->addresses, VAR_14);
 FUNC_3(" = [nr %u]", VAR_14->nr_addrs);
 return VAR_13;

inval:
 FUNC_3(" = -EINVAL [%s %zu %*.*s]",
        VAR_17, VAR_15 - VAR_8, (int)VAR_9, (int)VAR_9, VAR_8);
 return FUNC_0(-VAR_5);
bad_address:
 FUNC_3(" = -EINVAL [%s %zu %*.*s]",
        VAR_17, VAR_15 - VAR_8, (int)VAR_9, (int)VAR_9, VAR_8);
 VAR_19 = -VAR_5;
error:
 FUNC_9(VAR_14);
error_vl:
 FUNC_10(VAR_7, VAR_13);
 return FUNC_0(VAR_19);
}
