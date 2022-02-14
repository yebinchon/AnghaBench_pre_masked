
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ave_private {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,unsigned int) ;
 int FUNC_5 (struct net_device*,unsigned int) ;
 struct ave_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_4,
      unsigned int VAR_5, u32 VAR_6)
{
 struct ave_private *VAR_7 = FUNC_6(VAR_4);

 if (FUNC_3(VAR_5 > VAR_3))
  return;

 FUNC_5(VAR_4, VAR_5);


 FUNC_7(VAR_1, VAR_7->base + FUNC_1(VAR_5));
 FUNC_7(VAR_2, VAR_7->base + FUNC_1(VAR_5) + 4);


 FUNC_7(VAR_0, VAR_7->base + FUNC_0(VAR_5));


 FUNC_7(VAR_6, VAR_7->base + FUNC_2(VAR_5));

 FUNC_4(VAR_4, VAR_5);
}
