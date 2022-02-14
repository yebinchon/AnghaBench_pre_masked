
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct trf7970a {int state; int dev; } ;
struct nfc_digital_dev {int dummy; } ;
typedef int nfc_digital_cmd_complete_t ;


 int FUNC_0 (struct nfc_digital_dev*,int ,int ,void*,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct trf7970a* FUNC_2 (struct nfc_digital_dev*) ;

__attribute__((used)) static int FUNC_3(struct nfc_digital_dev *VAR_0, u16 VAR_1,
         nfc_digital_cmd_complete_t VAR_2, void *VAR_3)
{
 struct trf7970a *VAR_4 = FUNC_2(VAR_0);

 FUNC_1(VAR_4->dev, "Listen - state: %d, timeout: %d ms\n",
  VAR_4->state, VAR_1);

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, 0);
}
