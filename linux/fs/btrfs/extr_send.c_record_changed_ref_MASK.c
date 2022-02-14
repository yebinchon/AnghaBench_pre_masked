
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int cmp_key; int right_path; int parent_root; int left_path; int send_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,struct send_ctx*) ;

__attribute__((used)) static int FUNC_1(struct send_ctx *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_0(VAR_2->send_root, VAR_2->left_path,
   VAR_2->cmp_key, 0, VAR_1, VAR_2);
 if (VAR_3 < 0)
  goto out;
 VAR_3 = FUNC_0(VAR_2->parent_root, VAR_2->right_path,
   VAR_2->cmp_key, 0, VAR_0, VAR_2);
 if (VAR_3 < 0)
  goto out;
 VAR_3 = 0;

out:
 return VAR_3;
}
