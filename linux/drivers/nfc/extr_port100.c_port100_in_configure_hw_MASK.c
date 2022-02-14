
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfc_digital_dev*,int) ;
 int FUNC_1 (struct nfc_digital_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct nfc_digital_dev *VAR_3, int VAR_4,
       int VAR_5)
{
 if (VAR_4 == VAR_2)
  return FUNC_1(VAR_3, VAR_5);

 if (VAR_4 == VAR_1)
  return FUNC_0(VAR_3, VAR_5);

 return -VAR_0;
}
