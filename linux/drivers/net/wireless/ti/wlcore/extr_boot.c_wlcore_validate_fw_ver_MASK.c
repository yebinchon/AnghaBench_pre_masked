
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* fw_ver; } ;
struct wl1271 {scalar_t__ fw_type; unsigned int* min_mr_fw_ver; unsigned int* min_sr_fw_ver; TYPE_1__ chip; } ;
typedef int min_fw_str ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (char*,int,char*,char*,...) ;
 int FUNC_1 (char*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,char*) ;

__attribute__((used)) static int FUNC_2(struct wl1271 *VAR_9)
{
 unsigned int *VAR_10 = VAR_9->chip.fw_ver;
 unsigned int *VAR_11 = (VAR_9->fw_type == VAR_7) ?
  VAR_9->min_mr_fw_ver : VAR_9->min_sr_fw_ver;
 char VAR_12[32] = "";
 int VAR_13;


 if ((VAR_11[VAR_1] != VAR_8) &&
     (VAR_11[VAR_1] != VAR_10[VAR_1]))
  goto fail;


 if ((VAR_11[VAR_2] != VAR_8) &&
     (VAR_11[VAR_2] != VAR_10[VAR_2]))
  goto fail;


 if ((VAR_11[VAR_5] != VAR_8) &&
     (VAR_11[VAR_5] != VAR_10[VAR_5]))
  goto fail;


 if ((VAR_11[VAR_3] != VAR_8) &&
   (VAR_11[VAR_3] > VAR_10[VAR_3]))
  goto fail;


 if (((VAR_11[VAR_3] == VAR_8) ||
      (VAR_11[VAR_3] == VAR_10[VAR_3])) &&

     ((VAR_11[VAR_4] != VAR_8) &&
      (VAR_11[VAR_4] > VAR_10[VAR_4])))
  goto fail;

 return 0;

fail:
 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++)
  if (VAR_11[VAR_13] == VAR_8)
   FUNC_0(VAR_12, sizeof(VAR_12),
      "%s*.", VAR_12);
  else
   FUNC_0(VAR_12, sizeof(VAR_12),
      "%s%u.", VAR_12, VAR_11[VAR_13]);

 FUNC_1("Your WiFi FW version (%u.%u.%u.%u.%u) is invalid.\n"
       "Please use at least FW %s\n"
       "You can get the latest firmwares at:\n"
       "git://git.ti.com/wilink8-wlan/wl18xx_fw.git",
       VAR_10[VAR_1], VAR_10[VAR_2],
       VAR_10[VAR_3], VAR_10[VAR_5],
       VAR_10[VAR_4], VAR_12);
 return -VAR_0;
}
