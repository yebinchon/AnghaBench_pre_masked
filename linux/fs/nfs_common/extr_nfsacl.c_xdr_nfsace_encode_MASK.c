
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_array2_desc {int dummy; } ;
struct posix_acl_entry {int e_tag; int e_perm; int e_gid; int e_uid; } ;
struct nfsacl_encode_desc {int typeflag; int gid; int uid; int count; TYPE_1__* acl; } ;
typedef int __be32 ;
struct TYPE_2__ {struct posix_acl_entry* a_entries; } ;






 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (int) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct xdr_array2_desc *VAR_2, void *VAR_3)
{
 struct nfsacl_encode_desc *VAR_4 =
  (struct nfsacl_encode_desc *) VAR_2;
 __be32 *VAR_5 = VAR_3;

 struct posix_acl_entry *VAR_6 =
  &VAR_4->acl->a_entries[VAR_4->count++];

 *VAR_5++ = FUNC_2(VAR_6->e_tag | VAR_4->typeflag);
 switch(VAR_6->e_tag) {
  case 128:
   *VAR_5++ = FUNC_2(FUNC_1(&VAR_1, VAR_4->uid));
   break;
  case 130:
   *VAR_5++ = FUNC_2(FUNC_0(&VAR_1, VAR_4->gid));
   break;
  case 129:
   *VAR_5++ = FUNC_2(FUNC_1(&VAR_1, VAR_6->e_uid));
   break;
  case 131:
   *VAR_5++ = FUNC_2(FUNC_0(&VAR_1, VAR_6->e_gid));
   break;
  default:
   *VAR_5++ = 0;
   break;
 }
 *VAR_5++ = FUNC_2(VAR_6->e_perm & VAR_0);
 return 0;
}
