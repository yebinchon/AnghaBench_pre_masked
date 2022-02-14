
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct genwqe_dev {int slu_unitcfg; } ;


 size_t FUNC_0 (int const*) ;

int FUNC_1(struct genwqe_dev *VAR_0)
{
 u16 VAR_1;
 static const int VAR_2[] = { 250, 200, 166, 175 };

 VAR_1 = (u16)((VAR_0->slu_unitcfg >> 28) & 0x0full);
 if (VAR_1 >= FUNC_0(VAR_2))
  return 0;

 return VAR_2[VAR_1];
}
