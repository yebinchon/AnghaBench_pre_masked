
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venus_inst {int dummy; } ;
struct venus_format {scalar_t__ pixfmt; scalar_t__ type; } ;


 unsigned int FUNC_0 (struct venus_format*) ;
 scalar_t__ VAR_0 ;
 struct venus_format* VAR_1 ;
 int FUNC_1 (struct venus_inst*,scalar_t__) ;

__attribute__((used)) static const struct venus_format *
FUNC_2(struct venus_inst *VAR_2, u32 VAR_3, u32 VAR_4)
{
 const struct venus_format *VAR_5 = VAR_1;
 unsigned int VAR_6 = FUNC_0(VAR_1);
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (VAR_5[VAR_7].pixfmt == VAR_3)
   break;
 }

 if (VAR_7 == VAR_6 || VAR_5[VAR_7].type != VAR_4)
  return ((void*)0);

 if (VAR_4 == VAR_0 &&
     !FUNC_1(VAR_2, VAR_5[VAR_7].pixfmt))
  return ((void*)0);

 return &VAR_5[VAR_7];
}
