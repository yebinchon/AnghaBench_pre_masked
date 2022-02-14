
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_ctx {int cur_ino; int cur_inode_mode; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct send_ctx*,int ) ;
 int FUNC_2 (struct send_ctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct send_ctx *VAR_0)
{
 int VAR_1;

 if (FUNC_0(VAR_0->cur_inode_mode)) {
  VAR_1 = FUNC_1(VAR_0, VAR_0->cur_ino);
  if (VAR_1 < 0)
   goto out;
  if (VAR_1) {
   VAR_1 = 0;
   goto out;
  }
 }

 VAR_1 = FUNC_2(VAR_0, VAR_0->cur_ino);
 if (VAR_1 < 0)
  goto out;

out:
 return VAR_1;
}
