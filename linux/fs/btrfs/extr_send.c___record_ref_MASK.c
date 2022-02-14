
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct recorded_ref {int list; void* dir_gen; void* dir; } ;
struct list_head {int dummy; } ;
struct fs_path {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct recorded_ref* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;
 int FUNC_2 (struct recorded_ref*,struct fs_path*) ;

__attribute__((used)) static int FUNC_3(struct list_head *VAR_2, u64 VAR_3,
        u64 VAR_4, struct fs_path *VAR_5)
{
 struct recorded_ref *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->dir = VAR_3;
 VAR_6->dir_gen = VAR_4;
 FUNC_2(VAR_6, VAR_5);
 FUNC_1(&VAR_6->list, VAR_2);
 return 0;
}
