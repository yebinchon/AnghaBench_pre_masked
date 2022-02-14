
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qca8k_priv {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct qca8k_priv*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct qca8k_priv *VAR_8, int VAR_9, int VAR_10)
{
 u32 VAR_11, VAR_12;

 switch (VAR_9) {
 case 0:
  VAR_11 = VAR_5;
  break;
 case 6:
  VAR_11 = VAR_7;
  break;
 default:
  FUNC_2("Can't set PAD_CTRL on port %d\n", VAR_9);
  return -VAR_0;
 }




 switch (VAR_10) {
 case 130:

  VAR_12 = VAR_2;
  FUNC_3(VAR_8, VAR_11, VAR_12);
  break;
 case 129:




  FUNC_3(VAR_8, VAR_11,
       VAR_2 |
       FUNC_1(VAR_1) |
       FUNC_0(VAR_1));
  FUNC_3(VAR_8, VAR_6,
       VAR_3);
  break;
 case 128:
  FUNC_3(VAR_8, VAR_11, VAR_4);
  break;
 default:
  FUNC_2("xMII mode %d not supported\n", VAR_10);
  return -VAR_0;
 }

 return 0;
}
