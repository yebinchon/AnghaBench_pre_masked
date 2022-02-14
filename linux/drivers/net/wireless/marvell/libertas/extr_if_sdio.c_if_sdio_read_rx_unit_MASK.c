
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct if_sdio_card {int func; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static u8 FUNC_1(struct if_sdio_card *VAR_1)
{
 int VAR_2;
 u8 VAR_3;

 VAR_3 = FUNC_0(VAR_1->func, VAR_0, &VAR_2);

 if (VAR_2)
  VAR_3 = 0;

 return VAR_3;
}
