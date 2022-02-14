
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ave_private {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 struct ave_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, unsigned int VAR_4)
{
 struct ave_private *VAR_5 = FUNC_2(VAR_3);
 u32 VAR_6;

 if (FUNC_1(VAR_4 > VAR_1))
  return -VAR_2;

 VAR_6 = FUNC_3(VAR_5->base + VAR_0);
 FUNC_4(VAR_6 | FUNC_0(VAR_4), VAR_5->base + VAR_0);

 return 0;
}
