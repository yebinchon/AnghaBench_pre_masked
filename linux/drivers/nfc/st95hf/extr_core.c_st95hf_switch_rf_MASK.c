
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct st95hf_context {int dummy; } ;
struct nfc_digital_dev {int curr_rf_tech; } ;


 struct st95hf_context* FUNC_0 (struct nfc_digital_dev*) ;
 int FUNC_1 (struct st95hf_context*) ;
 int FUNC_2 (struct st95hf_context*,int ) ;

__attribute__((used)) static int FUNC_3(struct nfc_digital_dev *VAR_0, bool VAR_1)
{
 u8 VAR_2;
 struct st95hf_context *VAR_3 = FUNC_0(VAR_0);

 VAR_2 = VAR_0->curr_rf_tech;

 if (VAR_1)

  return FUNC_2(VAR_3, VAR_2);


 return FUNC_1(VAR_3);
}
