
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct brcmf_fw_request {size_t n_items; TYPE_1__* items; } ;
struct brcmf_fw_name {char* path; char* extension; } ;
struct brcmf_firmware_mapping {size_t chipid; int revmask; char* fw_base; } ;
typedef int chipname ;
struct TYPE_4__ {char* firmware_path; } ;
struct TYPE_3__ {char* path; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t,size_t,char*,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 struct brcmf_fw_request* FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*,char const*,int ) ;
 size_t FUNC_7 (char const*,int ) ;
 int FUNC_8 (struct brcmf_fw_request*,int ,size_t) ;

struct brcmf_fw_request *
FUNC_9(u32 VAR_5, u32 VAR_6,
         const struct brcmf_firmware_mapping VAR_7[],
         u32 VAR_8, struct brcmf_fw_name *VAR_9,
         u32 VAR_10)
{
 struct brcmf_fw_request *VAR_11;
 char VAR_12[12];
 const char *VAR_13;
 size_t VAR_14;
 u32 VAR_15, VAR_16;
 char VAR_17 = '\0';

 for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++) {
  if (VAR_7[VAR_15].chipid == VAR_5 &&
      VAR_7[VAR_15].revmask & FUNC_0(VAR_6))
   break;
 }

 FUNC_1(VAR_5, VAR_6, VAR_12, sizeof(VAR_12));

 if (VAR_15 == VAR_8) {
  FUNC_2("Unknown chip %s\n", VAR_12);
  return ((void*)0);
 }

 VAR_11 = FUNC_4(FUNC_8(VAR_11, VAR_4, VAR_10), VAR_2);
 if (!VAR_11)
  return ((void*)0);

 FUNC_3("using %s for chip %s\n",
     VAR_7[VAR_15].fw_base, VAR_12);

 VAR_13 = VAR_3.firmware_path;
 VAR_14 = FUNC_7(VAR_13, VAR_0);
 if (VAR_14)
  VAR_17 = VAR_13[VAR_14 - 1];

 VAR_11->n_items = VAR_10;

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_11->items[VAR_16].path = VAR_9[VAR_16].path;
  VAR_9[VAR_16].path[0] = '\0';

  if (VAR_3.firmware_path[0] != '\0') {
   FUNC_6(VAR_9[VAR_16].path, VAR_13,
    VAR_1);

   if (VAR_17 != '/') {
    FUNC_5(VAR_9[VAR_16].path, "/",
     VAR_1);
   }
  }
  FUNC_5(VAR_9[VAR_16].path, VAR_7[VAR_15].fw_base,
   VAR_1);
  FUNC_5(VAR_9[VAR_16].path, VAR_9[VAR_16].extension,
   VAR_1);
  VAR_11->items[VAR_16].path = VAR_9[VAR_16].path;
 }

 return VAR_11;
}
