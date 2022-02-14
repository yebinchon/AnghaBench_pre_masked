
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_size; } ;
struct block_head {int dummy; } ;


 int VAR_0 ;
 struct block_head* FUNC_0 (struct buffer_head*) ;
 int VAR_1 ;
 int FUNC_1 (struct block_head*) ;
 int FUNC_2 (struct block_head*) ;
 int FUNC_3 (int *,char*,char*,struct buffer_head*) ;

__attribute__((used)) static void FUNC_4(struct buffer_head *VAR_2)
{
 struct block_head *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 > (VAR_2->b_size - VAR_0) / VAR_1)
  FUNC_3(((void*)0), "vs-6010", "invalid item number %z",
          VAR_2);
 if (FUNC_1(VAR_3) > VAR_2->b_size - VAR_0 - VAR_1 * VAR_4)
  FUNC_3(((void*)0), "vs-6020", "invalid free space %z",
          VAR_2);

}
