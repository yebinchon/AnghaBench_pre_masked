
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct v4l2_subdev {int name; } ;
struct ths8200_state {int dv_timings; int chip_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct ths8200_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,char*,...) ;
 int FUNC_3 (int ,char*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_5)
{
 struct ths8200_state *VAR_6 = FUNC_1(VAR_5);
 uint8_t VAR_7 = FUNC_0(VAR_5, VAR_0);

 FUNC_2(VAR_5, "----- Chip status -----\n");
 FUNC_2(VAR_5, "version: %u\n", VAR_6->chip_version);
 FUNC_2(VAR_5, "power: %s\n", (VAR_7 & 0x0c) ? "off" : "on");
 FUNC_2(VAR_5, "reset: %s\n", (VAR_7 & 0x01) ? "off" : "on");
 FUNC_2(VAR_5, "test pattern: %s\n",
    (VAR_7 & 0x20) ? "enabled" : "disabled");
 FUNC_2(VAR_5, "format: %ux%u\n",
    FUNC_0(VAR_5, VAR_4) * 256 +
    FUNC_0(VAR_5, VAR_3),
    (FUNC_0(VAR_5, VAR_2) & 0x07) * 256 +
    FUNC_0(VAR_5, VAR_1));
 FUNC_3(VAR_5->name, "Configured format:",
         &VAR_6->dv_timings, 1);
 return 0;
}
