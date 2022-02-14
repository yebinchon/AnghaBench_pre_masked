
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redrat3_header {int fw_error; int transfer_type; int length; } ;
struct redrat3_error {int fw_error; int transfer_type; int length; } ;
struct redrat3_dev {unsigned int bytes_read; int dev; struct redrat3_header* bulk_in_buf; int irdata; } ;




 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,...) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int *,struct redrat3_header*,unsigned int) ;
 int FUNC_4 (struct redrat3_dev*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct redrat3_dev *VAR_0, unsigned VAR_1)
{
 struct redrat3_header *VAR_2 = VAR_0->bulk_in_buf;
 unsigned VAR_3, VAR_4;


 VAR_3 = FUNC_0(VAR_2->length);
 VAR_4 = FUNC_0(VAR_2->transfer_type);

 if (VAR_3 > sizeof(VAR_0->irdata)) {
  FUNC_2(VAR_0->dev, "packet length %u too large\n", VAR_3);
  return;
 }

 switch (VAR_4) {
 case 129:
  if (VAR_1 >= sizeof(struct redrat3_error)) {
   struct redrat3_error *VAR_5 = VAR_0->bulk_in_buf;
   unsigned VAR_6 = FUNC_0(VAR_5->fw_error);
   FUNC_4(VAR_0, VAR_6);
  }
  break;

 case 128:
  FUNC_3(&VAR_0->irdata, VAR_0->bulk_in_buf, VAR_1);
  VAR_0->bytes_read = VAR_1;
  FUNC_1(VAR_0->dev, "bytes_read %d, pktlen %d\n",
   VAR_0->bytes_read, VAR_3);
  break;

 default:
  FUNC_1(VAR_0->dev, "ignoring packet with type 0x%02x, len of %d, 0x%02x\n",
      VAR_4, VAR_1, VAR_3);
  break;
 }
}
