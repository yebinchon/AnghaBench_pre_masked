
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sky2_hw {scalar_t__ chip_id; scalar_t__ chip_rev; struct net_device** dev; } ;
struct net_device {scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (unsigned int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sky2_hw*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sky2_hw *VAR_10, unsigned VAR_11)
{
 struct net_device *VAR_12 = VAR_10->dev[VAR_11];

 if ( (VAR_10->chip_id == VAR_0 &&
       VAR_10->chip_rev != VAR_2) ||
      VAR_10->chip_id >= VAR_1) {

  FUNC_1(VAR_10, FUNC_0(VAR_11, VAR_7), VAR_9);
 } else if (VAR_12->mtu > VAR_5) {

  FUNC_1(VAR_10, FUNC_0(VAR_11, VAR_6),
        (VAR_4 << 16) | VAR_3);

  FUNC_1(VAR_10, FUNC_0(VAR_11, VAR_7), VAR_8);
 } else
  FUNC_1(VAR_10, FUNC_0(VAR_11, VAR_7), VAR_9);
}
