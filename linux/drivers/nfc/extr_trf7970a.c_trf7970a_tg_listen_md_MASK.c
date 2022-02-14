
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct trf7970a {int state; int dev; } ;
struct nfc_digital_dev {int dummy; } ;
typedef int nfc_digital_cmd_complete_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfc_digital_dev*,int ,int ,void*,int) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 struct trf7970a* FUNC_2 (struct nfc_digital_dev*) ;
 int FUNC_3 (struct nfc_digital_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct nfc_digital_dev *VAR_4,
     u16 VAR_5, nfc_digital_cmd_complete_t VAR_6,
     void *VAR_7)
{
 struct trf7970a *VAR_8 = FUNC_2(VAR_4);
 int VAR_9;

 FUNC_1(VAR_8->dev, "Listen MD - state: %d, timeout: %d ms\n",
  VAR_8->state, VAR_5);

 VAR_9 = FUNC_3(VAR_4, VAR_1,
           VAR_3);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_4, VAR_0,
           VAR_2);
 if (VAR_9)
  return VAR_9;

 return FUNC_0(VAR_4, VAR_5, VAR_6, VAR_7, 1);
}
