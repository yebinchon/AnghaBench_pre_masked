
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mtk_nfc {int done; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mtk_nfc*,int ) ;
 int FUNC_2 (struct mtk_nfc*,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct mtk_nfc *VAR_6 = VAR_5;
 u16 VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_6, VAR_3);
 VAR_8 = FUNC_1(VAR_6, VAR_2);

 if (!(VAR_7 & VAR_8))
  return VAR_1;

 FUNC_2(VAR_6, ~VAR_7 & VAR_8, VAR_2);
 FUNC_0(&VAR_6->done);

 return VAR_0;
}
