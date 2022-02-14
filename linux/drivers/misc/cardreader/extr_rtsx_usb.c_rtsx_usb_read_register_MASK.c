
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_ucr {int * rsp_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtsx_ucr*,int ,int ,int ,int ) ;
 int FUNC_1 (struct rtsx_ucr*,int,int) ;
 int FUNC_2 (struct rtsx_ucr*) ;
 int FUNC_3 (struct rtsx_ucr*,int ,int) ;

int FUNC_4(struct rtsx_ucr *VAR_2, u16 VAR_3, u8 *VAR_4)
{
 int VAR_5;

 if (VAR_4 != ((void*)0))
  *VAR_4 = 0;

 FUNC_2(VAR_2);
 FUNC_0(VAR_2, VAR_1, VAR_3, 0, 0);
 VAR_5 = FUNC_3(VAR_2, VAR_0, 100);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_2, 1, 100);
 if (VAR_5)
  return VAR_5;

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_2->rsp_buf[0];

 return 0;
}
