
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvpp2 {TYPE_1__* prs_shadow; } ;
struct TYPE_2__ {int valid; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (unsigned char,unsigned char) ;

__attribute__((used)) static int FUNC_1(struct mvpp2 *VAR_2, unsigned char VAR_3,
         unsigned char VAR_4)
{
 int VAR_5;

 if (VAR_3 > VAR_4)
  FUNC_0(VAR_3, VAR_4);

 if (VAR_4 >= VAR_1)
  VAR_4 = VAR_1 - 1;

 for (VAR_5 = VAR_3; VAR_5 <= VAR_4; VAR_5++) {
  if (!VAR_2->prs_shadow[VAR_5].valid)
   return VAR_5;
 }

 return -VAR_0;
}
