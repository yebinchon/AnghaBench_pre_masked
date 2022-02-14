
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int b_page; } ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_6(struct buffer_head *VAR_1)
{
 void *VAR_2;
 __be32 *VAR_3;

 FUNC_1(VAR_1);
 VAR_2 = FUNC_3(VAR_1->b_page);
 VAR_3 = VAR_2 + FUNC_0(VAR_1);
 if (*VAR_3 == FUNC_2(VAR_0))
  FUNC_5(VAR_1);
 FUNC_4(VAR_2);
}
