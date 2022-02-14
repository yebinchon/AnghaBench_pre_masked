
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int data_length; int dnld_cmd; } ;
struct mwifiex_fw_data {TYPE_1__ header; } ;
struct mwifiex_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_2,
       const void *VAR_3, u32 VAR_4) {
 const struct mwifiex_fw_data *VAR_5;
 u32 VAR_6 = 0, VAR_7, VAR_8;
 int VAR_9 = 0;
 bool VAR_10 = 0, VAR_11 = 0;

 while (1) {

  if (VAR_6 + sizeof(VAR_5->header) < sizeof(VAR_5->header) ||
      VAR_6 + sizeof(VAR_5->header) >= VAR_4) {
   FUNC_1(VAR_2, VAR_0,
        "extract wifi-only fw failure!\n");
   VAR_9 = -1;
   goto done;
  }

  VAR_5 = VAR_3 + VAR_6;
  VAR_8 = FUNC_0(VAR_5->header.dnld_cmd);
  VAR_7 = FUNC_0(VAR_5->header.data_length);


  VAR_6 += sizeof(VAR_5->header);

  switch (VAR_8) {
  case 131:
   if (VAR_6 + VAR_7 < VAR_7) {
    FUNC_1(VAR_2, VAR_0, "bad FW parse\n");
    VAR_9 = -1;
    goto done;
   }


   if (!VAR_11) {
    FUNC_1(VAR_2, VAR_1,
         "input wifi-only firmware\n");
    return 0;
   }

   if (!VAR_10) {
    FUNC_1(VAR_2, VAR_0,
         "no cmd7 before cmd1!\n");
    VAR_9 = -1;
    goto done;
   }
   VAR_6 += VAR_7;
   break;
  case 130:
   VAR_11 = 1;

   if (VAR_6 + VAR_7 < VAR_7) {
    FUNC_1(VAR_2, VAR_0, "bad FW parse\n");
    VAR_9 = -1;
    goto done;
   }
   VAR_6 += VAR_7;
   break;
  case 129:
   VAR_11 = 1;

   if (VAR_6 + VAR_7 < VAR_7) {
    FUNC_1(VAR_2, VAR_0, "bad FW parse\n");
    VAR_9 = -1;
    goto done;
   }
   VAR_6 += VAR_7;
   if (VAR_6 >= VAR_4) {
    FUNC_1(VAR_2, VAR_0,
         "extract wifi-only fw failure!\n");
    VAR_9 = -1;
   } else {
    VAR_9 = VAR_6;
   }
   goto done;
  case 128:
   VAR_11 = 1;
   VAR_10 = 1;
   break;
  default:
   FUNC_1(VAR_2, VAR_0, "unknown dnld_cmd %d\n",
        VAR_8);
   VAR_9 = -1;
   goto done;
  }
 }

done:
 return VAR_9;
}
