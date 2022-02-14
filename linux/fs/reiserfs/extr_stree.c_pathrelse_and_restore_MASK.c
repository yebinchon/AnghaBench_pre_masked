
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int path_length; } ;
struct super_block {int dummy; } ;
struct buffer_head {int dummy; } ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (struct treepath*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct super_block*,struct buffer_head*) ;

void FUNC_4(struct super_block *VAR_1,
      struct treepath *VAR_2)
{
 int VAR_3 = VAR_2->path_length;

 FUNC_1(VAR_3 < VAR_0,
        "clm-4000: invalid path offset");

 while (VAR_3 > VAR_0) {
  struct buffer_head *VAR_4;
  VAR_4 = FUNC_0(VAR_2, VAR_3--);
  FUNC_3(VAR_1, VAR_4);
  FUNC_2(VAR_4);
 }
 VAR_2->path_length = VAR_0;
}
