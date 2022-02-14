
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_me_hw {scalar_t__ d0i3_supported; } ;
struct mei_device {int dummy; } ;


 int FUNC_0 (struct mei_device*,int ) ;
 int FUNC_1 (struct mei_device*) ;
 struct mei_me_hw* FUNC_2 (struct mei_device*) ;

__attribute__((used)) static void FUNC_3(struct mei_device *VAR_0, u32 VAR_1)
{
 struct mei_me_hw *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2->d0i3_supported)
  FUNC_0(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0);
}
