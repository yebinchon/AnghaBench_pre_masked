
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct venus_hfi_device {struct iface_queue* queues; int last_packet_type; TYPE_1__* core; } ;
struct iface_queue {int dummy; } ;
struct hfi_pkt_hdr {int pkt_type; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct venus_hfi_device*) ;
 int FUNC_2 (struct venus_hfi_device*) ;
 int FUNC_3 (struct venus_hfi_device*,struct iface_queue*,void*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct venus_hfi_device *VAR_2,
      void *VAR_3)
{
 struct device *VAR_4 = VAR_2->core->dev;
 struct hfi_pkt_hdr *VAR_5;
 struct iface_queue *VAR_6;
 u32 VAR_7;
 int VAR_8;

 if (!FUNC_1(VAR_2))
  return -VAR_0;

 VAR_5 = (struct hfi_pkt_hdr *)VAR_3;
 VAR_2->last_packet_type = VAR_5->pkt_type;

 VAR_6 = &VAR_2->queues[VAR_1];

 VAR_8 = FUNC_3(VAR_2, VAR_6, VAR_3, &VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_4, "write to iface cmd queue failed (%d)\n", VAR_8);
  return VAR_8;
 }

 if (VAR_7)
  FUNC_2(VAR_2);

 return 0;
}
