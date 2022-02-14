
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pcmcia_device {scalar_t__ config_index; TYPE_2__** resource; int card_addr; } ;
struct TYPE_5__ {unsigned long MmioAddress; scalar_t__ MmioLength; } ;
typedef TYPE_1__ nsp_hw_data ;
struct TYPE_6__ {int flags; int end; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 scalar_t__ FUNC_3 (struct pcmcia_device*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_4 (struct pcmcia_device*) ;
 scalar_t__ FUNC_5 (struct pcmcia_device*,TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_5, void *VAR_6)
{
 nsp_hw_data *VAR_7 = VAR_6;

 if (VAR_5->config_index == 0)
  return -VAR_0;


 if (FUNC_4(VAR_5) != 0)
  goto next_entry;

 if (FUNC_6(VAR_5->resource[2])) {
  VAR_5->resource[2]->flags |= (VAR_2 |
     VAR_4 |
     VAR_3);
  if (VAR_5->resource[2]->end < 0x1000)
   VAR_5->resource[2]->end = 0x1000;
  if (FUNC_5(VAR_5, VAR_5->resource[2], 0) != 0)
   goto next_entry;
  if (FUNC_3(VAR_5, VAR_5->resource[2],
      VAR_5->card_addr) != 0)
   goto next_entry;

  VAR_7->MmioAddress = (unsigned long)
   FUNC_0(VAR_5->resource[2]->start,
     FUNC_6(VAR_5->resource[2]));
  VAR_7->MmioLength = FUNC_6(VAR_5->resource[2]);
 }

 return 0;

next_entry:
 FUNC_1(VAR_1, "next");
 FUNC_2(VAR_5);
 return -VAR_0;
}
