
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ssb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ssb_device*,int) ;
 int FUNC_1 (struct ssb_device*) ;
 int FUNC_2 (struct ssb_device*,int ) ;
 int FUNC_3 (struct ssb_device*,int ,int) ;

void FUNC_4(struct ssb_device *VAR_9, u32 VAR_10)
{
 u32 VAR_11;

 FUNC_0(VAR_9, VAR_10);
 FUNC_3(VAR_9, VAR_5,
      VAR_8 | VAR_6 |
      VAR_7 | VAR_10);
 FUNC_1(VAR_9);


 if (FUNC_2(VAR_9, VAR_3) & VAR_4)
  FUNC_3(VAR_9, VAR_3, 0);

 VAR_11 = FUNC_2(VAR_9, VAR_0);
 if (VAR_11 & (VAR_1 | VAR_2)) {
  VAR_11 &= ~(VAR_1 | VAR_2);
  FUNC_3(VAR_9, VAR_0, VAR_11);
 }

 FUNC_3(VAR_9, VAR_5,
      VAR_6 | VAR_7 |
      VAR_10);
 FUNC_1(VAR_9);

 FUNC_3(VAR_9, VAR_5, VAR_6 |
      VAR_10);
 FUNC_1(VAR_9);
}
