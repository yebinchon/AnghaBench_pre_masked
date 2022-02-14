
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int cmp_key; int right_path; int parent_root; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ,struct send_ctx*) ;

__attribute__((used)) static int FUNC_1(struct send_ctx *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->parent_root, VAR_1->right_path,
    VAR_1->cmp_key, 0, VAR_0, VAR_1);
 if (VAR_2 < 0)
  goto out;
 VAR_2 = 0;

out:
 return VAR_2;
}
