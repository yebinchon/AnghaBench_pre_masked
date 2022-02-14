
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_info_args {int op; } ;
struct hl_fpriv {struct hl_device* hdev; } ;
struct hl_device {int in_reset; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;







 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,char*) ;
 int FUNC_3 (struct hl_device*,struct hl_info_args*) ;
 int FUNC_4 (struct hl_device*,struct hl_info_args*) ;
 int FUNC_5 (struct hl_fpriv*,struct hl_info_args*) ;
 scalar_t__ FUNC_6 (struct hl_device*) ;
 int FUNC_7 (struct hl_device*,int,struct hl_info_args*) ;
 int FUNC_8 (struct hl_device*,struct hl_info_args*) ;
 int FUNC_9 (struct hl_device*,struct hl_info_args*) ;

__attribute__((used)) static int FUNC_10(struct hl_fpriv *VAR_2, void *VAR_3,
    struct device *VAR_4)
{
 struct hl_info_args *VAR_5 = VAR_3;
 struct hl_device *VAR_6 = VAR_2->hdev;
 int VAR_7;





 switch (VAR_5->op) {
 case 128:
  return FUNC_9(VAR_6, VAR_5);

 case 134:
  return FUNC_3(VAR_6, VAR_5);

 default:
  break;
 }

 if (FUNC_6(VAR_6)) {
  FUNC_2(VAR_4,
   "Device is %s. Can't execute INFO IOCTL\n",
   FUNC_0(&VAR_6->in_reset) ? "in_reset" : "disabled");
  return -VAR_0;
 }

 switch (VAR_5->op) {
 case 131:
  VAR_7 = FUNC_7(VAR_6, 0, VAR_5);
  break;

 case 132:
  VAR_7 = FUNC_5(VAR_2, VAR_5);
  break;

 case 129:
  VAR_7 = FUNC_8(VAR_6, VAR_5);
  break;

 case 133:
  VAR_7 = FUNC_4(VAR_6, VAR_5);
  break;

 case 130:
  VAR_7 = FUNC_7(VAR_6, 1, VAR_5);
  break;

 default:
  FUNC_1(VAR_4, "Invalid request %d\n", VAR_5->op);
  VAR_7 = -VAR_1;
  break;
 }

 return VAR_7;
}
