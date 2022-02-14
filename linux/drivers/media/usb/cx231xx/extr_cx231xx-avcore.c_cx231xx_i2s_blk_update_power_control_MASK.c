
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx231xx {int dummy; } ;
typedef enum AV_MODE { ____Placeholder_AV_MODE } AV_MODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx231xx*,int ,int ,int,int*,int) ;
 int FUNC_1 (struct cx231xx*,int ,int ,int,int,int) ;

int FUNC_2(struct cx231xx *VAR_3,
     enum AV_MODE VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = 0;

 if (VAR_4 != VAR_2) {
  VAR_5 = FUNC_0(VAR_3, VAR_1,
       VAR_0, 1, &VAR_6, 1);
  VAR_6 |= 0xfe;
  VAR_5 = FUNC_1(VAR_3, VAR_1,
      VAR_0, 1, VAR_6, 1);
 } else {
  VAR_5 = FUNC_1(VAR_3, VAR_1,
      VAR_0, 1, 0x00, 1);
 }

 return VAR_5;
}
