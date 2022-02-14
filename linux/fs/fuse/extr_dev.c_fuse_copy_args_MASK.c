
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_copy_state {int dummy; } ;
struct fuse_arg {int size; int value; } ;


 int FUNC_0 (struct fuse_copy_state*,int ,int ) ;
 int FUNC_1 (struct fuse_copy_state*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct fuse_copy_state *VAR_0, unsigned VAR_1,
     unsigned VAR_2, struct fuse_arg *VAR_3,
     int VAR_4)
{
 int VAR_5 = 0;
 unsigned VAR_6;

 for (VAR_6 = 0; !VAR_5 && VAR_6 < VAR_1; VAR_6++) {
  struct fuse_arg *VAR_7 = &VAR_3[VAR_6];
  if (VAR_6 == VAR_1 - 1 && VAR_2)
   VAR_5 = FUNC_1(VAR_0, VAR_7->size, VAR_4);
  else
   VAR_5 = FUNC_0(VAR_0, VAR_7->value, VAR_7->size);
 }
 return VAR_5;
}
