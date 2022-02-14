
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peak_canfd_priv {int index; int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct peak_canfd_priv*) ;
 int FUNC_2 (struct peak_canfd_priv*,int ) ;

__attribute__((used)) static void FUNC_3(struct peak_canfd_priv *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1->ndev, "channel %u reset failed\n",
      VAR_1->index);
 } else {

  FUNC_2(VAR_1, VAR_0);
 }
}
