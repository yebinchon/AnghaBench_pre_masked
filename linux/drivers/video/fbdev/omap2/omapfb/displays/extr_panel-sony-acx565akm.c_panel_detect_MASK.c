
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct panel_drv_data {int* display_id; char* name; int has_bc; int has_cabc; int revision; TYPE_1__* spi; int model; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct panel_drv_data*,int ,int*,int) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct panel_drv_data *VAR_6)
{
 FUNC_0(VAR_6, VAR_1, VAR_6->display_id, 3);
 FUNC_1(&VAR_6->spi->dev, "MIPI display ID: %02x%02x%02x\n",
  VAR_6->display_id[0],
  VAR_6->display_id[1],
  VAR_6->display_id[2]);

 switch (VAR_6->display_id[0]) {
 case 0x10:
  VAR_6->model = VAR_2;
  VAR_6->name = "acx565akm";
  VAR_6->has_bc = 1;
  VAR_6->has_cabc = 1;
  break;
 case 0x29:
  VAR_6->model = VAR_3;
  VAR_6->name = "l4f00311";
  break;
 case 0x45:
  VAR_6->model = VAR_4;
  VAR_6->name = "lph8923";
  break;
 case 0x83:
  VAR_6->model = VAR_5;
  VAR_6->name = "ls041y3";
  break;
 default:
  VAR_6->name = "unknown";
  FUNC_2(&VAR_6->spi->dev, "invalid display ID\n");
  return -VAR_0;
 }

 VAR_6->revision = VAR_6->display_id[1];

 FUNC_3(&VAR_6->spi->dev, "omapfb: %s rev %02x LCD detected\n",
   VAR_6->name, VAR_6->revision);

 return 0;
}
