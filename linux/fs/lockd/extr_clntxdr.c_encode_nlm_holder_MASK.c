
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct xdr_stream {int dummy; } ;
struct TYPE_3__ {int len; int data; } ;
struct TYPE_4__ {scalar_t__ fl_type; } ;
struct nlm_lock {TYPE_1__ oh; int svid; TYPE_2__ fl; } ;
struct nlm_res {struct nlm_lock lock; } ;
typedef void* __be32 ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct xdr_stream*,int) ;
 int FUNC_2 (struct xdr_stream*,int ) ;
 int FUNC_3 (struct xdr_stream*,int ,int ) ;
 int FUNC_4 (struct nlm_lock const*,int *,int *) ;
 void** FUNC_5 (struct xdr_stream*,int) ;

__attribute__((used)) static void FUNC_6(struct xdr_stream *VAR_1,
         const struct nlm_res *VAR_2)
{
 const struct nlm_lock *VAR_3 = &VAR_2->lock;
 u32 VAR_4, VAR_5;
 __be32 *VAR_6;

 FUNC_1(VAR_1, VAR_3->fl.fl_type == VAR_0);
 FUNC_2(VAR_1, VAR_3->svid);
 FUNC_3(VAR_1, VAR_3->oh.data, VAR_3->oh.len);

 VAR_6 = FUNC_5(VAR_1, 4 + 4);
 FUNC_4(VAR_3, &VAR_4, &VAR_5);
 *VAR_6++ = FUNC_0(VAR_4);
 *VAR_6 = FUNC_0(VAR_5);
}
