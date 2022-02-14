
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct r8152 {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct r8152*,int ,int ,char*) ;
 int FUNC_1 (struct r8152*,int ) ;
 int FUNC_2 (struct r8152*,int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct r8152 *VAR_6, bool VAR_7)
{
 u16 VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_6, VAR_1);
 if (VAR_7)
  VAR_8 |= VAR_4;
 else
  VAR_8 &= ~VAR_4;
 FUNC_2(VAR_6, VAR_1, VAR_8);

 for (VAR_9 = 0; VAR_7 && VAR_9 < 5000; VAR_9++) {
  FUNC_3(1000, 2000);
  if (FUNC_1(VAR_6, VAR_2) & VAR_3)
   break;
 }

 if (VAR_7 && !(FUNC_1(VAR_6, VAR_2) & VAR_3)) {
  FUNC_0(VAR_6, VAR_5, VAR_6->netdev, "patch request fail\n");
  FUNC_4(VAR_6, 0);
  return -VAR_0;
 } else {
  return 0;
 }
}
