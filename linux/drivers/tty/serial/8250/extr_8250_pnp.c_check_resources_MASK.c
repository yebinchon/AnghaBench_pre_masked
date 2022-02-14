
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;
typedef int resource_size_t ;


 unsigned int FUNC_0 (int const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct pnp_dev*,int ,int const,int) ;

__attribute__((used)) static bool FUNC_2(struct pnp_dev *VAR_1)
{
 static const resource_size_t VAR_2[] = {0x2f8, 0x3f8, 0x2e8, 0x3e8};
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  if (FUNC_1(VAR_1, VAR_0, VAR_2[VAR_3], 8))
   return 1;
 }

 return 0;
}
