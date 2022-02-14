
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct wilc_vif {struct wilc* wilc; } ;
struct wilc {TYPE_1__* hif_func; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* hif_read_reg ) (struct wilc*,int,int*) ;int (* hif_write_reg ) (struct wilc*,int,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct wilc*,int ) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct wilc_vif* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct wilc*,int ) ;
 int FUNC_5 (struct wilc*,int,int*) ;
 int FUNC_6 (struct wilc*,int,int) ;
 int FUNC_7 (struct wilc*,int,int) ;
 int FUNC_8 (struct wilc*,int) ;

__attribute__((used)) static u32 FUNC_9(struct net_device *VAR_2)
{
 u32 VAR_3;
 u32 VAR_4, VAR_5 = 0;
 struct wilc_vif *VAR_6 = FUNC_3(VAR_2);
 struct wilc *VAR_7 = VAR_6->wilc;

 FUNC_1(VAR_7, VAR_0);

 VAR_3 = FUNC_8(VAR_7, 1);

 if ((VAR_3 & 0xfff) != 0xa0) {
  VAR_5 = VAR_7->hif_func->hif_read_reg(VAR_7, 0x1118, &VAR_4);
  if (!VAR_5) {
   FUNC_2(VAR_2, "fail read reg 0x1118\n");
   goto release;
  }
  VAR_4 |= FUNC_0(0);
  VAR_5 = VAR_7->hif_func->hif_write_reg(VAR_7, 0x1118, VAR_4);
  if (!VAR_5) {
   FUNC_2(VAR_2, "fail write reg 0x1118\n");
   goto release;
  }
  VAR_5 = VAR_7->hif_func->hif_write_reg(VAR_7, 0xc0000, 0x71);
  if (!VAR_5) {
   FUNC_2(VAR_2, "fail write reg 0xc0000\n");
   goto release;
  }
 }

release:
 FUNC_4(VAR_7, VAR_1);

 return VAR_5;
}
