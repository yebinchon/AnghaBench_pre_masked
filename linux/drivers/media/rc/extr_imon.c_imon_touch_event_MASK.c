
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imon_context {unsigned char touch_x; int touch_y; int touch; int ttimer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,unsigned char) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct imon_context *VAR_5, unsigned char *VAR_6)
{
 FUNC_3(&VAR_5->ttimer, VAR_4 + VAR_3);
 VAR_5->touch_x = (VAR_6[0] << 4) | (VAR_6[1] >> 4);
 VAR_5->touch_y = 0xfff - ((VAR_6[2] << 4) | (VAR_6[1] & 0xf));
 FUNC_0(VAR_5->touch, VAR_0, VAR_5->touch_x);
 FUNC_0(VAR_5->touch, VAR_1, VAR_5->touch_y);
 FUNC_1(VAR_5->touch, VAR_2, 0x01);
 FUNC_2(VAR_5->touch);
}
