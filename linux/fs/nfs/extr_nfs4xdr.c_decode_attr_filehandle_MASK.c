
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct nfs_fh {int size; int data; } ;
typedef int __be32 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct nfs_fh*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;
 int * FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_6(struct xdr_stream *VAR_3, uint32_t *VAR_4, struct nfs_fh *VAR_5)
{
 __be32 *VAR_6;
 u32 VAR_7;

 if (VAR_5 != ((void*)0))
  FUNC_3(VAR_5, 0, sizeof(*VAR_5));

 if (FUNC_4(VAR_4[0] & (VAR_1 - 1U)))
  return -VAR_0;
 if (FUNC_1(VAR_4[0] & VAR_1)) {
  VAR_6 = FUNC_5(VAR_3, 4);
  if (FUNC_4(!VAR_6))
   return -VAR_0;
  VAR_7 = FUNC_0(VAR_6);
  if (VAR_7 > VAR_2)
   return -VAR_0;
  VAR_6 = FUNC_5(VAR_3, VAR_7);
  if (FUNC_4(!VAR_6))
   return -VAR_0;
  if (VAR_5 != ((void*)0)) {
   FUNC_2(VAR_5->data, VAR_6, VAR_7);
   VAR_5->size = VAR_7;
  }
  VAR_4[0] &= ~VAR_1;
 }
 return 0;
}
