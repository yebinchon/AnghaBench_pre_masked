
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dev; } ;
struct TYPE_3__ {int build; int patch; int minor; int major; } ;
struct fwentry {int loaded; char* fwname; int board_type; int intfw_size; int extfw_size; int * extfw; int * intfw; TYPE_1__ fw_version; TYPE_2__* fw; } ;
struct at76_fw_header {int ext_fw_len; int ext_fw_offset; int int_fw_len; int int_fw_offset; int build; int patch; int minor; int major; int str_offset; int board_type; } ;
typedef enum board_type { ____Placeholder_board_type } board_type ;
struct TYPE_4__ {int size; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,int *,char*,char*,int ,int ,int ,int ) ;
 struct fwentry* VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__**,char*,int *) ;

__attribute__((used)) static struct fwentry *FUNC_7(struct usb_device *VAR_5,
       enum board_type VAR_6)
{
 int VAR_7;
 char *VAR_8;
 struct at76_fw_header *VAR_9;
 struct fwentry *VAR_10 = &VAR_3[VAR_6];

 FUNC_4(&VAR_4);

 if (VAR_10->loaded) {
  FUNC_0(VAR_1, "re-using previously loaded fw");
  goto exit;
 }

 FUNC_0(VAR_1, "downloading firmware %s", VAR_10->fwname);
 VAR_7 = FUNC_6(&VAR_10->fw, VAR_10->fwname, &VAR_5->dev);
 if (VAR_7 < 0) {
  FUNC_1(&VAR_5->dev, "firmware %s not found!\n",
   VAR_10->fwname);
  FUNC_1(&VAR_5->dev,
   "you may need to download the firmware from http://developer.berlios.de/projects/at76c503a/\n");
  goto exit;
 }

 FUNC_0(VAR_1, "got it.");
 VAR_9 = (struct at76_fw_header *)(VAR_10->fw->data);

 if (VAR_10->fw->size <= sizeof(*VAR_9)) {
  FUNC_1(&VAR_5->dev,
   "firmware is too short (0x%zx)\n", VAR_10->fw->size);
  goto exit;
 }


 VAR_10->board_type = FUNC_3(VAR_9->board_type);
 if (VAR_10->board_type != VAR_6) {
  FUNC_1(&VAR_5->dev,
   "board type mismatch, requested %u, got %u\n",
   VAR_6, VAR_10->board_type);
  goto exit;
 }

 VAR_10->fw_version.major = VAR_9->major;
 VAR_10->fw_version.minor = VAR_9->minor;
 VAR_10->fw_version.patch = VAR_9->patch;
 VAR_10->fw_version.build = VAR_9->build;

 VAR_8 = (char *)VAR_9 + FUNC_3(VAR_9->str_offset);
 VAR_10->intfw = (u8 *)VAR_9 + FUNC_3(VAR_9->int_fw_offset);
 VAR_10->intfw_size = FUNC_3(VAR_9->int_fw_len);
 VAR_10->extfw = (u8 *)VAR_9 + FUNC_3(VAR_9->ext_fw_offset);
 VAR_10->extfw_size = FUNC_3(VAR_9->ext_fw_len);

 VAR_10->loaded = 1;

 FUNC_2(VAR_2, &VAR_5->dev,
     "using firmware %s (version %d.%d.%d-%d)\n",
     VAR_10->fwname, VAR_9->major, VAR_9->minor, VAR_9->patch, VAR_9->build);

 FUNC_0(VAR_0, "board %u, int %d:%d, ext %d:%d", VAR_6,
   FUNC_3(VAR_9->int_fw_offset), FUNC_3(VAR_9->int_fw_len),
   FUNC_3(VAR_9->ext_fw_offset), FUNC_3(VAR_9->ext_fw_len));
 FUNC_0(VAR_0, "firmware id %s", VAR_8);

exit:
 FUNC_5(&VAR_4);

 if (VAR_10->loaded)
  return VAR_10;
 else
  return ((void*)0);
}
