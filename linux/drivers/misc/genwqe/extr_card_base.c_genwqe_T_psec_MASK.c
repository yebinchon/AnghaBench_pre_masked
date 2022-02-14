
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct genwqe_dev {int slu_unitcfg; } ;


 size_t FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(struct genwqe_dev *VAR_0)
{
 u16 VAR_1;
 static const int VAR_2[] = { 4000, 5000, 6000, 5714 };

 VAR_1 = (u16)((VAR_0->slu_unitcfg >> 28) & 0x0full);
 if (VAR_1 >= FUNC_0(VAR_2))
  return -1;

 return VAR_2[VAR_1];
}
