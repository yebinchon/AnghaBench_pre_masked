
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rt2x00_dev {TYPE_1__* dev; } ;
struct TYPE_2__ {int of_node; } ;


 int FUNC_0 (char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (struct rt2x00_dev*,char*,int *) ;

void FUNC_6(struct rt2x00_dev *VAR_0, u8 *VAR_1)
{
 const char *VAR_2;

 VAR_2 = FUNC_4(VAR_0->dev->of_node);
 if (!FUNC_0(VAR_2))
  FUNC_2(VAR_1, VAR_2);

 if (!FUNC_3(VAR_1)) {
  FUNC_1(VAR_1);
  FUNC_5(VAR_0, "MAC: %pM\n", VAR_1);
 }
}
