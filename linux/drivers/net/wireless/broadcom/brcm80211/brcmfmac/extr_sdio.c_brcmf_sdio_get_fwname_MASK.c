
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct device {int dummy; } ;
struct brcmf_fw_request {int dummy; } ;
struct brcmf_fw_name {char const* member_0; int * member_1; } ;
struct brcmf_bus {int chiprev; int chip; } ;


 int FUNC_0 (struct brcmf_fw_name*) ;
 int VAR_0 ;
 struct brcmf_fw_request* FUNC_1 (int ,int ,struct brcmf_fw_name*,int ,struct brcmf_fw_name*,int ) ;
 struct brcmf_fw_name* VAR_1 ;
 struct brcmf_bus* FUNC_2 (struct device*) ;
 int FUNC_3 (struct brcmf_fw_request*) ;

__attribute__((used)) static
int FUNC_4(struct device *VAR_2, const char *VAR_3, u8 *VAR_4)
{
 struct brcmf_bus *VAR_5 = FUNC_2(VAR_2);
 struct brcmf_fw_request *VAR_6;
 struct brcmf_fw_name VAR_7[] = {
  { VAR_3, VAR_4 },
 };

 VAR_6 = FUNC_1(VAR_5->chip, VAR_5->chiprev,
           VAR_1,
           FUNC_0(VAR_1),
           VAR_7, FUNC_0(VAR_7));
 if (!VAR_6)
  return -VAR_0;

 FUNC_3(VAR_6);
 return 0;
}
