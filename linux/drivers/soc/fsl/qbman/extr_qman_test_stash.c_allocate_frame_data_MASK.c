
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int) ;
 int VAR_6 ;
 int FUNC_1 (int ,int *,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 TYPE_1__* VAR_9 ;
 int FUNC_6 (char*) ;
 int VAR_10 ;
 TYPE_1__* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(void)
{
 u32 VAR_11 = VAR_4;
 int VAR_12;

 if (!VAR_10) {
  FUNC_6("portal not available\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_7(VAR_10);

 VAR_6 = FUNC_5(4 * VAR_5, VAR_3);
 if (!VAR_6)
  return -VAR_2;

 VAR_8 = FUNC_0(VAR_6, 64);
 for (VAR_12 = 0; VAR_12 < VAR_5; VAR_12++) {
  VAR_8[VAR_12] = VAR_11;
  VAR_11 = FUNC_3(VAR_11);
 }

 VAR_7 = FUNC_1(VAR_9->dev, VAR_8, 4 * VAR_5,
       VAR_0);
 if (FUNC_2(VAR_9->dev, VAR_7)) {
  FUNC_6("dma mapping failure\n");
  FUNC_4(VAR_6);
  return -VAR_1;
 }

 return 0;
}
