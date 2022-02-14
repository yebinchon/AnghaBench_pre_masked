
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 scalar_t__ FUNC_0 (struct usbhs_pipe*) ;
 size_t FUNC_1 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_2 (struct usbhs_pipe*,int const) ;
 int FUNC_3 (struct usbhs_pipe*,int ) ;

__attribute__((used)) static int FUNC_4(struct usbhs_pipe *VAR_5, int VAR_6,
    int VAR_7, u16 *VAR_8)
{
 u16 VAR_9 = 0;
 u16 VAR_10 = 0;
 u16 VAR_11 = 0;
 u16 VAR_12 = 0;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;
 static const u16 VAR_16[] = {
  [130] = 133,
  [129] = 132,
  [128] = 131,
 };

 if (FUNC_0(VAR_5))
  return -VAR_1;
 VAR_9 = VAR_16[FUNC_1(VAR_5)];


 if (FUNC_2(VAR_5, 128) ||
     FUNC_2(VAR_5, 130))
  VAR_10 = 0;




 if (FUNC_2(VAR_5, 130))
  VAR_12 = 0;


 if (VAR_7)
  FUNC_3(VAR_5, VAR_2);

 if (!!VAR_6 ^ !!VAR_7)
  VAR_13 |= VAR_0;

 if (!VAR_13)
  FUNC_3(VAR_5, VAR_3);


 if (FUNC_2(VAR_5, 130) &&
     !VAR_13)
  VAR_15 = VAR_4;


 VAR_14 = 0;
 *VAR_8 = VAR_9 |
     VAR_10 |
     VAR_11 |
     VAR_12 |
     VAR_13 |
     VAR_15 |
     VAR_14;
 return 0;
}
