
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct rtsx_ucr {scalar_t__* cmd_buf; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtsx_ucr*) ;

__attribute__((used)) static inline void FUNC_1(struct rtsx_ucr *VAR_4,
  u16 VAR_5, u16 VAR_6, u8 VAR_7)
{
 FUNC_0(VAR_4);

 VAR_4->cmd_buf[VAR_0] = VAR_7;
 VAR_4->cmd_buf[5] = (u8)(VAR_6 >> 8);
 VAR_4->cmd_buf[6] = (u8)VAR_6;
 VAR_4->cmd_buf[8] = (u8)(VAR_5 >> 8);
 VAR_4->cmd_buf[9] = (u8)VAR_5;

 if (VAR_7 == VAR_1)
  VAR_4->cmd_buf[VAR_2] = 0;
 else
  VAR_4->cmd_buf[VAR_2] = VAR_3;
}
