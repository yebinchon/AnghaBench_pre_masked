
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int** mapping; size_t mapping_sel; int size; } ;
struct xenvif {int num_queues; TYPE_5__ hash; int domid; } ;
struct TYPE_6__ {int ref; } ;
struct TYPE_9__ {int offset; int domid; TYPE_1__ u; } ;
struct TYPE_7__ {void* gmfn; } ;
struct TYPE_8__ {int offset; TYPE_2__ u; int domid; } ;
struct gnttab_copy {int len; scalar_t__ status; TYPE_4__ source; TYPE_3__ dest; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct gnttab_copy*,unsigned int) ;
 int FUNC_1 (int*,int*,int) ;
 void* FUNC_2 (int*) ;
 int FUNC_3 (int*) ;

u32 FUNC_4(struct xenvif *VAR_6, u32 VAR_7, u32 VAR_8,
       u32 VAR_9)
{
 u32 *VAR_10 = VAR_6->hash.mapping[!VAR_6->hash.mapping_sel];
 unsigned int VAR_11 = 1;
 struct gnttab_copy VAR_12[2] = {{
  .source.u.ref = VAR_7,
  .source.domid = VAR_6->domid,
  .dest.domid = VAR_0,
  .len = VAR_8 * sizeof(*VAR_10),
  .flags = VAR_1
 }};

 if ((VAR_9 + VAR_8 < VAR_9) || (VAR_9 + VAR_8 > VAR_6->hash.size) ||
     VAR_8 > VAR_5 / sizeof(*VAR_10))
  return VAR_3;

 VAR_12[0].dest.u.gmfn = FUNC_2(VAR_10 + VAR_9);
 VAR_12[0].dest.offset = FUNC_3(VAR_10 + VAR_9);
 if (VAR_12[0].dest.offset + VAR_12[0].len > VAR_5) {
  VAR_12[1] = VAR_12[0];
  VAR_12[1].source.offset = VAR_5 - VAR_12[0].dest.offset;
  VAR_12[1].dest.u.gmfn = FUNC_2(VAR_10 + VAR_9 + VAR_8);
  VAR_12[1].dest.offset = 0;
  VAR_12[1].len = VAR_12[0].len - VAR_12[1].source.offset;
  VAR_12[0].len = VAR_12[1].source.offset;
  VAR_11 = 2;
 }

 FUNC_1(VAR_10, VAR_6->hash.mapping[VAR_6->hash.mapping_sel],
        VAR_6->hash.size * sizeof(*VAR_10));

 if (VAR_12[0].len != 0) {
  FUNC_0(VAR_12, VAR_11);

  if (VAR_12[0].status != VAR_2 ||
      VAR_12[VAR_11 - 1].status != VAR_2)
   return VAR_3;
 }

 while (VAR_8-- != 0)
  if (VAR_10[VAR_9++] >= VAR_6->num_queues)
   return VAR_3;

 VAR_6->hash.mapping_sel = !VAR_6->hash.mapping_sel;

 return VAR_4;
}
