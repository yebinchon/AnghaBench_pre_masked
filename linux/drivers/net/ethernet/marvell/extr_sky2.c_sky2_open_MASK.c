
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_port {unsigned int port; struct sky2_hw* hw; } ;
struct sky2_hw {int ports; scalar_t__ chip_id; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sky2_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sky2_port*,int ,struct net_device*,char*) ;
 int * VAR_6 ;
 int FUNC_3 (struct sky2_port*) ;
 int FUNC_4 (struct sky2_port*) ;
 int FUNC_5 (struct sky2_port*) ;
 int FUNC_6 (struct sky2_hw*,int ) ;
 int FUNC_7 (struct sky2_hw*,int ) ;
 int FUNC_8 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7)
{
 struct sky2_port *VAR_8 = FUNC_0(VAR_7);
 struct sky2_hw *VAR_9 = VAR_8->hw;
 unsigned VAR_10 = VAR_8->port;
 u32 VAR_11;
 int VAR_12;

 FUNC_1(VAR_7);

 VAR_12 = FUNC_3(VAR_8);
 if (VAR_12)
  goto err_out;


 if (VAR_9->ports == 1 && (VAR_12 = FUNC_7(VAR_9, VAR_7->name)))
  goto err_out;

 FUNC_5(VAR_8);


 VAR_11 = FUNC_6(VAR_9, VAR_0);

 if (VAR_9->chip_id == VAR_1 ||
     VAR_9->chip_id == VAR_3 ||
     VAR_9->chip_id == VAR_2)
  VAR_11 |= VAR_4;

 VAR_11 |= VAR_6[VAR_10];
 FUNC_8(VAR_9, VAR_0, VAR_11);
 FUNC_6(VAR_9, VAR_0);

 FUNC_2(VAR_8, VAR_5, VAR_7, "enabling interface\n");

 return 0;

err_out:
 FUNC_4(VAR_8);
 return VAR_12;
}
