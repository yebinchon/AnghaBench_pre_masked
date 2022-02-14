
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xdr_stream {int dummy; } ;
typedef int __be32 ;
struct TYPE_3__ {int type; scalar_t__ stringlen; int string; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * FUNC_2 (int *,int ,scalar_t__) ;
 int * FUNC_3 (struct xdr_stream*,scalar_t__) ;

__be32 FUNC_4(struct xdr_stream *VAR_3, int VAR_4)
{
 __be32 *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++) {
  if (VAR_2[VAR_6].type != VAR_4)
   continue;
  VAR_5 = FUNC_3(VAR_3, VAR_2[VAR_6].stringlen + 4);
  if (!VAR_5)
   return VAR_0;
  VAR_5 = FUNC_2(VAR_5, VAR_2[VAR_6].string,
     VAR_2[VAR_6].stringlen);
  return 0;
 }
 FUNC_1(1);
 return VAR_1;
}
