
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtw_sec_desc {int cam_map; scalar_t__ default_key_search; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct rtw_sec_desc *VAR_2)
{




 if (VAR_2->default_key_search)
  return FUNC_1(VAR_2->cam_map, VAR_0,
       VAR_1);

 return FUNC_0(VAR_2->cam_map, VAR_0);
}
