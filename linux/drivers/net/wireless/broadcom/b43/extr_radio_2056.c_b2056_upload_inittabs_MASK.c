
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int dummy; } ;
struct b2056_inittabs_pts {int rx_length; int rx; int tx_length; int tx; int syn_length; int syn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct b43_wldev*,int,int,int ,int ,int ) ;
 struct b2056_inittabs_pts* FUNC_2 (struct b43_wldev*) ;

void FUNC_3(struct b43_wldev *VAR_5,
      bool VAR_6, bool VAR_7)
{
 const struct b2056_inittabs_pts *VAR_8;

 VAR_8 = FUNC_2(VAR_5);
 if (!VAR_8) {
  FUNC_0(1);
  return;
 }

 FUNC_1(VAR_5, VAR_6, VAR_7,
    VAR_2, VAR_8->syn, VAR_8->syn_length);
 FUNC_1(VAR_5, VAR_6, VAR_7,
    VAR_3, VAR_8->tx, VAR_8->tx_length);
 FUNC_1(VAR_5, VAR_6, VAR_7,
    VAR_4, VAR_8->tx, VAR_8->tx_length);
 FUNC_1(VAR_5, VAR_6, VAR_7,
    VAR_0, VAR_8->rx, VAR_8->rx_length);
 FUNC_1(VAR_5, VAR_6, VAR_7,
    VAR_1, VAR_8->rx, VAR_8->rx_length);
}
