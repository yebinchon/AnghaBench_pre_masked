
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
struct sd {scalar_t__ bridge; struct hdcs* sensor_priv; TYPE_2__ gspca_dev; } ;
struct TYPE_8__ {int cto; int cpo; int rs; int er; } ;
struct TYPE_7__ {int left; int top; int border; int height; int width; } ;
struct hdcs {int psmp; TYPE_4__ exp; TYPE_3__ array; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct hdcs* FUNC_1 (int,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct sd*,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct sd *VAR_8)
{
 struct hdcs *VAR_9;
 u16 VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_8, VAR_6, &VAR_10);
 if (VAR_11 < 0 || VAR_10 != 0x08)
  return -VAR_1;

 FUNC_2("HDCS-1000/1100 sensor detected\n");

 VAR_8->gspca_dev.cam.cam_mode = VAR_7;
 VAR_8->gspca_dev.cam.nmodes = FUNC_0(VAR_7);

 VAR_9 = FUNC_1(sizeof(struct hdcs), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->array.left = 8;
 VAR_9->array.top = 8;
 VAR_9->array.width = VAR_5;
 VAR_9->array.height = VAR_4;
 VAR_9->array.border = 4;

 VAR_9->exp.cto = 4;
 VAR_9->exp.cpo = 2;
 VAR_9->exp.rs = 186;
 VAR_9->exp.er = 100;
 VAR_9->psmp = (VAR_8->bridge == VAR_0) ? 20 : 5;

 VAR_8->sensor_priv = VAR_9;

 return 0;
}
