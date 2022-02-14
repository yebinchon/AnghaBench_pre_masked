
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_ucr {int rsp_buf; int pusb_dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtsx_ucr*,int ,int ,int,int ,int *,int) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct rtsx_ucr *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_3 <= 0)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_3, 4);

 return FUNC_1(VAR_2,
   FUNC_2(VAR_2->pusb_dev, VAR_1),
   VAR_2->rsp_buf, VAR_3, 0, ((void*)0), VAR_4);
}
