
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fmdev {int flag; TYPE_1__* radio_dev; } ;
struct firmware {int size; scalar_t__ data; } ;
struct bts_header {scalar_t__ magic; } ;
struct bts_action_delay {int msec; } ;
struct bts_action {int type; scalar_t__ size; scalar_t__ data; } ;
struct TYPE_2__ {int dev; } ;




 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct fmdev*,int ,int ,scalar_t__,scalar_t__,int *,int *) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*,int const*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,int const*,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct fmdev *VAR_3, const u8 *VAR_4)
{
 const struct firmware *VAR_5;
 struct bts_header *VAR_6;
 struct bts_action *VAR_7;
 struct bts_action_delay *VAR_8;
 u8 *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_12 = 0;
 FUNC_7(VAR_1, &VAR_3->flag);

 VAR_10 = FUNC_6(&VAR_5, VAR_4,
    &VAR_3->radio_dev->dev);
 if (VAR_10 < 0) {
  FUNC_3("Unable to read firmware(%s) content\n", VAR_4);
  return VAR_10;
 }
 FUNC_2("Firmware(%s) length : %zu bytes\n", VAR_4, VAR_5->size);

 VAR_9 = (void *)VAR_5->data;
 VAR_11 = VAR_5->size;

 VAR_6 = (struct bts_header *)VAR_9;
 if (VAR_6->magic != VAR_2) {
  FUNC_3("%s not a legal TI firmware file\n", VAR_4);
  VAR_10 = -VAR_0;
  goto rel_fw;
 }
 FUNC_2("FW(%s) magic number : 0x%x\n", VAR_4, VAR_6->magic);


 VAR_9 += sizeof(struct bts_header);
 VAR_11 -= sizeof(struct bts_header);

 while (VAR_9 && VAR_11 > 0) {
  VAR_7 = (struct bts_action *)VAR_9;

  switch (VAR_7->type) {
  case 128:
   VAR_10 = FUNC_1(VAR_3, 0, 0, VAR_7->data,
        VAR_7->size, ((void*)0), ((void*)0));
   if (VAR_10)
    goto rel_fw;

   VAR_12++;
   break;

  case 129:
   VAR_8 = (struct bts_action_delay *)VAR_7->data;
   FUNC_4(VAR_8->msec);
   break;
  }

  VAR_9 += (sizeof(struct bts_action) + (VAR_7->size));
  VAR_11 -= (sizeof(struct bts_action) + (VAR_7->size));
 }
 FUNC_2("Firmware commands(%d) loaded to chip\n", VAR_12);
rel_fw:
 FUNC_5(VAR_5);
 FUNC_0(VAR_1, &VAR_3->flag);

 return VAR_10;
}
