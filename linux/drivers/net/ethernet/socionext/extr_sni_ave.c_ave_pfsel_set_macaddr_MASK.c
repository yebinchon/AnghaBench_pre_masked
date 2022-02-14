
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ave_private {scalar_t__ base; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_3 (unsigned int) ;
 int VAR_4 ;
 int FUNC_4 (int,unsigned int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct net_device*,unsigned char const*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct net_device*,unsigned int) ;
 int FUNC_8 (struct net_device*,unsigned int) ;
 struct ave_private* FUNC_9 (struct net_device*) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_5,
     unsigned int VAR_6,
     const unsigned char *VAR_7,
     unsigned int VAR_8)
{
 struct ave_private *VAR_9 = FUNC_9(VAR_5);

 if (FUNC_5(VAR_6 > VAR_3))
  return -VAR_4;
 if (FUNC_5(VAR_8 > 6))
  return -VAR_4;

 FUNC_8(VAR_5, VAR_6);


 FUNC_6(VAR_5, VAR_7,
        FUNC_3(VAR_6), FUNC_3(VAR_6) + 4);


 FUNC_10(FUNC_4(31, VAR_8) & VAR_1,
        VAR_9->base + FUNC_1(VAR_6));
 FUNC_10(VAR_2, VAR_9->base + FUNC_1(VAR_6) + 4);


 FUNC_10(VAR_0, VAR_9->base + FUNC_0(VAR_6));


 FUNC_10(0, VAR_9->base + FUNC_2(VAR_6));


 FUNC_7(VAR_5, VAR_6);

 return 0;
}
