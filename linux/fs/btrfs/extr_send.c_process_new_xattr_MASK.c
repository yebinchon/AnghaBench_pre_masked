
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int left_path; int send_root; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,struct send_ctx*) ;

__attribute__((used)) static int FUNC_1(struct send_ctx *VAR_1)
{
 int VAR_2 = 0;

 VAR_2 = FUNC_0(VAR_1->send_root, VAR_1->left_path,
          VAR_0, VAR_1);

 return VAR_2;
}
