
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct TYPE_2__ {int len; int data; } ;
struct nlm_lock {int svid; TYPE_1__ oh; int fh; int caller; } ;
typedef void* __be32 ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int ) ;
 int FUNC_2 (struct xdr_stream*,int *) ;
 int FUNC_3 (struct xdr_stream*,int ,int ) ;
 int FUNC_4 (struct nlm_lock const*,int *,int *) ;
 void** FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_6(struct xdr_stream *VAR_0,
       const struct nlm_lock *VAR_1)
{
 u32 VAR_2, VAR_3;
 __be32 *VAR_4;

 FUNC_1(VAR_0, VAR_1->caller);
 FUNC_2(VAR_0, &VAR_1->fh);
 FUNC_3(VAR_0, VAR_1->oh.data, VAR_1->oh.len);

 VAR_4 = FUNC_5(VAR_0, 4 + 4 + 4);
 *VAR_4++ = FUNC_0(VAR_1->svid);

 FUNC_4(VAR_1, &VAR_2, &VAR_3);
 *VAR_4++ = FUNC_0(VAR_2);
 *VAR_4 = FUNC_0(VAR_3);
}
