
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_adapter {int * tx; int * rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_2 (struct lan743x_adapter*,int ,int) ;
 int FUNC_3 (struct lan743x_adapter*) ;
 int FUNC_4 (struct lan743x_adapter*) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static void FUNC_7(void *VAR_8, u32 VAR_9, u32 VAR_10)
{
 struct lan743x_adapter *VAR_11 = VAR_8;
 unsigned int VAR_12;

 if (VAR_9 & VAR_2) {
  for (VAR_12 = 0; VAR_12 < VAR_6;
   VAR_12++) {
   u32 VAR_13 = FUNC_0(VAR_12);

   if (VAR_9 & VAR_13) {
    FUNC_5(&VAR_11->rx[VAR_12],
            VAR_13, VAR_10);
    VAR_9 &= ~VAR_13;
   }
  }
 }
 if (VAR_9 & VAR_3) {
  for (VAR_12 = 0; VAR_12 < VAR_7;
   VAR_12++) {
   u32 VAR_14 = FUNC_1(VAR_12);

   if (VAR_9 & VAR_14) {
    FUNC_6(&VAR_11->tx[VAR_12],
            VAR_14, VAR_10);
    VAR_9 &= ~VAR_14;
   }
  }
 }
 if (VAR_9 & VAR_1) {
  if (VAR_9 & VAR_4) {
   FUNC_3(VAR_11);
   VAR_9 &= ~VAR_4;
  }
  if (VAR_9 & VAR_0) {
   FUNC_4(VAR_11);
   VAR_9 &= ~VAR_0;
  }
 }
 if (VAR_9)
  FUNC_2(VAR_11, VAR_5, VAR_9);
}
