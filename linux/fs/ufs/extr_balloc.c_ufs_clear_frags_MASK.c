
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_data; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int s_blocksize; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int ,int ,int ) ;
 struct buffer_head* FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_0, sector_t VAR_1, unsigned int VAR_2,
       int VAR_3)
{
 struct buffer_head *VAR_4;
 sector_t VAR_5 = VAR_1 + VAR_2;

 for (; VAR_1 < VAR_5; ++VAR_1) {
  VAR_4 = FUNC_5(VAR_0->i_sb, VAR_1);
  FUNC_2(VAR_4);
  FUNC_4(VAR_4->b_data, 0, VAR_0->i_sb->s_blocksize);
  FUNC_6(VAR_4);
  FUNC_3(VAR_4);
  FUNC_8(VAR_4);
  if (FUNC_0(VAR_0) || VAR_3)
   FUNC_7(VAR_4);
  FUNC_1(VAR_4);
 }
}
