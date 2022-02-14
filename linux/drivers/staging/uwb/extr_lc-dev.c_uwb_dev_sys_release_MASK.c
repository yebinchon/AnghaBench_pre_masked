
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_dev {int bce; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct uwb_dev*) ;
 int FUNC_1 (struct uwb_dev*,int,int) ;
 struct uwb_dev* FUNC_2 (struct device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct uwb_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->bce);
 FUNC_1(VAR_1, 0x69, sizeof(*VAR_1));
 FUNC_0(VAR_1);
}
