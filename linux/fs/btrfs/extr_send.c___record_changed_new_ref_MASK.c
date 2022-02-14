
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct send_ctx {int cmp_key; int right_path; int parent_root; int send_root; } ;
struct fs_path {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ,int,struct fs_path*,struct send_ctx*) ;
 int FUNC_1 (int ,int ,int ,int ,int ,struct fs_path*) ;
 int FUNC_2 (int ,int ,int *,int *,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_3(int VAR_1, u64 VAR_2, int VAR_3,
        struct fs_path *VAR_4,
        void *VAR_5)
{
 u64 VAR_6;
 int VAR_7;
 struct send_ctx *VAR_8 = VAR_5;

 VAR_7 = FUNC_2(VAR_8->send_root, VAR_2, ((void*)0), &VAR_6, ((void*)0),
        ((void*)0), ((void*)0), ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_8->parent_root, VAR_8->right_path,
   VAR_8->cmp_key, VAR_2, VAR_6, VAR_4);
 if (VAR_7 == -VAR_0)
  VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_8);
 else if (VAR_7 > 0)
  VAR_7 = 0;

 return VAR_7;
}
