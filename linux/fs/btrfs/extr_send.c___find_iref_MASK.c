
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct fs_path {int start; } ;
struct find_ref_ctx {scalar_t__ dir; scalar_t__ dir_gen; int found_idx; int root; struct fs_path* name; } ;


 scalar_t__ FUNC_0 (struct fs_path*) ;
 int FUNC_1 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(int VAR_0, u64 VAR_1, int VAR_2,
         struct fs_path *VAR_3,
         void *VAR_4)
{
 struct find_ref_ctx *VAR_5 = VAR_4;
 u64 VAR_6;
 int VAR_7;

 if (VAR_1 == VAR_5->dir && FUNC_0(VAR_3) == FUNC_0(VAR_5->name) &&
     FUNC_2(VAR_3->start, VAR_5->name->start, FUNC_0(VAR_3)) == 0) {




  VAR_7 = FUNC_1(VAR_5->root, VAR_1, ((void*)0), &VAR_6, ((void*)0),
         ((void*)0), ((void*)0), ((void*)0));
  if (VAR_7)
   return VAR_7;
  if (VAR_6 != VAR_5->dir_gen)
   return 0;
  VAR_5->found_idx = VAR_0;
  return 1;
 }
 return 0;
}
