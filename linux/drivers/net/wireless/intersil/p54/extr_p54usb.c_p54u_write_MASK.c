
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54u_priv {int udev; } ;
struct net2280_reg_write {void* val; void* addr; int port; } ;
typedef enum net2280_op_type { ____Placeholder_net2280_op_type } net2280_op_type ;
typedef void* __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,unsigned int,struct net2280_reg_write*,int,int*,int) ;
 unsigned int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct p54u_priv *VAR_2,
        struct net2280_reg_write *VAR_3,
        enum net2280_op_type VAR_4,
        __le32 VAR_5, __le32 VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_4 & 0x0800)
  VAR_7 = FUNC_2(VAR_2->udev, VAR_1);
 else
  VAR_7 = FUNC_2(VAR_2->udev, VAR_0);

 VAR_3->port = FUNC_0(VAR_4);
 VAR_3->addr = VAR_5;
 VAR_3->val = VAR_6;

 return FUNC_1(VAR_2->udev, VAR_7, VAR_3, sizeof(*VAR_3), &VAR_8, 1000);
}
