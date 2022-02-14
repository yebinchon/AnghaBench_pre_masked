
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8152 {int rx_buf_sz; int version; TYPE_1__* netdev; } ;
struct TYPE_2__ {int mtu; } ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct r8152*,int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct r8152 *VAR_2)
{
 u32 VAR_3 = VAR_2->rx_buf_sz - FUNC_2(VAR_2->netdev->mtu);

 switch (VAR_2->version) {
 case 133:
 case 132:
 case 131:
 case 130:
  FUNC_1(VAR_2, VAR_0, VAR_1,
          VAR_3 / 4);
  break;
 case 129:
 case 128:
  FUNC_1(VAR_2, VAR_0, VAR_1,
          VAR_3 / 8);
  break;
 default:
  FUNC_0(1);
  break;
 }
}
