
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xdr_stream {TYPE_1__* buf; } ;
typedef int __be32 ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int,int *,int) ;
 int * FUNC_3 (int *,char*,int) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static __be32 FUNC_5(struct xdr_stream *VAR_1, char VAR_2,
       char *VAR_3, char VAR_4,
       char VAR_5)
{
 __be32 *VAR_6;
 __be32 VAR_7;
 int VAR_8;
 int VAR_9, VAR_10=0;
 char *VAR_11, *VAR_12, *VAR_13;

 FUNC_0("nfsd4_encode_components(%s)\n", VAR_3);

 VAR_8 = VAR_1->buf->len;
 VAR_6 = FUNC_4(VAR_1, 4);
 if (!VAR_6)
  return VAR_0;
 VAR_6++;

 VAR_12 = VAR_11 = VAR_3;
 while (*VAR_12) {
  bool VAR_14 = 0;


  if (*VAR_11 == VAR_4) {
   for (; *VAR_12 && (*VAR_12 != VAR_5); VAR_12++)
                                        ;
   VAR_13 = VAR_12 + 1;
   if (*VAR_12 && (!*VAR_13 || *VAR_13 == VAR_2)) {
    VAR_11++;
    VAR_14 = 1;
   }
  }

  if (!VAR_14)
   for (; *VAR_12 && (*VAR_12 != VAR_2); VAR_12++)
                                   ;

  VAR_9 = VAR_12 - VAR_11;
  if (VAR_9) {
   VAR_6 = FUNC_4(VAR_1, VAR_9 + 4);
   if (!VAR_6)
    return VAR_0;
   VAR_6 = FUNC_3(VAR_6, VAR_11, VAR_9);
   VAR_10++;
  }
  else
   VAR_12++;
  if (VAR_14)
   VAR_12 = VAR_13;

  VAR_11 = VAR_12;
 }
 VAR_7 = FUNC_1(VAR_10);
 FUNC_2(VAR_1->buf, VAR_8, &VAR_7, 4);
 return 0;
}
