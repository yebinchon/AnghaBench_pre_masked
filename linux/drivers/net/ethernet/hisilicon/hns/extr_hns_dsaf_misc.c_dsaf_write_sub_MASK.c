
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_device {int sc_base; scalar_t__ sub_ctrl; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct dsaf_device *VAR_0, u32 VAR_1, u32 VAR_2)
{
 if (VAR_0->sub_ctrl)
  FUNC_1(VAR_0->sub_ctrl, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0->sc_base, VAR_1, VAR_2);
}
