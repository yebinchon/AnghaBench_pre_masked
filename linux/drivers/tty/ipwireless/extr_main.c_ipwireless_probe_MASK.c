
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcmcia_device {int config_index; int io_lines; TYPE_1__** resource; int card_addr; } ;
struct ipw_dev {int is_v2_card; void* common_memory; void* attr_memory; } ;
struct TYPE_4__ {int flags; int start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ,int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int FUNC_5 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int,int ) ;
 int FUNC_9 (int ,int,int ) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct pcmcia_device *VAR_9, void *VAR_10)
{
 struct ipw_dev *VAR_11 = VAR_10;
 int VAR_12;

 VAR_9->resource[0]->flags &= ~VAR_2;
 VAR_9->resource[0]->flags |= VAR_3;



 VAR_9->config_index |= 0x44;
 VAR_9->io_lines = 16;
 VAR_12 = FUNC_4(VAR_9);
 if (VAR_12)
  return VAR_12;

 if (!FUNC_9(VAR_9->resource[0]->start,
       FUNC_10(VAR_9->resource[0]),
       VAR_4)) {
  VAR_12 = -VAR_0;
  goto exit;
 }

 VAR_9->resource[2]->flags |=
  VAR_5 | VAR_8 | VAR_6;

 VAR_12 = FUNC_5(VAR_9, VAR_9->resource[2], 0);
 if (VAR_12 != 0)
  goto exit1;

 VAR_12 = FUNC_3(VAR_9, VAR_9->resource[2], VAR_9->card_addr);
 if (VAR_12 != 0)
  goto exit1;

 VAR_11->is_v2_card = FUNC_10(VAR_9->resource[2]) == 0x100;

 VAR_11->common_memory = FUNC_0(VAR_9->resource[2]->start,
    FUNC_10(VAR_9->resource[2]));
 if (!VAR_11->common_memory) {
  VAR_12 = -VAR_1;
  goto exit1;
 }
 if (!FUNC_8(VAR_9->resource[2]->start,
    FUNC_10(VAR_9->resource[2]),
    VAR_4)) {
  VAR_12 = -VAR_0;
  goto exit2;
 }

 VAR_9->resource[3]->flags |= VAR_5 | VAR_7 |
     VAR_6;
 VAR_9->resource[3]->end = 0;
 VAR_12 = FUNC_5(VAR_9, VAR_9->resource[3], 0);
 if (VAR_12 != 0)
  goto exit3;

 VAR_12 = FUNC_3(VAR_9, VAR_9->resource[3], 0);
 if (VAR_12 != 0)
  goto exit3;

 VAR_11->attr_memory = FUNC_0(VAR_9->resource[3]->start,
    FUNC_10(VAR_9->resource[3]));
 if (!VAR_11->attr_memory) {
  VAR_12 = -VAR_1;
  goto exit3;
 }
 if (!FUNC_8(VAR_9->resource[3]->start,
    FUNC_10(VAR_9->resource[3]),
    VAR_4)) {
  VAR_12 = -VAR_0;
  goto exit4;
 }

 return 0;

exit4:
 FUNC_1(VAR_11->attr_memory);
exit3:
 FUNC_6(VAR_9->resource[2]->start,
   FUNC_10(VAR_9->resource[2]));
exit2:
 FUNC_1(VAR_11->common_memory);
exit1:
 FUNC_7(VAR_9->resource[0]->start,
         FUNC_10(VAR_9->resource[0]));
exit:
 FUNC_2(VAR_9);
 return VAR_12;
}
