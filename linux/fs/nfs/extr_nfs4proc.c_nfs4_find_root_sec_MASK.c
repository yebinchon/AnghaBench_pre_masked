
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t flavor_len; int const* flavors; } ;
struct nfs_server {TYPE_1__ auth_info; } ;
struct nfs_fsinfo {int dummy; } ;
struct nfs_fh {int dummy; } ;
typedef int rpc_authflavor_t ;


 size_t FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_1 (struct nfs_server*,struct nfs_fh*,struct nfs_fsinfo*,int const) ;

__attribute__((used)) static int FUNC_2(struct nfs_server *VAR_3, struct nfs_fh *VAR_4,
         struct nfs_fsinfo *VAR_5)
{

 static const rpc_authflavor_t VAR_6[] = {
  130,
  131,
  132,
  128,
  129,
 };
 int VAR_7 = -VAR_1;
 size_t VAR_8;

 if (VAR_3->auth_info.flavor_len > 0) {

  for (VAR_8 = 0; VAR_8 < VAR_3->auth_info.flavor_len; VAR_8++) {
   VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
      VAR_3->auth_info.flavors[VAR_8]);
   if (VAR_7 == -VAR_2 || VAR_7 == -VAR_0)
    continue;
   break;
  }
 } else {

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); VAR_8++) {
   VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5,
            VAR_6[VAR_8]);
   if (VAR_7 == -VAR_2 || VAR_7 == -VAR_0)
    continue;
   break;
  }
 }
 if (VAR_7 == -VAR_0)
  VAR_7 = -VAR_1;
 return VAR_7;
}
