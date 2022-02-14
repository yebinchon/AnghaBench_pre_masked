
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int nmodes; int cam_mode; } ;
struct TYPE_6__ {TYPE_1__ cam; } ;
struct sd {struct hdcs* sensor_priv; TYPE_2__ gspca_dev; } ;
struct TYPE_8__ {int cto; int cpo; int rs; int er; } ;
struct TYPE_7__ {int left; int top; int height; int border; int width; } ;
struct hdcs {int psmp; TYPE_4__ exp; TYPE_3__ array; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct hdcs* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sd*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct sd *VAR_6)
{
 struct hdcs *VAR_7;
 u16 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6, VAR_4, &VAR_8);
 if (VAR_9 < 0 || VAR_8 != 0x10)
  return -VAR_0;

 FUNC_2("HDCS-1020 sensor detected\n");

 VAR_6->gspca_dev.cam.cam_mode = VAR_5;
 VAR_6->gspca_dev.cam.nmodes = FUNC_0(VAR_5);

 VAR_7 = FUNC_1(sizeof(struct hdcs), VAR_2);
 if (!VAR_7)
  return -VAR_1;






 VAR_7->array.left = 24;
 VAR_7->array.top = 4;
 VAR_7->array.width = VAR_3;
 VAR_7->array.height = 304;
 VAR_7->array.border = 4;

 VAR_7->psmp = 6;

 VAR_7->exp.cto = 3;
 VAR_7->exp.cpo = 3;
 VAR_7->exp.rs = 155;
 VAR_7->exp.er = 96;

 VAR_6->sensor_priv = VAR_7;

 return 0;
}
