
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int flags; scalar_t__ parent_root; int send_root; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,struct send_ctx*) ;
 int VAR_1 ;
 int FUNC_1 (struct send_ctx*,int) ;
 int FUNC_2 (struct send_ctx*) ;
 int FUNC_3 (struct send_ctx*) ;
 int FUNC_4 (struct send_ctx*) ;
 int FUNC_5 (struct send_ctx*) ;

__attribute__((used)) static int FUNC_6(struct send_ctx *VAR_2)
{
 int VAR_3;

 if (!(VAR_2->flags & VAR_0)) {
  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3 < 0)
   goto out;
 }

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 < 0)
  goto out;

 if (VAR_2->parent_root) {
  VAR_3 = FUNC_0(VAR_2->send_root, VAR_2->parent_root,
    VAR_1, VAR_2);
  if (VAR_3 < 0)
   goto out;
  VAR_3 = FUNC_1(VAR_2, 1);
  if (VAR_3 < 0)
   goto out;
 } else {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3 < 0)
   goto out;
 }

out:
 FUNC_2(VAR_2);
 return VAR_3;
}
