
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct firmware {scalar_t__* data; int size; } ;
struct edgeport_serial {TYPE_2__* serial; } ;
struct edgeport_fw_hdr {scalar_t__ checksum; int length; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* interface; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct edgeport_serial *VAR_1,
  const struct firmware *VAR_2)
{
 u16 VAR_3;
 u8 VAR_4 = 0;
 int VAR_5;
 struct device *VAR_6 = &VAR_1->serial->interface->dev;
 struct edgeport_fw_hdr *VAR_7 = (struct edgeport_fw_hdr *)VAR_2->data;

 if (VAR_2->size < sizeof(struct edgeport_fw_hdr)) {
  FUNC_0(VAR_6, "incomplete fw header\n");
  return -VAR_0;
 }

 VAR_3 = FUNC_1(VAR_7->length) +
   sizeof(struct edgeport_fw_hdr);

 if (VAR_2->size != VAR_3) {
  FUNC_0(VAR_6, "bad fw size (expected: %u, got: %zu)\n",
    VAR_3, VAR_2->size);
  return -VAR_0;
 }

 for (VAR_5 = sizeof(struct edgeport_fw_hdr); VAR_5 < VAR_2->size; ++VAR_5)
  VAR_4 += VAR_2->data[VAR_5];

 if (VAR_4 != VAR_7->checksum) {
  FUNC_0(VAR_6, "bad fw checksum (expected: 0x%x, got: 0x%x)\n",
    VAR_7->checksum, VAR_4);
  return -VAR_0;
 }

 return 0;
}
