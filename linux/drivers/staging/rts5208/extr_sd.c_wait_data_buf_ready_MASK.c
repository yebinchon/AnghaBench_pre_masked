
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd_info {int sd_addr; scalar_t__ sd_data_buf_ready; } ;
struct rtsx_chip {struct sd_info sd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtsx_chip*,int ) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int ,int *,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ) ;

__attribute__((used)) static int FUNC_3(struct rtsx_chip *VAR_8)
{
 struct sd_info *VAR_9 = &VAR_8->sd_card;
 int VAR_10, VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (FUNC_0(VAR_8, VAR_0) != VAR_6) {
   FUNC_2(VAR_8, VAR_1);
   return VAR_5;
  }

  VAR_9->sd_data_buf_ready = 0;

  VAR_11 = FUNC_1(VAR_8, VAR_4,
          VAR_9->sd_addr, VAR_2,
          ((void*)0), 0);
  if (VAR_11 != VAR_6)
   return VAR_5;

  if (VAR_9->sd_data_buf_ready) {
   return FUNC_1(VAR_8, VAR_4,
    VAR_9->sd_addr, VAR_2, ((void*)0), 0);
  }
 }

 FUNC_2(VAR_8, VAR_3);

 return VAR_5;
}
