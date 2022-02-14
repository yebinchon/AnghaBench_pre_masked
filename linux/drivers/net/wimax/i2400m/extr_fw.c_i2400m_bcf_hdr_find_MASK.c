
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i2400m_bcf_hdr {int module_id; } ;
struct i2400m {struct i2400m_bcf_hdr** fw_hdrs; TYPE_1__* barker; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,struct device*,char*,unsigned int,...) ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct i2400m*,struct i2400m_bcf_hdr const*) ;
 struct device* FUNC_3 (struct i2400m*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static
const struct i2400m_bcf_hdr *FUNC_5(struct i2400m *VAR_1)
{
 struct device *VAR_2 = FUNC_3(VAR_1);
 const struct i2400m_bcf_hdr **VAR_3, *VAR_4;
 unsigned VAR_5 = 0;
 u32 VAR_6 = FUNC_4(VAR_1->barker->data[0]);

 FUNC_0(2, VAR_2, "finding BCF header for barker %08x\n", VAR_6);
 if (VAR_6 == VAR_0) {
  VAR_4 = VAR_1->fw_hdrs[0];
  FUNC_0(1, VAR_2, "using BCF header #%u/%08x for non-signed "
    "barker\n", 0, FUNC_4(VAR_4->module_id));
  return VAR_4;
 }
 for (VAR_3 = VAR_1->fw_hdrs; *VAR_3 != ((void*)0); VAR_3++, VAR_5++) {
  VAR_4 = *VAR_3;
  if (FUNC_2(VAR_1, VAR_4)) {
   FUNC_0(1, VAR_2, "hit on BCF hdr #%u/%08x\n",
     VAR_5, FUNC_4(VAR_4->module_id));
   return VAR_4;
  } else
   FUNC_0(1, VAR_2, "miss on BCF hdr #%u/%08x\n",
     VAR_5, FUNC_4(VAR_4->module_id));
 }
 FUNC_1(VAR_2, "cannot find a matching BCF header for barker %08x\n",
  VAR_6);
 return ((void*)0);
}
