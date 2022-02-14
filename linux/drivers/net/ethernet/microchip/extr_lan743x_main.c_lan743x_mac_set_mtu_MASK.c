
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan743x_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lan743x_adapter*,int ) ;
 int FUNC_1 (struct lan743x_adapter*,int ,int,int,int,int,int) ;
 int FUNC_2 (struct lan743x_adapter*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct lan743x_adapter *VAR_6, int VAR_7)
{
 int VAR_8 = 0;
 u32 VAR_9 = 0;

 VAR_9 = FUNC_0(VAR_6, VAR_1);
 if (VAR_9 & VAR_5) {
  VAR_8 = 1;
  if (VAR_9 & VAR_4) {
   FUNC_2(VAR_6, VAR_1, VAR_9);
   VAR_9 &= ~VAR_4;
  }
  VAR_9 &= ~VAR_5;
  FUNC_2(VAR_6, VAR_1, VAR_9);
  FUNC_1(VAR_6, VAR_1, VAR_4,
      1, 1000, 20000, 100);
  FUNC_2(VAR_6, VAR_1, VAR_9 | VAR_4);
 }

 VAR_9 &= ~(VAR_2);
 VAR_9 |= (((VAR_7 + VAR_0 + 4) << VAR_3) &
    VAR_2);
 FUNC_2(VAR_6, VAR_1, VAR_9);

 if (VAR_8) {
  VAR_9 |= VAR_5;
  FUNC_2(VAR_6, VAR_1, VAR_9);
 }
 return 0;
}
