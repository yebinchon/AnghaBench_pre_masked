
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {int * key; } ;
struct xenvif {int domid; TYPE_1__ hash; } ;
struct TYPE_9__ {int gmfn; } ;
struct TYPE_10__ {int offset; int domid; TYPE_4__ u; } ;
struct TYPE_7__ {scalar_t__ ref; } ;
struct TYPE_8__ {int domid; TYPE_2__ u; } ;
struct gnttab_copy {scalar_t__ len; scalar_t__ status; int flags; TYPE_5__ dest; TYPE_3__ source; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct gnttab_copy*,int) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct xenvif*) ;

u32 FUNC_5(struct xenvif *VAR_6, u32 VAR_7, u32 VAR_8)
{
 u8 *VAR_9 = VAR_6->hash.key;
 struct gnttab_copy VAR_10 = {
  .source.u.ref = VAR_7,
  .source.domid = VAR_6->domid,
  .dest.u.gmfn = FUNC_2(VAR_9),
  .dest.domid = VAR_0,
  .dest.offset = FUNC_3(VAR_9),
  .len = VAR_8,
  .flags = VAR_1
 };

 if (VAR_8 > VAR_3)
  return VAR_4;

 if (VAR_10.len != 0) {
  FUNC_0(&VAR_10, 1);

  if (VAR_10.status != VAR_2)
   return VAR_4;
 }


 if (VAR_8 < VAR_3)
  FUNC_1(VAR_9 + VAR_8, 0, VAR_3 - VAR_8);

 FUNC_4(VAR_6);

 return VAR_5;
}
