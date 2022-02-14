
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int prtad; } ;
struct cphy {TYPE_1__ mdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cphy*,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, 0);
 if (!VAR_5)
  VAR_5 = FUNC_1(&VAR_4->mdio, VAR_4->mdio.prtad,
        VAR_3, VAR_2,
        VAR_0 | VAR_1, 1);

 return VAR_5;
}
