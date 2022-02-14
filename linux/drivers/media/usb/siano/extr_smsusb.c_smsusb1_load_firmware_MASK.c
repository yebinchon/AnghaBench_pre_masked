
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_device {int dev; } ;
struct firmware {int size; int data; } ;
struct TYPE_2__ {int default_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char*,char*,int,...) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (struct firmware const*) ;
 int FUNC_7 (struct firmware const**,char*,int *) ;
 TYPE_1__* FUNC_8 (int) ;
 char* FUNC_9 (int,int) ;
 char** VAR_5 ;
 int FUNC_10 (struct usb_device*,int ,int *,int ,int*,int) ;
 int FUNC_11 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_12(struct usb_device *VAR_6, int VAR_7, int VAR_8)
{
 const struct firmware *VAR_9;
 u8 *VAR_10;
 int VAR_11, VAR_12;
 char *VAR_13;

 if (VAR_7 < 0)
  VAR_7 = FUNC_8(VAR_8)->default_mode;

 if (VAR_7 < VAR_0 || VAR_7 > VAR_1) {
  FUNC_4("invalid firmware id specified %d\n", VAR_7);
  return -VAR_2;
 }

 VAR_13 = FUNC_9(VAR_7, VAR_8);

 VAR_11 = FUNC_7(&VAR_9, VAR_13, &VAR_6->dev);
 if (VAR_11 < 0) {
  FUNC_5("failed to open '%s' mode %d, trying again with default firmware\n",
   VAR_13, VAR_7);

  VAR_13 = VAR_5[VAR_7];
  VAR_11 = FUNC_7(&VAR_9, VAR_13, &VAR_6->dev);
  if (VAR_11 < 0) {
   FUNC_5("failed to open '%s' mode %d\n",
     VAR_13, VAR_7);

   return VAR_11;
  }
 }

 VAR_10 = FUNC_1(VAR_9->size, VAR_4);
 if (VAR_10) {
  FUNC_2(VAR_10, VAR_9->data, VAR_9->size);

  VAR_11 = FUNC_10(VAR_6, FUNC_11(VAR_6, 2),
      VAR_10, VAR_9->size, &VAR_12, 1000);

  FUNC_3("sent %zu(%d) bytes, rc %d\n", VAR_9->size, VAR_12, VAR_11);

  FUNC_0(VAR_10);
 } else {
  FUNC_4("failed to allocate firmware buffer\n");
  VAR_11 = -VAR_3;
 }
 FUNC_3("read FW %s, size=%zu\n", VAR_13, VAR_9->size);

 FUNC_6(VAR_9);

 return VAR_11;
}
