
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u8 ;
struct em28xx {int (* em28xx_read_reg_req_len ) (struct em28xx*,int ,int ,int*,int) ;} ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct em28xx*) ;
 int FUNC_1 (struct em28xx*,int ,int*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct em28xx*,int ,int ,int*,int) ;

int FUNC_4(struct em28xx *VAR_2, u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5 = (VAR_3 & 0x7f) | 0x80;
 __le16 VAR_6;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_1, &VAR_5, 1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = VAR_2->em28xx_read_reg_req_len(VAR_2, 0, VAR_0,
        (u8 *)&VAR_6, sizeof(VAR_6));

 if (VAR_4 < 0)
  return VAR_4;
 return FUNC_2(VAR_6);
}
