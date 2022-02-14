
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iov_iter {int dummy; } ;
struct fuse_copy_state {int write; struct iov_iter* iter; } ;


 int FUNC_0 (struct fuse_copy_state*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fuse_copy_state *VAR_0, int VAR_1,
      struct iov_iter *VAR_2)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->write = VAR_1;
 VAR_0->iter = VAR_2;
}
