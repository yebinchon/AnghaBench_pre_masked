
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct skge_hw {TYPE_1__** dev; int phy_addr; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct skge_hw*,int,int ) ;
 int FUNC_3 (struct skge_hw*,int,int ,int) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct skge_hw *VAR_5, int VAR_6, u16 VAR_7, u16 VAR_8)
{
 int VAR_9;

 FUNC_3(VAR_5, VAR_6, VAR_3, VAR_8);
 FUNC_3(VAR_5, VAR_6, VAR_1,
    FUNC_0(VAR_5->phy_addr) | FUNC_1(VAR_7));
 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  FUNC_5(1);

  if (!(FUNC_2(VAR_5, VAR_6, VAR_1) & VAR_2))
   return 0;
 }

 FUNC_4("%s: phy write timeout\n", VAR_5->dev[VAR_6]->name);
 return -VAR_0;
}
