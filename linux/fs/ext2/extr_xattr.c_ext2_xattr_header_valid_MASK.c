
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2_xattr_header {scalar_t__ h_magic; scalar_t__ h_blocks; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static bool
FUNC_1(struct ext2_xattr_header *VAR_1)
{
 if (VAR_1->h_magic != FUNC_0(VAR_0) ||
     VAR_1->h_blocks != FUNC_0(1))
  return 0;

 return 1;
}
