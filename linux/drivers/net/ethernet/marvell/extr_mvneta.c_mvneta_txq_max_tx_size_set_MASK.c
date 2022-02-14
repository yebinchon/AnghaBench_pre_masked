
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mvneta_port*,int ) ;
 int FUNC_2 (struct mvneta_port*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_3(struct mvneta_port *VAR_6, int VAR_7)

{
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11;

 VAR_10 = VAR_7 * 8;
 if (VAR_10 > VAR_2)
  VAR_10 = VAR_2;


 VAR_8 = FUNC_1(VAR_6, VAR_1);
 VAR_8 &= ~VAR_2;
 VAR_8 |= VAR_10;
 FUNC_2(VAR_6, VAR_1, VAR_8);


 VAR_8 = FUNC_1(VAR_6, VAR_3);

 VAR_9 = VAR_8 & VAR_4;
 if (VAR_9 < VAR_10) {
  VAR_9 = VAR_10;
  VAR_8 &= ~VAR_4;
  VAR_8 |= VAR_9;
  FUNC_2(VAR_6, VAR_3, VAR_8);
 }
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_8 = FUNC_1(VAR_6, FUNC_0(VAR_11));

  VAR_9 = VAR_8 & VAR_0;
  if (VAR_9 < VAR_10) {
   VAR_9 = VAR_10;
   VAR_8 &= ~VAR_0;
   VAR_8 |= VAR_9;
   FUNC_2(VAR_6, FUNC_0(VAR_11), VAR_8);
  }
 }
}
