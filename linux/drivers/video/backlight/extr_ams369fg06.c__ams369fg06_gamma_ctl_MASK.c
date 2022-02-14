
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ams369fg06 {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ams369fg06*,int,unsigned int const) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct ams369fg06 *VAR_1,
 const unsigned int *VAR_2)
{
 unsigned int VAR_3 = 0;
 int VAR_4 = 0;

 for (VAR_3 = 0 ; VAR_3 < VAR_0 / 3; VAR_3++) {
  VAR_4 = FUNC_0(VAR_1, 0x40 + VAR_3, VAR_2[VAR_3]);
  VAR_4 = FUNC_0(VAR_1, 0x50 + VAR_3, VAR_2[VAR_3+7*1]);
  VAR_4 = FUNC_0(VAR_1, 0x60 + VAR_3, VAR_2[VAR_3+7*2]);
  if (VAR_4) {
   FUNC_1(VAR_1->dev, "failed to set gamma table.\n");
   goto gamma_err;
  }
 }

gamma_err:
 return VAR_4;
}
