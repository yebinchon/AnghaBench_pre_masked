
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (char*,size_t,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_0, size_t VAR_1, struct buffer_head *VAR_2)
{
 return FUNC_3(VAR_0, VAR_1,
    "level=%d, nr_items=%d, free_space=%d rdkey ",
    FUNC_1(VAR_2), FUNC_2(VAR_2), FUNC_0(VAR_2));
}
