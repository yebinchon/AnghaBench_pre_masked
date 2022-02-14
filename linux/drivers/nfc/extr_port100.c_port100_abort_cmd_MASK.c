
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port100 {int in_urb; } ;
struct nfc_digital_dev {int dummy; } ;


 struct port100* FUNC_0 (struct nfc_digital_dev*) ;
 int FUNC_1 (struct port100*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nfc_digital_dev *VAR_0)
{
 struct port100 *VAR_1 = FUNC_0(VAR_0);


 FUNC_1(VAR_1);


 FUNC_2(VAR_1->in_urb);
}
