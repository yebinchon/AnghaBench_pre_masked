
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_usb_ms {struct rtsx_ucr* ucr; } ;
struct rtsx_ucr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_ucr*) ;
 int FUNC_1 (struct rtsx_ucr*) ;
 int FUNC_2 (struct rtsx_ucr*,int ,int,int) ;

__attribute__((used)) static inline void FUNC_3(struct rtsx_usb_ms *VAR_3)
{
 struct rtsx_ucr *VAR_4 = VAR_3->ucr;
 FUNC_2(VAR_4, VAR_0,
      VAR_2 | VAR_1,
      VAR_2 | VAR_1);

 FUNC_0(VAR_4);
 FUNC_1(VAR_4);
}
