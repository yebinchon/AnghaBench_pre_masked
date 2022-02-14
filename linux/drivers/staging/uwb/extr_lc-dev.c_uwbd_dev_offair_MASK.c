
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_dev {int rc; } ;
struct uwb_beca_e {struct uwb_dev* uwb_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct uwb_dev*,int ) ;
 int FUNC_1 (int ,struct uwb_dev*,int ) ;

void FUNC_2(struct uwb_beca_e *VAR_1)
{
 struct uwb_dev *VAR_2;

 VAR_2 = VAR_1->uwb_dev;
 if (VAR_2) {
  FUNC_1(VAR_2->rc, VAR_2, VAR_0);
  FUNC_0(VAR_2, VAR_2->rc);
 }
}
