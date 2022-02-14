
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg3 {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct tg3* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct tg3*) ;
 int FUNC_3 (struct tg3*,int) ;
 int FUNC_4 (struct tg3*) ;
 int FUNC_5 (struct tg3*,int ,int) ;
 int FUNC_6 (struct tg3*) ;
 int FUNC_7 (struct tg3*) ;
 int FUNC_8 (struct tg3*) ;
 int FUNC_9 (struct tg3*) ;
 int FUNC_10 (struct tg3*,int) ;
 int FUNC_11 (struct net_device*,struct tg3*,int) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_5, int VAR_6)
{
 struct tg3 *VAR_7 = FUNC_0(VAR_5);
 int VAR_8;
 bool VAR_9 = 0;

 if (!FUNC_1(VAR_5)) {



  FUNC_11(VAR_5, VAR_7, VAR_6);
  return 0;
 }

 FUNC_9(VAR_7);

 FUNC_7(VAR_7);

 FUNC_11(VAR_5, VAR_7, VAR_6);

 FUNC_3(VAR_7, 1);

 FUNC_5(VAR_7, VAR_4, 1);




 if (FUNC_2(VAR_7) == VAR_3 ||
     FUNC_2(VAR_7) == VAR_0 ||
     FUNC_2(VAR_7) == VAR_1 ||
     FUNC_2(VAR_7) == VAR_2)
  VAR_9 = 1;

 VAR_8 = FUNC_10(VAR_7, VAR_9);

 if (!VAR_8)
  FUNC_6(VAR_7);

 FUNC_4(VAR_7);

 if (!VAR_8)
  FUNC_8(VAR_7);

 return VAR_8;
}
