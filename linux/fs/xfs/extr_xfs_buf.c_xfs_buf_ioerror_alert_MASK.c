
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xfs_buf {int b_error; int b_length; int b_mount; } ;


 scalar_t__ FUNC_0 (struct xfs_buf*) ;
 int FUNC_1 (int ,char*,char const*,int ,int ,int ) ;

void
FUNC_2(
 struct xfs_buf *VAR_0,
 const char *VAR_1)
{
 FUNC_1(VAR_0->b_mount,
"metadata I/O error in \"%s\" at daddr 0x%llx len %d error %d",
   VAR_1, (uint64_t)FUNC_0(VAR_0), VAR_0->b_length,
   -VAR_0->b_error);
}
