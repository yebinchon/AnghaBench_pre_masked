
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct rtsx_ucr {int cmd_idx; void** cmd_buf; int pusb_dev; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct rtsx_ucr*) ;
 int FUNC_1 (struct rtsx_ucr*,int ,void**,scalar_t__,int ,int *,int) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct rtsx_ucr *VAR_5, u8 VAR_6, int VAR_7)
{
 int VAR_8;

 VAR_5->cmd_buf[VAR_1] = (u8)(VAR_5->cmd_idx >> 8);
 VAR_5->cmd_buf[VAR_2] = (u8)(VAR_5->cmd_idx);
 VAR_5->cmd_buf[VAR_4] = VAR_6;

 VAR_8 = FUNC_1(VAR_5,
   FUNC_2(VAR_5->pusb_dev, VAR_3),
   VAR_5->cmd_buf, VAR_5->cmd_idx * 4 + VAR_0,
   0, ((void*)0), VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_5);
  return VAR_8;
 }

 return 0;
}
