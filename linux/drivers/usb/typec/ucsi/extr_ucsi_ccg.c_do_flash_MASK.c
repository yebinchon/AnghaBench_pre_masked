
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct TYPE_2__ {int mode; } ;
struct ucsi_ccg {TYPE_1__ info; struct device* dev; } ;
struct fw_config_table {float identity; } ;
struct firmware {char* data; int size; } ;
struct device {int dummy; } ;
typedef int fw_cfg_sig ;
typedef int fw_cfg ;
typedef enum enum_flash_mode { ____Placeholder_enum_flash_mode } enum_flash_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct ucsi_ccg*) ;
 int FUNC_1 (struct ucsi_ccg*,int ) ;
 int FUNC_2 (struct ucsi_ccg*,int) ;
 int FUNC_3 (struct ucsi_ccg*) ;
 int FUNC_4 (struct ucsi_ccg*,int) ;
 int FUNC_5 (struct ucsi_ccg*,int,int *,int ) ;
 char** VAR_15 ;
 int FUNC_6 (struct device*,char*,...) ;
 int FUNC_7 (struct device*,char*,...) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char const*,int) ;
 unsigned long VAR_16 ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int,int ) ;
 int FUNC_13 (int *,char*,int) ;
 int FUNC_14 (struct firmware const*) ;
 int FUNC_15 (struct firmware const**,char*,struct device*) ;
 char* FUNC_16 (char const*,int,char) ;

__attribute__((used)) static int FUNC_17(struct ucsi_ccg *VAR_17, enum enum_flash_mode VAR_18)
{
 struct device *VAR_19 = VAR_17->dev;
 const struct firmware *VAR_20 = ((void*)0);
 const char *VAR_21, *VAR_22;
 const char *VAR_23;
 int VAR_24, VAR_25, VAR_26, VAR_27, VAR_28 = 0;
 unsigned long VAR_29 = VAR_16;
 struct fw_config_table VAR_30;
 u8 VAR_31[VAR_12];
 u8 *VAR_32;

 VAR_24 = FUNC_15(&VAR_20, VAR_15[VAR_18], VAR_19);
 if (VAR_24) {
  FUNC_6(VAR_19, "request %s failed err=%d\n",
   VAR_15[VAR_18], VAR_24);
  return VAR_24;
 }

 if (((VAR_17->info.mode & VAR_1) >>
   VAR_2) == VAR_11) {
  VAR_24 = FUNC_2(VAR_17, 0);
  if (VAR_24 < 0)
   goto release_fw;
  VAR_24 = FUNC_1(VAR_17, 0);
  if (VAR_24 < 0)
   goto release_fw;
 }

 VAR_23 = VAR_20->data + VAR_20->size;





 if (VAR_20->size < sizeof(VAR_30) + sizeof(VAR_31))
  goto not_signed_fw;

 FUNC_13((uint8_t *)&VAR_30, VAR_20->data + VAR_20->size -
        sizeof(VAR_30) - sizeof(VAR_31), sizeof(VAR_30));

 if (VAR_30.identity != ('F' | ('W' << 8) | ('C' << 16) | ('T' << 24))) {
  FUNC_7(VAR_19, "not a signed image\n");
  goto not_signed_fw;
 }
 VAR_23 = VAR_20->data + VAR_20->size - sizeof(VAR_30) - sizeof(VAR_31);

 FUNC_13((uint8_t *)&VAR_31,
        VAR_20->data + VAR_20->size - sizeof(VAR_31), sizeof(VAR_31));


 VAR_24 = FUNC_5(VAR_17, 0, (u8 *)&VAR_30,
          VAR_6);
 if (VAR_24)
  goto release_fw;

 VAR_24 = FUNC_5(VAR_17, 0, (u8 *)&VAR_30 + VAR_0,
          VAR_7);
 if (VAR_24)
  goto release_fw;

 VAR_24 = FUNC_5(VAR_17, 0, &VAR_31,
          VAR_8);
 if (VAR_24)
  goto release_fw;

not_signed_fw:
 VAR_32 = FUNC_12(VAR_0 + 4, VAR_13);
 if (!VAR_32) {
  VAR_24 = -VAR_5;
  goto release_fw;
 }

 VAR_24 = FUNC_0(VAR_17);
 if (VAR_24)
  goto release_mem;
 VAR_21 = FUNC_16(VAR_20->data, VAR_20->size, ':');
 while (VAR_21 < VAR_23) {
  VAR_22 = FUNC_16(VAR_21 + 1, VAR_23 - VAR_21 - 1, ':');

  if (!VAR_22)
   VAR_22 = VAR_23;

  VAR_27 = VAR_22 - VAR_21;

  if (VAR_27 != VAR_3) {
   FUNC_6(VAR_19, "Bad FW format line_sz=%d\n", VAR_27);
   VAR_24 = -VAR_4;
   goto release_mem;
  }

  if (FUNC_9(VAR_32, VAR_21 + 3, VAR_0 + 4)) {
   VAR_24 = -VAR_4;
   goto release_mem;
  }

  VAR_25 = FUNC_8(VAR_32);
  VAR_26 = FUNC_8(&VAR_32[2]);

  if (VAR_26 != VAR_0) {
   VAR_24 = -VAR_4;
   goto release_mem;
  }

  VAR_24 = FUNC_5(VAR_17, VAR_25, VAR_32 + 4,
           VAR_9);
  if (VAR_24)
   goto release_mem;

  VAR_28++;
  VAR_21 = VAR_22;
 }

 FUNC_7(VAR_19, "total %d row flashed. time: %dms\n",
   VAR_28, FUNC_10(VAR_16 - VAR_29));

 VAR_24 = FUNC_4(VAR_17, (VAR_18 == VAR_14) ? VAR_11 : VAR_10);
 if (VAR_24)
  FUNC_6(VAR_19, "%s validation failed err=%d\n",
   (VAR_18 == VAR_14) ? "FW2" : "FW1", VAR_24);
 else
  FUNC_7(VAR_19, "%s validated\n",
    (VAR_18 == VAR_14) ? "FW2" : "FW1");

 VAR_24 = FUNC_2(VAR_17, 0);
 if (VAR_24 < 0)
  goto release_mem;

 VAR_24 = FUNC_3(VAR_17);
 if (VAR_24 < 0)
  goto release_mem;

 VAR_24 = FUNC_2(VAR_17, 1);
 if (VAR_24 < 0)
  goto release_mem;

release_mem:
 FUNC_11(VAR_32);

release_fw:
 FUNC_14(VAR_20);
 return VAR_24;
}
