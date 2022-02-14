
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2400m_bcf_hdr {int size; int date; int module_vendor; int module_id; int header_version; int header_len; int module_type; } ;
struct i2400m {int fw_name; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,char*,int ,size_t,size_t,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_1 (struct device*,char*,int ,size_t,size_t,unsigned int,...) ;
 int FUNC_2 (struct device*,char*,int ,size_t,size_t,unsigned int) ;
 struct device* FUNC_3 (struct i2400m*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static
int FUNC_5(struct i2400m *VAR_1,
   const struct i2400m_bcf_hdr *VAR_2,
   size_t VAR_3, size_t VAR_4)
{
 struct device *VAR_5 = FUNC_3(VAR_1);

 unsigned VAR_6, VAR_7, VAR_8, VAR_9,
  VAR_10, VAR_11, VAR_12, VAR_13;

 VAR_6 = FUNC_4(VAR_2->module_type);
 VAR_7 = sizeof(u32) * FUNC_4(VAR_2->header_len);
 VAR_8 = (FUNC_4(VAR_2->header_version) & 0xffff0000)
  >> 16;
 VAR_9 = FUNC_4(VAR_2->header_version) & 0x0000ffff;
 VAR_10 = FUNC_4(VAR_2->module_id);
 VAR_11 = FUNC_4(VAR_2->module_vendor);
 VAR_12 = FUNC_4(VAR_2->date);
 VAR_13 = sizeof(u32) * FUNC_4(VAR_2->size);

 FUNC_0(1, VAR_5, "firmware %s #%zd@%08zx: BCF header "
   "type:vendor:id 0x%x:%x:%x v%u.%u (%u/%u B) built %08x\n",
   VAR_1->fw_name, VAR_3, VAR_4,
   VAR_6, VAR_11, VAR_10,
   VAR_8, VAR_9, VAR_7, VAR_13, VAR_12);


 if (VAR_8 != 1) {
  FUNC_1(VAR_5, "firmware %s #%zd@%08zx: major header version "
   "v%u.%u not supported\n",
   VAR_1->fw_name, VAR_3, VAR_4,
   VAR_8, VAR_9);
  return -VAR_0;
 }

 if (VAR_6 != 6) {
  FUNC_1(VAR_5, "firmware %s #%zd@%08zx: unexpected module "
   "type 0x%x; aborting\n",
   VAR_1->fw_name, VAR_3, VAR_4,
   VAR_6);
  return -VAR_0;
 }

 if (VAR_11 != 0x8086) {
  FUNC_1(VAR_5, "firmware %s #%zd@%08zx: unexpected module "
   "vendor 0x%x; aborting\n",
   VAR_1->fw_name, VAR_3, VAR_4, VAR_11);
  return -VAR_0;
 }

 if (VAR_12 < 0x20080300)
  FUNC_2(VAR_5, "firmware %s #%zd@%08zx: build date %08x "
    "too old; unsupported\n",
    VAR_1->fw_name, VAR_3, VAR_4, VAR_12);
 return 0;
}
