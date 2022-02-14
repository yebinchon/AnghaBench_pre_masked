
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sky2_hw {TYPE_1__* pdev; struct net_device** dev; } ;
struct net_device {int name; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *,char*,int ,unsigned int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (struct sky2_hw*,int ) ;
 int FUNC_4 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct sky2_hw *VAR_4, unsigned VAR_5, u16 VAR_6)
{
 struct net_device *VAR_7 = VAR_4->dev[VAR_5];
 u16 VAR_8 = FUNC_3(VAR_4, FUNC_1(VAR_6, VAR_1));

 FUNC_2(&VAR_4->pdev->dev, "%s: descriptor error q=%#x get=%u put=%u\n",
  VAR_7->name, (unsigned) VAR_6, (unsigned) VAR_8,
  (unsigned) FUNC_3(VAR_4, FUNC_1(VAR_6, VAR_2)));

 FUNC_4(VAR_4, FUNC_0(VAR_6, VAR_3), VAR_0);
}
