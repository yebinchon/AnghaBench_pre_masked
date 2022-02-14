
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cx231xx {int ctl_ainput; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct cx231xx*,int ,int ,int,int,int) ;

int FUNC_1(struct cx231xx *VAR_3, u8 VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4) {
 case 129:
  VAR_5 = FUNC_0(VAR_3, VAR_2,
      VAR_1, 1, 0x00, 1);
  VAR_5 = FUNC_0(VAR_3, VAR_2,
      VAR_0, 1, 0x80, 1);
  break;
 case 128:
 default:
  break;
 }

 VAR_3->ctl_ainput = VAR_4;

 return VAR_5;
}
