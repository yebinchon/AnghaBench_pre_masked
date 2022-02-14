
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acm_wb {int dmah; int buf; } ;
struct acm {int writesize; int dev; struct acm_wb* wb; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct acm *VAR_1)
{
 int VAR_2;
 struct acm_wb *VAR_3;

 for (VAR_3 = &VAR_1->wb[0], VAR_2 = 0; VAR_2 < VAR_0; VAR_2++, VAR_3++)
  FUNC_0(VAR_1->dev, VAR_1->writesize, VAR_3->buf, VAR_3->dmah);
}
