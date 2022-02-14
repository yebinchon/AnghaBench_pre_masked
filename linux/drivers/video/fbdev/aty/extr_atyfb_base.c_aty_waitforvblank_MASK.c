
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aty_interrupt {unsigned int count; int wait; } ;
struct atyfb_par {struct aty_interrupt vblank; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atyfb_par*,int) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct atyfb_par *VAR_3, u32 VAR_4)
{
 struct aty_interrupt *VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 switch (VAR_4) {
 case 0:
  VAR_5 = &VAR_3->vblank;
  break;
 default:
  return -VAR_0;
 }

 VAR_7 = FUNC_0(VAR_3, 0);
 if (VAR_7)
  return VAR_7;

 VAR_6 = VAR_5->count;
 VAR_7 = FUNC_1(VAR_5->wait,
            VAR_6 != VAR_5->count, VAR_2/10);
 if (VAR_7 < 0)
  return VAR_7;
 if (VAR_7 == 0) {
  FUNC_0(VAR_3, 1);
  return -VAR_1;
 }

 return 0;
}
