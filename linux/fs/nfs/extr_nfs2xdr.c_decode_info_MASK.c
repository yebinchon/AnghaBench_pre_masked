
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs2_fsstat {void* bavail; void* bfree; void* blocks; void* bsize; void* tsize; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_3(struct xdr_stream *VAR_2, struct nfs2_fsstat *VAR_3)
{
 __be32 *VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_1 << 2);
 if (FUNC_1(!VAR_4))
  return -VAR_0;
 VAR_3->tsize = FUNC_0(VAR_4++);
 VAR_3->bsize = FUNC_0(VAR_4++);
 VAR_3->blocks = FUNC_0(VAR_4++);
 VAR_3->bfree = FUNC_0(VAR_4++);
 VAR_3->bavail = FUNC_0(VAR_4);
 return 0;
}
