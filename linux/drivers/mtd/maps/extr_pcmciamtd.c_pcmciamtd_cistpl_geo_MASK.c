
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tuple_t ;
struct TYPE_6__ {int bankwidth; } ;
struct pcmciamtd_dev {TYPE_1__ pcmcia_map; } ;
struct pcmcia_device {int dummy; } ;
struct TYPE_8__ {int ngeo; TYPE_2__* geo; } ;
typedef TYPE_3__ cistpl_device_geo_t ;
struct TYPE_9__ {TYPE_3__ device_geo; } ;
typedef TYPE_4__ cisparse_t ;
struct TYPE_7__ {int interleave; int partition; int write_block; int read_block; int erase_block; int buswidth; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (char*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_1,
    tuple_t *VAR_2,
    void *VAR_3)
{
 struct pcmciamtd_dev *VAR_4 = VAR_3;
 cisparse_t VAR_5;
 cistpl_device_geo_t *VAR_6 = &VAR_5.device_geo;
 int VAR_7;

 if (FUNC_0(VAR_2, &VAR_5))
  return -VAR_0;

 VAR_4->pcmcia_map.bankwidth = VAR_6->geo[0].buswidth;

 for (VAR_7 = 0; VAR_7 < VAR_6->ngeo; VAR_7++) {
  FUNC_1("region: %d bankwidth = %u\n", VAR_7, VAR_6->geo[VAR_7].buswidth);
  FUNC_1("region: %d erase_block = %u\n", VAR_7, VAR_6->geo[VAR_7].erase_block);
  FUNC_1("region: %d read_block = %u\n", VAR_7, VAR_6->geo[VAR_7].read_block);
  FUNC_1("region: %d write_block = %u\n", VAR_7, VAR_6->geo[VAR_7].write_block);
  FUNC_1("region: %d partition = %u\n", VAR_7, VAR_6->geo[VAR_7].partition);
  FUNC_1("region: %d interleave = %u\n", VAR_7, VAR_6->geo[VAR_7].interleave);
 }
 return 0;
}
