
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qca8k_priv {int dummy; } ;
struct qca8k_fdb {int vid; int aging; int port_mask; int* mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct qca8k_priv*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct qca8k_priv *VAR_10, struct qca8k_fdb *VAR_11)
{
 u32 VAR_12[4];
 int VAR_13;


 for (VAR_13 = 0; VAR_13 < 4; VAR_13++)
  VAR_12[VAR_13] = FUNC_0(VAR_10, VAR_9 + (VAR_13 * 4));


 VAR_11->vid = (VAR_12[2] >> VAR_8) & VAR_7;

 VAR_11->aging = VAR_12[2] & VAR_6;

 VAR_11->port_mask = (VAR_12[1] >> VAR_5) & VAR_4;

 VAR_11->mac[0] = (VAR_12[1] >> VAR_0) & 0xff;
 VAR_11->mac[1] = VAR_12[1] & 0xff;
 VAR_11->mac[2] = (VAR_12[0] >> VAR_1) & 0xff;
 VAR_11->mac[3] = (VAR_12[0] >> VAR_2) & 0xff;
 VAR_11->mac[4] = (VAR_12[0] >> VAR_3) & 0xff;
 VAR_11->mac[5] = VAR_12[0] & 0xff;
}
