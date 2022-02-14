
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {struct ethoc* priv; } ;
struct ethoc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct ethoc*,int ) ;
 int FUNC_2 (struct ethoc*,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct mii_bus *VAR_7, int VAR_8, int VAR_9)
{
 struct ethoc *VAR_10 = VAR_7->priv;
 int VAR_11;

 FUNC_2(VAR_10, VAR_1, FUNC_0(VAR_8, VAR_9));
 FUNC_2(VAR_10, VAR_2, VAR_3);

 for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
  u32 VAR_12 = FUNC_1(VAR_10, VAR_5);
  if (!(VAR_12 & VAR_6)) {
   u32 VAR_13 = FUNC_1(VAR_10, VAR_4);

   FUNC_2(VAR_10, VAR_2, 0);
   return VAR_13;
  }
  FUNC_3(100, 200);
 }

 return -VAR_0;
}
