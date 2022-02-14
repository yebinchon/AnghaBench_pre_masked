
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct rtsx_ucr {scalar_t__ cmd_buf; int pusb_dev; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (scalar_t__,int *,scalar_t__) ;
 int FUNC_2 (struct rtsx_ucr*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct rtsx_ucr*,int ,scalar_t__,scalar_t__,int ,int *,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rtsx_ucr *VAR_5,
  u16 VAR_6, u16 VAR_7, u8 *VAR_8)
{
 u16 VAR_9 = FUNC_0(VAR_4 + VAR_7, 4);

 if (!VAR_8)
  return -VAR_0;

 if (VAR_9 > VAR_2)
  return -VAR_0;

 FUNC_2(VAR_5, VAR_6, VAR_7, VAR_3);
 FUNC_1(VAR_5->cmd_buf + VAR_4, VAR_8, VAR_7);

 return FUNC_3(VAR_5,
   FUNC_4(VAR_5->pusb_dev, VAR_1),
   VAR_5->cmd_buf, VAR_9, 0, ((void*)0), 100);
}
