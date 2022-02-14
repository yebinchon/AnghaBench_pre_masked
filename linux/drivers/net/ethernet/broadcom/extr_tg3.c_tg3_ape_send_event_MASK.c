
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tg3 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct tg3*,int) ;
 int FUNC_1 (struct tg3*,int ) ;
 int FUNC_2 (struct tg3*,int ) ;
 int FUNC_3 (struct tg3*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct tg3 *VAR_10, u32 VAR_11)
{
 int VAR_12;
 u32 VAR_13;

 VAR_13 = FUNC_1(VAR_10, VAR_9);
 if (VAR_13 != VAR_3)
  return -VAR_4;

 VAR_13 = FUNC_1(VAR_10, VAR_7);
 if (!(VAR_13 & VAR_2))
  return -VAR_4;


 VAR_12 = FUNC_0(VAR_10, 20000);
 if (VAR_12)
  return VAR_12;

 FUNC_3(VAR_10, VAR_6,
   VAR_11 | VAR_1);

 FUNC_2(VAR_10, VAR_8);
 FUNC_3(VAR_10, VAR_5, VAR_0);

 return 0;
}
