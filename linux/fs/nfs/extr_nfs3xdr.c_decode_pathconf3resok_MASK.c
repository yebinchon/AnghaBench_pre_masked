
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_pathconf {void* max_namelen; void* max_link; } ;
typedef int __be32 ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_1,
     struct nfs_pathconf *VAR_2)
{
 __be32 *VAR_3;

 VAR_3 = FUNC_2(VAR_1, 4 * 6);
 if (FUNC_1(!VAR_3))
  return -VAR_0;
 VAR_2->max_link = FUNC_0(VAR_3++);
 VAR_2->max_namelen = FUNC_0(VAR_3);

 return 0;
}
