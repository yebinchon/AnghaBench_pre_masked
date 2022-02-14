
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct b44 {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,int *,int *,int ) ;
 int FUNC_1 (struct b44*,int ) ;
 int FUNC_2 (struct b44*,int ,int) ;
 int FUNC_3 (struct b44*,int *,int,int) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void FUNC_7(struct b44 *VAR_12)
{

 u32 VAR_13;
 int VAR_14, VAR_15, VAR_16;
 u8 *VAR_17;
 u8 VAR_18[VAR_6];

 VAR_17 = FUNC_5(VAR_4, VAR_10);
 if (!VAR_17)
  return;


 FUNC_6(VAR_18, 0, VAR_6);
 VAR_14 = FUNC_0(VAR_12->dev->dev_addr, VAR_17, VAR_18,
      VAR_1);

    FUNC_3(VAR_12, VAR_17, VAR_4, VAR_3);
    FUNC_3(VAR_12, VAR_18, VAR_6, VAR_5);


 FUNC_6(VAR_17, 0, VAR_4);
 FUNC_6(VAR_18, 0, VAR_6);
 VAR_15 = FUNC_0(VAR_12->dev->dev_addr, VAR_17, VAR_18,
      VAR_9);

    FUNC_3(VAR_12, VAR_17, VAR_4,
         VAR_3 + VAR_4);
   FUNC_3(VAR_12, VAR_18, VAR_6,
         VAR_5 + VAR_6);


 FUNC_6(VAR_17, 0, VAR_4);
 FUNC_6(VAR_18, 0, VAR_6);
 VAR_16 = FUNC_0(VAR_12->dev->dev_addr, VAR_17, VAR_18,
      VAR_2);

    FUNC_3(VAR_12, VAR_17, VAR_4,
         VAR_3 + VAR_4 + VAR_4);
   FUNC_3(VAR_12, VAR_18, VAR_6,
         VAR_5 + VAR_6 + VAR_6);

 FUNC_4(VAR_17);


 VAR_13 = VAR_14 | (VAR_15 << 8) | (VAR_16 << 16) | VAR_11;
 FUNC_2(VAR_12, VAR_7, VAR_13);


 VAR_13 = FUNC_1(VAR_12, VAR_0);
 FUNC_2(VAR_12, VAR_0, VAR_13 | VAR_8);

}
