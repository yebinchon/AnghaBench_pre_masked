
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hva_enc {int (* open ) (struct hva_ctx*) ;int name; } ;
struct hva_dev {int instance_id; } ;
struct hva_ctx {int name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (struct hva_ctx*) ;
 struct hva_dev* FUNC_1 (struct hva_ctx*) ;
 int FUNC_2 (struct device*,char*,int ,char*,...) ;
 int FUNC_3 (struct device*,char*,int ,...) ;
 scalar_t__ FUNC_4 (struct hva_ctx*,int ,int ) ;
 int FUNC_5 (int ,int,char*,int,char*) ;
 int FUNC_6 (struct hva_ctx*) ;

__attribute__((used)) static int FUNC_7(struct hva_ctx *VAR_1, u32 VAR_2,
       u32 VAR_3, struct hva_enc **VAR_4)
{
 struct hva_dev *VAR_5 = FUNC_1(VAR_1);
 struct device *VAR_6 = FUNC_0(VAR_1);
 struct hva_enc *VAR_7;
 int VAR_8;


 VAR_7 = (struct hva_enc *)FUNC_4(VAR_1, VAR_3,
       VAR_2);
 if (!VAR_7) {
  FUNC_3(VAR_6, "%s no encoder found matching %4.4s => %4.4s\n",
   VAR_1->name, (char *)&VAR_3, (char *)&VAR_2);
  return -VAR_0;
 }

 FUNC_2(VAR_6, "%s one encoder matching %4.4s => %4.4s\n",
  VAR_1->name, (char *)&VAR_3, (char *)&VAR_2);


 FUNC_5(VAR_1->name, sizeof(VAR_1->name), "[%3d:%4.4s]",
   VAR_5->instance_id, (char *)&VAR_2);


 VAR_8 = VAR_7->open(VAR_1);
 if (VAR_8) {
  FUNC_3(VAR_6, "%s failed to open encoder instance (%d)\n",
   VAR_1->name, VAR_8);
  return VAR_8;
 }

 FUNC_2(VAR_6, "%s %s encoder opened\n", VAR_1->name, VAR_7->name);

 *VAR_4 = VAR_7;

 return VAR_8;
}
