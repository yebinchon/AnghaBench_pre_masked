
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max2175 {int decim_ratio; } ;


 unsigned int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (struct max2175*,unsigned int,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct max2175 *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  FUNC_1(VAR_1, VAR_2 + 1, VAR_0[VAR_2]);

 FUNC_2(5000, 5500);
 VAR_1->decim_ratio = 27;
}
