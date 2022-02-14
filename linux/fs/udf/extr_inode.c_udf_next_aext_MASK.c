
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int udf_pblk_t ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int i_sb; int i_ino; } ;
struct extent_position {int offset; int bh; struct kernel_lb_addr block; } ;
struct allocExtDesc {int dummy; } ;
typedef int int8_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct inode*,struct extent_position*,struct kernel_lb_addr*,int *,int) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,struct kernel_lb_addr*,int ) ;
 int FUNC_5 (int ,int ) ;

int8_t FUNC_6(struct inode *VAR_2, struct extent_position *VAR_3,
       struct kernel_lb_addr *VAR_4, uint32_t *VAR_5, int VAR_6)
{
 int8_t VAR_7;
 unsigned int VAR_8 = 0;

 while ((VAR_7 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6)) ==
        (VAR_0 >> 30)) {
  udf_pblk_t VAR_9;

  if (++VAR_8 > VAR_1) {
   FUNC_3(VAR_2->i_sb,
    "too many indirect extents in inode %lu\n",
    VAR_2->i_ino);
   return -1;
  }

  VAR_3->block = *VAR_4;
  VAR_3->offset = sizeof(struct allocExtDesc);
  FUNC_0(VAR_3->bh);
  VAR_9 = FUNC_4(VAR_2->i_sb, &VAR_3->block, 0);
  VAR_3->bh = FUNC_5(VAR_2->i_sb, VAR_9);
  if (!VAR_3->bh) {
   FUNC_2("reading block %u failed!\n", VAR_9);
   return -1;
  }
 }

 return VAR_7;
}
