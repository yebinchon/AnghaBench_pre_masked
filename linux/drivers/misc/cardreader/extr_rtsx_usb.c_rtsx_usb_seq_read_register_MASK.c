
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_ucr {int pusb_dev; int * cmd_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct rtsx_ucr*,int,int *) ;
 int FUNC_2 (struct rtsx_ucr*,int,int,int ) ;
 int FUNC_3 (struct rtsx_ucr*,int ,int *,int,int ,int *,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct rtsx_ucr *VAR_4,
  u16 VAR_5, u16 VAR_6, u8 *VAR_7)
{
 int VAR_8, VAR_9;
 u16 VAR_10 = FUNC_0(VAR_6, 4);
 u16 VAR_11 = VAR_6 - VAR_10;

 if (!VAR_7)
  return -VAR_0;


 if (VAR_10) {
  FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3);
  VAR_9 = FUNC_3(VAR_4,
    FUNC_5(VAR_4->pusb_dev, VAR_2),
    VAR_4->cmd_buf, 12, 0, ((void*)0), 100);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_3(VAR_4,
    FUNC_4(VAR_4->pusb_dev, VAR_1),
    VAR_7, VAR_10, 0, ((void*)0), 100);
  if (VAR_9)
   return VAR_9;
 }


 for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
  VAR_9 = FUNC_1(VAR_4, VAR_5 + VAR_10 + VAR_8,
    VAR_7 + VAR_10 + VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
