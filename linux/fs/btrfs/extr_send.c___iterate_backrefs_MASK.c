
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct clone_root {scalar_t__ root; scalar_t__ ino; scalar_t__ offset; int found_refs; } ;
struct backref_ctx {scalar_t__ cur_objectid; scalar_t__ cur_offset; int found_itself; scalar_t__ extent_len; int found; TYPE_1__* sctx; } ;
struct TYPE_2__ {scalar_t__ send_root; int clone_roots_cnt; int clone_roots; } ;


 int VAR_0 ;
 struct clone_root* FUNC_0 (void*,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(u64 VAR_1, u64 VAR_2, u64 VAR_3, void *VAR_4)
{
 struct backref_ctx *VAR_5 = VAR_4;
 struct clone_root *VAR_6;


 VAR_6 = FUNC_0((void *)(uintptr_t)VAR_3, VAR_5->sctx->clone_roots,
   VAR_5->sctx->clone_roots_cnt,
   sizeof(struct clone_root),
   VAR_0);
 if (!VAR_6)
  return 0;

 if (VAR_6->root == VAR_5->sctx->send_root &&
     VAR_1 == VAR_5->cur_objectid &&
     VAR_2 == VAR_5->cur_offset) {
  VAR_5->found_itself = 1;
 }





 if (VAR_6->root == VAR_5->sctx->send_root) {






  if (VAR_1 >= VAR_5->cur_objectid)
   return 0;
 }

 VAR_5->found++;
 VAR_6->found_refs++;
 if (VAR_1 < VAR_6->ino) {
  VAR_6->ino = VAR_1;
  VAR_6->offset = VAR_2;
 } else if (VAR_6->ino == VAR_1) {



  if (VAR_6->offset > VAR_2 + VAR_5->extent_len)
   VAR_6->offset = VAR_2;
 }

 return 0;
}
