
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct armada38x_rtc {int initialized; TYPE_1__* data; } ;
struct TYPE_2__ {int (* read_rtc_reg ) (struct armada38x_rtc*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct armada38x_rtc*,int ) ;
 int FUNC_2 (struct armada38x_rtc*,int ) ;

__attribute__((used)) static void FUNC_3(struct armada38x_rtc *VAR_7)
{
 u32 VAR_8;

 VAR_8 = VAR_7->data->read_rtc_reg(VAR_7, VAR_1);

 if (VAR_8 & 0xff) {
  FUNC_1(0, VAR_7, VAR_1);
  FUNC_0(500);
  FUNC_1(0, VAR_7, VAR_4);
  FUNC_1(VAR_5 | VAR_6, VAR_7,
      VAR_3);
  FUNC_1(VAR_2, VAR_7, VAR_0);
 }
 VAR_7->initialized = 1;
}
