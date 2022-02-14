
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_bcf_hdr {int dummy; } ;
struct i2400m {int fw_name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,char*) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 scalar_t__ FUNC_2 (struct i2400m*) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct i2400m*,struct i2400m_bcf_hdr const*) ;

__attribute__((used)) static
int FUNC_6(struct i2400m *VAR_1,
         const struct i2400m_bcf_hdr *VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = FUNC_3(VAR_1);

 if (FUNC_2(VAR_1)) {
  FUNC_0(1, VAR_4, "signed boot\n");
  VAR_3 = FUNC_5(VAR_1, VAR_2);
  if (VAR_3 == -VAR_0)
   return VAR_3;
  if (VAR_3 < 0)
   FUNC_1(VAR_4, "firmware %s: signed boot download "
    "initialization failed: %d\n",
    VAR_1->fw_name, VAR_3);
 } else {

  FUNC_0(1, VAR_4, "non-signed boot\n");
  VAR_3 = FUNC_4(VAR_1);
  if (VAR_3 == -VAR_0)
   return VAR_3;
  if (VAR_3 < 0)
   FUNC_1(VAR_4, "firmware %s: non-signed download "
    "initialization failed: %d\n",
    VAR_1->fw_name, VAR_3);
 }
 return VAR_3;
}
