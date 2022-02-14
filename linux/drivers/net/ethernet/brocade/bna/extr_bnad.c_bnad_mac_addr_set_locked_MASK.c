
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct bnad {TYPE_1__* rx_info; } ;
struct TYPE_2__ {int rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int const*) ;

int
FUNC_2(struct bnad *VAR_2, const u8 *VAR_3)
{
 int VAR_4;

 if (!FUNC_1(VAR_3))
  return -VAR_1;


 if (!VAR_2->rx_info[0].rx)
  return 0;

 VAR_4 = FUNC_0(VAR_2->rx_info[0].rx, VAR_3);
 if (VAR_4 != VAR_0)
  return -VAR_1;

 return 0;
}
