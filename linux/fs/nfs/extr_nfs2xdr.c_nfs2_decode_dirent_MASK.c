
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {int dummy; } ;
struct nfs_entry {int eof; int d_type; void* cookie; void* prev_cookie; int len; int name; void* ino; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct xdr_stream*,int *,int *) ;
 scalar_t__ FUNC_2 (int) ;
 int * FUNC_3 (struct xdr_stream*,int) ;
 scalar_t__ VAR_3 ;

int FUNC_4(struct xdr_stream *VAR_4, struct nfs_entry *VAR_5,
         bool VAR_6)
{
 __be32 *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_4, 4);
 if (FUNC_2(!VAR_7))
  return -VAR_1;
 if (*VAR_7++ == VAR_3) {
  VAR_7 = FUNC_3(VAR_4, 4);
  if (FUNC_2(!VAR_7))
   return -VAR_1;
  if (*VAR_7++ == VAR_3)
   return -VAR_1;
  VAR_5->eof = 1;
  return -VAR_2;
 }

 VAR_7 = FUNC_3(VAR_4, 4);
 if (FUNC_2(!VAR_7))
  return -VAR_1;
 VAR_5->ino = FUNC_0(VAR_7);

 VAR_8 = FUNC_1(VAR_4, &VAR_5->name, &VAR_5->len);
 if (FUNC_2(VAR_8))
  return VAR_8;





 VAR_5->prev_cookie = VAR_5->cookie;
 VAR_7 = FUNC_3(VAR_4, 4);
 if (FUNC_2(!VAR_7))
  return -VAR_1;
 VAR_5->cookie = FUNC_0(VAR_7);

 VAR_5->d_type = VAR_0;

 return 0;
}
