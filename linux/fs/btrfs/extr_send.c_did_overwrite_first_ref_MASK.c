
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct send_ctx {int parent_root; } ;
struct fs_path {int start; } ;


 int VAR_0 ;
 int FUNC_0 (struct send_ctx*,int ,int ,int ,int ,int ,int ) ;
 struct fs_path* FUNC_1 () ;
 int FUNC_2 (struct fs_path*) ;
 int FUNC_3 (struct fs_path*) ;
 int FUNC_4 (int ,int ,int *,int *,struct fs_path*) ;

__attribute__((used)) static int FUNC_5(struct send_ctx *VAR_1, u64 VAR_2, u64 VAR_3)
{
 int VAR_4 = 0;
 struct fs_path *VAR_5 = ((void*)0);
 u64 VAR_6;
 u64 VAR_7;

 if (!VAR_1->parent_root)
  goto out;

 VAR_5 = FUNC_1();
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_1->parent_root, VAR_2, &VAR_6, &VAR_7, VAR_5);
 if (VAR_4 < 0)
  goto out;

 VAR_4 = FUNC_0(VAR_1, VAR_6, VAR_7, VAR_2, VAR_3,
   VAR_5->start, FUNC_3(VAR_5));

out:
 FUNC_2(VAR_5);
 return VAR_4;
}
