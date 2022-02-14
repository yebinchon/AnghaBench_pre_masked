
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fmdev {int curr_fmmode; } ;


 int VAR_0 ;


 int FUNC_0 (struct fmdev*,int ) ;
 int FUNC_1 (struct fmdev*,int ) ;

int FUNC_2(struct fmdev *VAR_1, u16 VAR_2)
{
 switch (VAR_1->curr_fmmode) {
 case 129:
  return FUNC_0(VAR_1, VAR_2);

 case 128:
  return FUNC_1(VAR_1, VAR_2);

 default:
  return -VAR_0;
 }
}
