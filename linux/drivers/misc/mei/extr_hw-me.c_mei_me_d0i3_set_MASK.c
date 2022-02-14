
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mei_device*) ;
 int FUNC_1 (struct mei_device*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct mei_device *VAR_2, bool VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_2);

 VAR_4 |= VAR_0;
 if (VAR_3)
  VAR_4 |= VAR_1;
 else
  VAR_4 &= ~VAR_1;
 FUNC_1(VAR_2, VAR_4);

 VAR_4 = FUNC_0(VAR_2);
 return VAR_4;
}
