
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct byt_gpio {TYPE_1__* soc_data; } ;
struct TYPE_2__ {int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static u32 FUNC_1(struct byt_gpio *VAR_4, unsigned int VAR_5)
{

 if (!FUNC_0(VAR_4->soc_data->uid, VAR_2) &&
     VAR_5 >= 92 && VAR_5 <= 93)
  return VAR_0;


 if (!FUNC_0(VAR_4->soc_data->uid, VAR_3) &&
     VAR_5 >= 11 && VAR_5 <= 21)
  return VAR_0;

 return VAR_1;
}
