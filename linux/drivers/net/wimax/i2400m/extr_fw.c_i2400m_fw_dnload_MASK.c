
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i2400m_bcf_hdr {int size; } ;
struct i2400m {int bus_bm_retries; int boot_mode; int fw_name; } ;
struct device {int dummy; } ;
typedef enum i2400m_bri { ____Placeholder_i2400m_bri } i2400m_bri ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,struct device*,char*,struct i2400m*,struct i2400m_bcf_hdr const*,size_t,int) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*,struct i2400m_bcf_hdr const*,size_t) ;
 int FUNC_2 (int,struct device*,char*,int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct i2400m_bcf_hdr* FUNC_4 (struct i2400m*) ;
 int FUNC_5 (struct i2400m*,int) ;
 struct device* FUNC_6 (struct i2400m*) ;
 int FUNC_7 (struct i2400m*,struct i2400m_bcf_hdr const*,size_t) ;
 int FUNC_8 (struct i2400m*,struct i2400m_bcf_hdr const*,struct i2400m_bcf_hdr const*,int) ;
 int FUNC_9 (struct i2400m*,struct i2400m_bcf_hdr const*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;

__attribute__((used)) static
int FUNC_12(struct i2400m *VAR_4, const struct i2400m_bcf_hdr *VAR_5,
       size_t VAR_6, enum i2400m_bri VAR_7)
{
 int VAR_8 = 0;
 struct device *VAR_9 = FUNC_6(VAR_4);
 int VAR_10 = VAR_4->bus_bm_retries;
 const struct i2400m_bcf_hdr *VAR_11;
 size_t VAR_12;

 FUNC_1(5, VAR_9, "(i2400m %p bcf %p fw size %zu)\n",
    VAR_4, VAR_5, VAR_6);
 VAR_4->boot_mode = 1;
 FUNC_11();
hw_reboot:
 if (VAR_10-- == 0) {
  VAR_8 = -VAR_1;
  FUNC_3(VAR_9, "device rebooted too many times, aborting\n");
  goto error_too_many_reboots;
 }
 if (VAR_7 & VAR_2) {
  VAR_8 = FUNC_5(VAR_4, VAR_7);
  if (VAR_8 < 0) {
   FUNC_3(VAR_9, "bootrom init failed: %d\n", VAR_8);
   goto error_bootrom_init;
  }
 }
 VAR_7 |= VAR_2;
 VAR_8 = -VAR_0;
 VAR_11 = FUNC_4(VAR_4);
 if (VAR_11 == ((void*)0))
  goto error_bcf_hdr_find;

 VAR_8 = FUNC_9(VAR_4, VAR_11);
 if (VAR_8 == -VAR_1)
  goto error_dev_rebooted;
 if (VAR_8 < 0)
  goto error_dnload_init;






 VAR_12 = sizeof(u32) * FUNC_10(VAR_11->size);
 VAR_8 = FUNC_7(VAR_4, VAR_5, VAR_12);
 if (VAR_8 == -VAR_1)
  goto error_dev_rebooted;
 if (VAR_8 < 0) {
  FUNC_3(VAR_9, "fw %s: download failed: %d\n",
   VAR_4->fw_name, VAR_8);
  goto error_dnload_bcf;
 }

 VAR_8 = FUNC_8(VAR_4, VAR_11, VAR_5, VAR_8);
 if (VAR_8 == -VAR_1)
  goto error_dev_rebooted;
 if (VAR_8 < 0) {
  FUNC_3(VAR_9, "fw %s: "
   "download finalization failed: %d\n",
   VAR_4->fw_name, VAR_8);
  goto error_dnload_finalize;
 }

 FUNC_2(2, VAR_9, "fw %s successfully uploaded\n",
   VAR_4->fw_name);
 VAR_4->boot_mode = 0;
 FUNC_11();
error_dnload_finalize:
error_dnload_bcf:
error_dnload_init:
error_bcf_hdr_find:
error_bootrom_init:
error_too_many_reboots:
 FUNC_0(5, VAR_9, "(i2400m %p bcf %p size %zu) = %d\n",
  VAR_4, VAR_5, VAR_6, VAR_8);
 return VAR_8;

error_dev_rebooted:
 FUNC_3(VAR_9, "device rebooted, %d tries left\n", VAR_10);

 VAR_7 |= VAR_3;
 goto hw_reboot;
}
