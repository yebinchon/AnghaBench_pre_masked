
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amd_ntb_dev {int peer_sta; int cntl_sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct amd_ntb_dev *VAR_4)
{
 if (!VAR_4->peer_sta)
  return FUNC_0(VAR_4->cntl_sta);

 if (VAR_4->peer_sta & VAR_1) {
  VAR_4->peer_sta = 0;
  return 1;
 }







 if (VAR_4->peer_sta & VAR_3)
  VAR_4->peer_sta &= ~VAR_3;
 else if (VAR_4->peer_sta & (VAR_2 | VAR_0))
  VAR_4->peer_sta = 0;

 return 0;
}
