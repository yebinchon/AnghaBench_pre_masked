
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mmc_card {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (struct mmc_card*) ;
 int FUNC_3 (struct mmc_card*,int ,int ,int *,int) ;

int FUNC_4(struct mmc_card *VAR_5, u8 **VAR_6)
{
 int VAR_7;
 u8 *VAR_8;

 if (!VAR_5 || !VAR_6)
  return -VAR_0;

 if (!FUNC_2(VAR_5))
  return -VAR_2;





 VAR_8 = FUNC_1(512, VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_5, VAR_5->host, VAR_4, VAR_8,
    512);
 if (VAR_7)
  FUNC_0(VAR_8);
 else
  *VAR_6 = VAR_8;

 return VAR_7;
}
