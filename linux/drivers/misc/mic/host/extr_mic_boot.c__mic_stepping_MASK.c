
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mic_device {int stepping; } ;
struct cosm_device {int dummy; } ;
typedef int ssize_t ;






 int VAR_0 ;
 struct mic_device* FUNC_0 (struct cosm_device*) ;
 int FUNC_1 (char*,int ,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct cosm_device *VAR_1, char *VAR_2)
{
 struct mic_device *VAR_3 = FUNC_0(VAR_1);
 const char *VAR_4 = "??";

 switch (VAR_3->stepping) {
 case 131:
  VAR_4 = "A0";
  break;
 case 130:
  VAR_4 = "B0";
  break;
 case 129:
  VAR_4 = "B1";
  break;
 case 128:
  VAR_4 = "C0";
  break;
 default:
  break;
 }
 return FUNC_1(VAR_2, VAR_0, "%s\n", VAR_4);
}
