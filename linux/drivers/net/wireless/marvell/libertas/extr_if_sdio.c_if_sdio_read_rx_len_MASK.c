
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct if_sdio_card {int model; int rx_unit; int func; } ;


 int VAR_0 ;



 int FUNC_0 (struct if_sdio_card*,int*) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static u16 FUNC_2(struct if_sdio_card *VAR_1, int *VAR_2)
{
 int VAR_3;
 u16 VAR_4;

 switch (VAR_1->model) {
 case 130:
 case 129:
  VAR_4 = FUNC_0(VAR_1, &VAR_3);
  break;
 case 128:
 default:
  VAR_4 = FUNC_1(VAR_1->func, VAR_0, &VAR_3);
  if (!VAR_3)
   VAR_4 <<= VAR_1->rx_unit;
  else
   VAR_4 = 0xffff;

  break;
 }

 if (VAR_2)
  *VAR_2 = VAR_3;

 return VAR_4;
}
