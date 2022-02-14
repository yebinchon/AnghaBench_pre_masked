
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdw_msg {int flags; scalar_t__ len; scalar_t__ page; } ;
struct sdw_cdns {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct sdw_cdns*,struct sdw_msg*) ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct sdw_cdns *VAR_3, struct sdw_msg *VAR_4, int *VAR_5)
{
 int VAR_6;

 if (VAR_4->page) {
  VAR_6 = FUNC_0(VAR_3, VAR_4);
  if (VAR_6) {
   VAR_4->len = 0;
   return VAR_6;
  }
 }

 switch (VAR_4->flags) {
 case 129:
  *VAR_5 = VAR_0;
  break;

 case 128:
  *VAR_5 = VAR_1;
  break;

 default:
  FUNC_1(VAR_3->dev, "Invalid msg cmd: %d\n", VAR_4->flags);
  return -VAR_2;
 }

 return 0;
}
