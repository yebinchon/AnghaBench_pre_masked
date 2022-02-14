
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8152 {TYPE_1__* tx_info; int flags; } ;
struct TYPE_2__ {int urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct r8152*,int ,int ) ;
 int FUNC_1 (struct r8152*,int ,int ) ;
 int FUNC_2 (struct r8152*,int ,int ) ;
 int FUNC_3 (struct r8152*,int ,int ,int) ;
 int FUNC_4 (struct r8152*) ;
 int FUNC_5 (struct r8152*) ;
 int FUNC_6 (struct r8152*) ;
 int FUNC_7 (struct r8152*,int) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static void FUNC_11(struct r8152 *VAR_9)
{
 u32 VAR_10;
 int VAR_11;

 if (FUNC_8(VAR_7, &VAR_9->flags)) {
  FUNC_5(VAR_9);
  return;
 }

 VAR_10 = FUNC_1(VAR_9, VAR_1, VAR_3);
 VAR_10 &= ~VAR_5;
 FUNC_3(VAR_9, VAR_1, VAR_3, VAR_10);

 FUNC_5(VAR_9);

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  FUNC_9(VAR_9->tx_info[VAR_11].urb);

 FUNC_7(VAR_9, 1);

 for (VAR_11 = 0; VAR_11 < 1000; VAR_11++) {
  VAR_10 = FUNC_0(VAR_9, VAR_1, VAR_2);
  if ((VAR_10 & VAR_0) == VAR_0)
   break;
  FUNC_10(1000, 2000);
 }

 for (VAR_11 = 0; VAR_11 < 1000; VAR_11++) {
  if (FUNC_2(VAR_9, VAR_1, VAR_4) & VAR_8)
   break;
  FUNC_10(1000, 2000);
 }

 FUNC_6(VAR_9);

 FUNC_4(VAR_9);
}
