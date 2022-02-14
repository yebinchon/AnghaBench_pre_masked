
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mvneta_port {int bm_win_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct mvneta_port*,int ) ;
 int FUNC_4 (struct mvneta_port*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct mvneta_port *VAR_4, u32 VAR_5, u32 VAR_6,
      u8 VAR_7, u8 VAR_8)
{
 u32 VAR_9, VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_4, VAR_2);

 if (VAR_4->bm_win_id < 0) {

  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   if (VAR_9 & (1 << VAR_11)) {
    VAR_4->bm_win_id = VAR_11;
    break;
   }
  }
  if (VAR_11 == VAR_3)
   return -VAR_0;
 } else {
  VAR_11 = VAR_4->bm_win_id;
 }

 FUNC_4(VAR_4, FUNC_0(VAR_11), 0);
 FUNC_4(VAR_4, FUNC_2(VAR_11), 0);

 if (VAR_11 < 4)
  FUNC_4(VAR_4, FUNC_1(VAR_11), 0);

 FUNC_4(VAR_4, FUNC_0(VAR_11), (VAR_5 & 0xffff0000) |
      (VAR_8 << 8) | VAR_7);

 FUNC_4(VAR_4, FUNC_2(VAR_11), (VAR_6 - 1) & 0xffff0000);

 VAR_10 = FUNC_3(VAR_4, VAR_1);
 VAR_10 |= 3 << (2 * VAR_11);
 FUNC_4(VAR_4, VAR_1, VAR_10);

 VAR_9 &= ~(1 << VAR_11);
 FUNC_4(VAR_4, VAR_2, VAR_9);

 return 0;
}
