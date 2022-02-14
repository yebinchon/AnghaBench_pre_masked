
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct buffer_head {int b_blocknr; } ;
struct TYPE_3__ {int h_checksum; } ;


 TYPE_1__* FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ,TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_0,
          struct buffer_head *VAR_1)
{
 if (FUNC_1(VAR_0->i_sb))
  FUNC_0(VAR_1)->h_checksum = FUNC_2(VAR_0,
      VAR_1->b_blocknr, FUNC_0(VAR_1));
}
