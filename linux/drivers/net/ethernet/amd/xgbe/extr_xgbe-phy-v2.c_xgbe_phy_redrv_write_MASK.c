
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xgbe_prv_data {int netdev; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int redrv_addr; } ;
struct xgbe_i2c_op {int len; int* buf; int target; int cmd; } ;
typedef int redrv_data ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int VAR_4 ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_2 (struct xgbe_prv_data*,struct xgbe_i2c_op*) ;

__attribute__((used)) static int FUNC_3(struct xgbe_prv_data *VAR_5, unsigned int VAR_6,
    unsigned int VAR_7)
{
 struct xgbe_phy_data *VAR_8 = VAR_5->phy_data;
 struct xgbe_i2c_op VAR_9;
 __be16 *VAR_10;
 u8 VAR_11[5], VAR_12;
 unsigned int VAR_13, VAR_14;
 int VAR_15;


 VAR_11[0] = ((VAR_6 >> 8) & 0xff) << 1;
 VAR_11[1] = VAR_6 & 0xff;
 VAR_10 = (__be16 *)&VAR_11[2];
 *VAR_10 = FUNC_0(VAR_7);


 VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_12 += VAR_11[VAR_13];
  if (VAR_11[VAR_13] > VAR_12)
   VAR_12++;
 }
 VAR_11[4] = ~VAR_12;

 VAR_14 = 1;
again1:
 VAR_9.cmd = VAR_3;
 VAR_9.target = VAR_8->redrv_addr;
 VAR_9.len = sizeof(VAR_11);
 VAR_9.buf = VAR_11;
 VAR_15 = FUNC_2(VAR_5, &VAR_9);
 if (VAR_15) {
  if ((VAR_15 == -VAR_0) && VAR_14--)
   goto again1;

  return VAR_15;
 }

 VAR_14 = 1;
again2:
 VAR_9.cmd = VAR_2;
 VAR_9.target = VAR_8->redrv_addr;
 VAR_9.len = 1;
 VAR_9.buf = VAR_11;
 VAR_15 = FUNC_2(VAR_5, &VAR_9);
 if (VAR_15) {
  if ((VAR_15 == -VAR_0) && VAR_14--)
   goto again2;

  return VAR_15;
 }

 if (VAR_11[0] != 0xff) {
  FUNC_1(VAR_5, VAR_4, VAR_5->netdev,
     "Redriver write checksum error\n");
  VAR_15 = -VAR_1;
 }

 return VAR_15;
}
