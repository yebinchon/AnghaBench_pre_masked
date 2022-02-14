
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_super_block {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct buffer_head*,int) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (scalar_t__,struct f2fs_super_block*,int) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_5(struct buffer_head *VAR_4,
   struct f2fs_super_block *VAR_5)
{
 FUNC_1(VAR_4);
 if (VAR_5)
  FUNC_2(VAR_4->b_data + VAR_0, VAR_5, sizeof(*VAR_5));
 FUNC_3(VAR_4);
 FUNC_4(VAR_4);


 return FUNC_0(VAR_4, VAR_3 | VAR_2 | VAR_1);
}
