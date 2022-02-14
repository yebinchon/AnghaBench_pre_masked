
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_ucr {int pusb_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int,int,int,int *,int ,int) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct rtsx_ucr *VAR_6, u16 VAR_7,
  u8 VAR_8, u8 VAR_9)
{
 u16 VAR_10, VAR_11;

 VAR_7 |= VAR_1 << VAR_0;
 VAR_10 = FUNC_0(VAR_7);
 VAR_11 = VAR_8 | VAR_9 << 8;

 return FUNC_1(VAR_6->pusb_dev,
   FUNC_2(VAR_6->pusb_dev, 0), VAR_2,
   VAR_3 | VAR_5 | VAR_4,
   VAR_10, VAR_11, ((void*)0), 0, 100);
}
