
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct buffer_head* s_sbh; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct super_block*,int ,char*) ;
 int FUNC_4 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_5(struct super_block *VAR_1)
{
 struct buffer_head *VAR_2 = FUNC_0(VAR_1)->s_sbh;

 if (FUNC_1(VAR_2)) {
  FUNC_3(VAR_1, VAR_0,
         "previous I/O error to superblock detected");
  FUNC_2(VAR_2);
  FUNC_4(VAR_2);
 }
}
