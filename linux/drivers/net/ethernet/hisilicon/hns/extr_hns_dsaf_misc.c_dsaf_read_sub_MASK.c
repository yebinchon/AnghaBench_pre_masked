
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_device {int sc_base; int dev; scalar_t__ sub_ctrl; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int *) ;

__attribute__((used)) static u32 FUNC_3(struct dsaf_device *VAR_0, u32 VAR_1)
{
 u32 VAR_2 = 0;
 int VAR_3;

 if (VAR_0->sub_ctrl) {
  VAR_3 = FUNC_2(VAR_0->sub_ctrl, VAR_1, &VAR_2);
  if (VAR_3)
   FUNC_0(VAR_0->dev, "dsaf_read_syscon error %d!\n",
    VAR_3);
 } else {
  VAR_2 = FUNC_1(VAR_0->sc_base, VAR_1);
 }

 return VAR_2;
}
