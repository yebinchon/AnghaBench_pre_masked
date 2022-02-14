
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venus_inst {int dummy; } ;
struct venus_format {scalar_t__ type; int pixfmt; } ;


 unsigned int FUNC_0 (struct venus_format*) ;
 scalar_t__ VAR_0 ;
 struct venus_format* VAR_1 ;
 scalar_t__ FUNC_1 (struct venus_inst*,int ) ;

__attribute__((used)) static const struct venus_format *
FUNC_2(struct venus_inst *VAR_2, unsigned int VAR_3, u32 VAR_4)
{
 const struct venus_format *VAR_5 = VAR_1;
 unsigned int VAR_6 = FUNC_0(VAR_1);
 unsigned int VAR_7, VAR_8 = 0;

 if (VAR_3 > VAR_6)
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  bool VAR_9;

  if (VAR_5[VAR_7].type != VAR_4)
   continue;
  VAR_9 = VAR_4 != VAR_0 ||
   FUNC_1(VAR_2, VAR_5[VAR_7].pixfmt);
  if (VAR_8 == VAR_3 && VAR_9)
   break;
  if (VAR_9)
   VAR_8++;
 }

 if (VAR_7 == VAR_6)
  return ((void*)0);

 return &VAR_5[VAR_7];
}
