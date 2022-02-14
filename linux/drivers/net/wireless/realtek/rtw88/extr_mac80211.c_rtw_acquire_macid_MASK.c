
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
struct rtw_dev {int mac_id_map; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static u8 FUNC_2(struct rtw_dev *VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_1->mac_id_map, VAR_0);
 if (VAR_2 < VAR_0)
  FUNC_1(VAR_2, VAR_1->mac_id_map);

 return VAR_2;
}
