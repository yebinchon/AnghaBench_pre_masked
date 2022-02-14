
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mt9m111_datafmt {scalar_t__ code; } ;
struct mt9m111 {struct mt9m111_datafmt const* fmt; } ;


 int FUNC_0 (struct mt9m111_datafmt const*) ;
 struct mt9m111_datafmt const* VAR_0 ;

__attribute__((used)) static const struct mt9m111_datafmt *FUNC_1(struct mt9m111 *VAR_1,
      u32 VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
  if (VAR_0[VAR_3].code == VAR_2)
   return VAR_0 + VAR_3;

 return VAR_1->fmt;
}
