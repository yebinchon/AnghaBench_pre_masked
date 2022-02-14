
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bmap {int dummy; } ;
struct buffer_head {int b_blocknr; } ;


 int FUNC_0 (struct nilfs_bmap*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct nilfs_bmap *VAR_0,
        struct buffer_head *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0), VAR_1->b_blocknr);
}
