
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sd_info {scalar_t__ sd_addr; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_chip*,int ,scalar_t__,int ,int *,int ) ;

int FUNC_1(struct rtsx_chip *VAR_6, int VAR_7)
{
 struct sd_info *VAR_8 = &VAR_6->sd_card;
 int VAR_9;
 u8 VAR_10, VAR_11;
 u32 VAR_12;

 if (VAR_7) {
  VAR_10 = VAR_3;
  VAR_11 = VAR_2;
  VAR_12 = VAR_8->sd_addr;
 } else {
  VAR_10 = VAR_0;
  VAR_11 = VAR_1;
  VAR_12 = 0;
 }

 VAR_9 = FUNC_0(VAR_6, VAR_10, VAR_12, VAR_11, ((void*)0), 0);
 if (VAR_9 != VAR_5)
  return VAR_4;

 return VAR_5;
}
