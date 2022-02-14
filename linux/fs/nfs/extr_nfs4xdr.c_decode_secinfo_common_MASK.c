
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
struct nfs4_secinfo_res {TYPE_1__* flavors; } ;
struct nfs4_secinfo4 {void* flavor; } ;
typedef int __be32 ;
struct TYPE_2__ {int num_flavors; struct nfs4_secinfo4* flavors; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,struct nfs4_secinfo4*) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_4(struct xdr_stream *VAR_3, struct nfs4_secinfo_res *VAR_4)
{
 struct nfs4_secinfo4 *VAR_5;
 unsigned int VAR_6, VAR_7;
 int VAR_8;
 __be32 *VAR_9;

 VAR_9 = FUNC_3(VAR_3, 4);
 if (FUNC_2(!VAR_9))
  return -VAR_0;

 VAR_4->flavors->num_flavors = 0;
 VAR_7 = FUNC_0(VAR_9);

 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  VAR_5 = &VAR_4->flavors->flavors[VAR_6];
  if ((char *)&VAR_5[1] - (char *)VAR_4->flavors > VAR_1)
   break;

  VAR_9 = FUNC_3(VAR_3, 4);
  if (FUNC_2(!VAR_9))
   return -VAR_0;
  VAR_5->flavor = FUNC_0(VAR_9);

  if (VAR_5->flavor == VAR_2) {
   VAR_8 = FUNC_1(VAR_3, VAR_5);
   if (VAR_8)
    goto out;
  }
  VAR_4->flavors->num_flavors++;
 }

 VAR_8 = 0;
out:
 return VAR_8;
}
