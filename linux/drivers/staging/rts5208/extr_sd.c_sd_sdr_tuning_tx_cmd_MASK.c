
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd_info {int sd_addr; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtsx_chip*,int ,int ,int ) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ) ;
 scalar_t__ FUNC_2 (struct rtsx_chip*,int ) ;
 int FUNC_3 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct rtsx_chip *VAR_8, u8 VAR_9)
{
 struct sd_info *VAR_10 = &VAR_8->sd_card;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_7);
 if (VAR_11 != VAR_6)
  return VAR_5;

 VAR_11 = FUNC_0(VAR_8, VAR_0, VAR_1,
         VAR_1);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_3(VAR_8, VAR_4, VAR_10->sd_addr,
         VAR_3, ((void*)0), 0);
 if (VAR_11 != VAR_6) {
  if (FUNC_2(VAR_8, VAR_2)) {
   FUNC_0(VAR_8, VAR_0,
         VAR_1, 0);
   return VAR_5;
  }
 }

 VAR_11 = FUNC_0(VAR_8, VAR_0, VAR_1,
         0);
 if (VAR_11)
  return VAR_11;

 return VAR_6;
}
