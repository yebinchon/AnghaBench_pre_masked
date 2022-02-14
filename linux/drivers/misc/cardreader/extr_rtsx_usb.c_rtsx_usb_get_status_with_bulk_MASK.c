
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtsx_ucr {int* rsp_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtsx_ucr*,int ,int ,int,int) ;
 int FUNC_1 (struct rtsx_ucr*,int,int) ;
 int FUNC_2 (struct rtsx_ucr*) ;
 int FUNC_3 (struct rtsx_ucr*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct rtsx_ucr *VAR_4, u16 *VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_4);
 FUNC_0(VAR_4, VAR_3, VAR_0, 0x00, 0x00);
 FUNC_0(VAR_4, VAR_3, VAR_2, 0x00, 0x00);
 VAR_6 = FUNC_3(VAR_4, VAR_1, 100);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_4, 2, 100);
 if (VAR_6)
  return VAR_6;

 *VAR_5 = ((VAR_4->rsp_buf[0] >> 2) & 0x0f) |
    ((VAR_4->rsp_buf[1] & 0x03) << 4);

 return 0;
}
