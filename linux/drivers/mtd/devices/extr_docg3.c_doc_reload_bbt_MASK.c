
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct docg3 {scalar_t__ max_block; int * bbt; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct docg3*,int) ;
 int FUNC_2 (struct docg3*) ;
 int FUNC_3 (struct docg3*,int,int *,int,int ) ;
 int FUNC_4 (struct docg3*,int,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct docg3 *VAR_3)
{
 int VAR_4 = VAR_0;
 int VAR_5 = 0, VAR_6, VAR_7;
 u_char *VAR_8 = VAR_3->bbt;

 VAR_6 = FUNC_0(VAR_3->max_block + 1, 8 * VAR_2);
 for (VAR_7 = 0; !VAR_5 && (VAR_7 < VAR_6); VAR_7++) {
  VAR_5 = FUNC_4(VAR_3, VAR_4, VAR_4 + 1,
         VAR_7 + VAR_1, 0);
  if (!VAR_5)
   VAR_5 = FUNC_1(VAR_3,
           VAR_2);
  if (!VAR_5)
   FUNC_3(VAR_3, VAR_2,
            VAR_8, 1, 0);
  VAR_8 += VAR_2;
 }
 FUNC_2(VAR_3);
 return VAR_5;
}
