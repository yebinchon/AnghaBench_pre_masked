
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int config_index; int io_lines; TYPE_1__** resource; int dev; int config_base; int config_regs; int config_flags; } ;
struct TYPE_3__ {int end; int flags; int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct pcmcia_device*,int) ;
 int FUNC_2 (struct pcmcia_device*) ;
 int FUNC_3 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_4 (struct pcmcia_device*,TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_7)
{
 int VAR_8;


 VAR_7->config_flags |= VAR_0;
 VAR_7->config_index = 1;
 VAR_7->config_regs = VAR_3;


 VAR_7->resource[0]->end = 16;
 VAR_7->resource[0]->flags |= VAR_2;
 VAR_7->resource[1]->end = 16;
 VAR_7->resource[1]->flags |= VAR_1;
 VAR_7->io_lines = 5;


 VAR_7->resource[2]->flags =
  (VAR_4 | VAR_6 | VAR_5);
 VAR_7->resource[2]->start = VAR_7->resource[2]->end = 0;

 VAR_8 = FUNC_4(VAR_7, VAR_7->resource[2], 0);
 if (VAR_8) {
  FUNC_0(&VAR_7->dev, "pcmcia_request_window failed (err=%d)\n",
   VAR_8);
  return 0;
 }

 VAR_8 = FUNC_3(VAR_7, VAR_7->resource[2], VAR_7->config_base);
 if (VAR_8) {
  FUNC_0(&VAR_7->dev, "pcmcia_map_mem_page failed (err=%d)\n",
   VAR_8);
  return 0;
 }

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8) {
  FUNC_0(&VAR_7->dev, "pcmcia_enable_device failed (err=%d)\n",
   VAR_8);
  return 0;
 }

 FUNC_1(VAR_7, VAR_7->resource[2]->start);
 return 0;
}
