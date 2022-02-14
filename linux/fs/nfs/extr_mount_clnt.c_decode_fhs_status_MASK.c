
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xdr_stream {int dummy; } ;
struct mountres {int errno; } ;
typedef int __be32 ;
struct TYPE_3__ {scalar_t__ status; int errno; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (char*,scalar_t__) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (struct xdr_stream*,int) ;

__attribute__((used)) static int FUNC_5(struct xdr_stream *VAR_3, struct mountres *VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6;
 __be32 *VAR_7;

 VAR_7 = FUNC_4(VAR_3, 4);
 if (FUNC_3(VAR_7 == ((void*)0)))
  return -VAR_1;
 VAR_6 = FUNC_1(VAR_7);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  if (VAR_2[VAR_5].status == VAR_6) {
   VAR_4->errno = VAR_2[VAR_5].errno;
   return 0;
  }
 }

 FUNC_2("NFS: unrecognized MNT3 status code: %u\n", VAR_6);
 VAR_4->errno = -VAR_0;
 return 0;
}
