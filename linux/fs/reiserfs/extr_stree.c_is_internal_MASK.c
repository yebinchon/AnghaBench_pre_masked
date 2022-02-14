
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct block_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct block_head*) ;
 int FUNC_1 (struct block_head*) ;
 int FUNC_2 (struct block_head*) ;
 int FUNC_3 (int *,char*,char*,...) ;

__attribute__((used)) static int FUNC_4(char *VAR_5, int VAR_6, struct buffer_head *VAR_7)
{
 struct block_head *VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_8 = (struct block_head *)VAR_5;
 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9 <= VAR_2 || VAR_9 > VAR_4) {

  FUNC_3(((void*)0), "reiserfs-5087",
     "this should be caught earlier");
  return 0;
 }

 VAR_9 = FUNC_2(VAR_8);

 if (VAR_9 > (VAR_6 - VAR_0 - VAR_1) / (VAR_3 + VAR_1)) {
  FUNC_3(((void*)0), "reiserfs-5088",
     "number of key seems wrong: %z", VAR_7);
  return 0;
 }

 VAR_10 = VAR_0 + VAR_3 * VAR_9 + VAR_1 * (VAR_9 + 1);
 if (VAR_10 != VAR_6 - FUNC_0(VAR_8)) {
  FUNC_3(((void*)0), "reiserfs-5089",
     "free space seems wrong: %z", VAR_7);
  return 0;
 }


 return 1;
}
