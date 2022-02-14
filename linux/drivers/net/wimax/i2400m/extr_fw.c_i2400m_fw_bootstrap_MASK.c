
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2400m_bcf_hdr {int dummy; } ;
struct i2400m {int * fw_hdrs; int fw_name; } ;
struct firmware {int size; scalar_t__ data; } ;
struct device {int dummy; } ;
typedef enum i2400m_bri { ____Placeholder_i2400m_bri } i2400m_bri ;


 int FUNC_0 (int,struct device*,char*,struct i2400m*,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*,struct i2400m_bcf_hdr const*,int ) ;
 int FUNC_5 (struct i2400m*,struct i2400m_bcf_hdr const*,int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static
int FUNC_7(struct i2400m *VAR_0, const struct firmware *VAR_1,
   enum i2400m_bri VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = FUNC_3(VAR_0);
 const struct i2400m_bcf_hdr *VAR_5;

 FUNC_1(5, VAR_4, "(i2400m %p)\n", VAR_0);
 VAR_5 = (void *) VAR_1->data;
 VAR_3 = FUNC_4(VAR_0, VAR_5, VAR_1->size);
 if (VAR_3 >= 0)
  VAR_3 = FUNC_5(VAR_0, VAR_5, VAR_1->size, VAR_2);
 if (VAR_3 < 0)
  FUNC_2(VAR_4, "%s: cannot use: %d, skipping\n",
   VAR_0->fw_name, VAR_3);
 FUNC_6(VAR_0->fw_hdrs);
 VAR_0->fw_hdrs = ((void*)0);
 FUNC_0(5, VAR_4, "(i2400m %p) = %d\n", VAR_0, VAR_3);
 return VAR_3;
}
