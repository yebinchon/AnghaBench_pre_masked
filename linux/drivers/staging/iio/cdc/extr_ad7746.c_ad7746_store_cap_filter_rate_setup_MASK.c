
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad7746_chip_info {int config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int**) ;
 int** VAR_2 ;

__attribute__((used)) static int FUNC_1(struct ad7746_chip_info *VAR_3,
           int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  if (VAR_4 >= VAR_2[VAR_5][0])
   break;

 if (VAR_5 >= FUNC_0(VAR_2))
  VAR_5 = FUNC_0(VAR_2) - 1;

 VAR_3->config &= ~VAR_0;
 VAR_3->config |= VAR_5 << VAR_1;

 return 0;
}
