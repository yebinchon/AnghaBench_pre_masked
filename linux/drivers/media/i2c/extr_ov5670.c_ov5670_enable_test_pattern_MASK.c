
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ov5670 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct ov5670*,int ,int ,scalar_t__*) ;
 int FUNC_1 (struct ov5670*,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ov5670 *VAR_4, u32 VAR_5)
{
 u32 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_1(VAR_4, VAR_1,
          VAR_2, 0);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_0,
         VAR_2, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_5)
  VAR_6 |= VAR_3;
 else
  VAR_6 &= ~VAR_3;

 return FUNC_1(VAR_4, VAR_0,
    VAR_2, VAR_6);
}
