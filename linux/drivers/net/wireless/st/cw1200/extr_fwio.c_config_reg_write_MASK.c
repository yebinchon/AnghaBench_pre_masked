
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct cw1200_common {int hw_type; } ;





 int VAR_0 ;
 int FUNC_0 (struct cw1200_common*,int ,int ) ;
 int FUNC_1 (struct cw1200_common*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct cw1200_common *VAR_1, u32 VAR_2)
{
 switch (VAR_1->hw_type) {
 case 128:
  return FUNC_0(VAR_1,
        VAR_0,
        (u16)VAR_2);
 case 129:
 case 130:
 default:
  return FUNC_1(VAR_1, VAR_0, VAR_2);
 }
 return 0;
}
