
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {int dev; } ;
struct hl_debug_params {int op; } ;


 int VAR_0 ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hl_device*,struct hl_debug_params*) ;
 int FUNC_3 (struct hl_device*,struct hl_debug_params*) ;
 int FUNC_4 (struct hl_device*,struct hl_debug_params*) ;
 int FUNC_5 (struct hl_device*,struct hl_debug_params*) ;
 int FUNC_6 (struct hl_device*,struct hl_debug_params*) ;
 int FUNC_7 (struct hl_device*,struct hl_debug_params*) ;
 int VAR_1 ;

int FUNC_8(struct hl_device *VAR_2, void *VAR_3)
{
 struct hl_debug_params *VAR_4 = VAR_3;
 u32 VAR_5;
 int VAR_6 = 0;

 switch (VAR_4->op) {
 case 129:
  VAR_6 = FUNC_7(VAR_2, VAR_4);
  break;
 case 133:
  VAR_6 = FUNC_3(VAR_2, VAR_4);
  break;
 case 132:
  VAR_6 = FUNC_4(VAR_2, VAR_4);
  break;
 case 131:
  VAR_6 = FUNC_5(VAR_2, VAR_4);
  break;
 case 134:
  VAR_6 = FUNC_2(VAR_2, VAR_4);
  break;
 case 130:
  VAR_6 = FUNC_6(VAR_2, VAR_4);
  break;
 case 128:

  break;

 default:
  FUNC_1(VAR_2->dev, "Unknown coresight id %d\n", VAR_4->op);
  return -VAR_0;
 }


 VAR_5 = FUNC_0(VAR_1);

 return VAR_6;
}
