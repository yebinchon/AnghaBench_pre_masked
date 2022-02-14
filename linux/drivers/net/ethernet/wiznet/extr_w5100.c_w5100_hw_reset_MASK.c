
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct w5100_priv {TYPE_1__* ops; } ;
struct TYPE_2__ {int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (struct w5100_priv*) ;
 int FUNC_1 (struct w5100_priv*) ;
 scalar_t__ FUNC_2 (struct w5100_priv*,int ) ;
 int FUNC_3 (struct w5100_priv*) ;
 int FUNC_4 (struct w5100_priv*) ;
 int FUNC_5 (struct w5100_priv*) ;
 int FUNC_6 (struct w5100_priv*) ;

__attribute__((used)) static int FUNC_7(struct w5100_priv *VAR_5)
{
 u32 VAR_6;

 FUNC_3(VAR_5);

 FUNC_0(VAR_5);
 FUNC_4(VAR_5);

 switch (VAR_5->ops->chip_id) {
 case 130:
  FUNC_1(VAR_5);
  VAR_6 = VAR_3;
  break;
 case 129:
  FUNC_5(VAR_5);
  VAR_6 = VAR_3;
  break;
 case 128:
  FUNC_6(VAR_5);
  VAR_6 = VAR_4;
  break;
 default:
  return -VAR_0;
 }

 if (FUNC_2(VAR_5, VAR_6) != VAR_2)
  return -VAR_1;

 return 0;
}
