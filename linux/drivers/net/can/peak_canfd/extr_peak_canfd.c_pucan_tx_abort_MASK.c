
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pucan_tx_abort {int flags; } ;
struct peak_canfd_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct pucan_tx_abort* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct peak_canfd_priv*) ;
 int FUNC_3 (struct peak_canfd_priv*) ;

__attribute__((used)) static int FUNC_4(struct peak_canfd_priv *VAR_1, u16 VAR_2)
{
 struct pucan_tx_abort *VAR_3;

 VAR_3 = FUNC_1(FUNC_2(VAR_1), VAR_0);

 VAR_3->flags = FUNC_0(VAR_2);

 return FUNC_3(VAR_1);
}
