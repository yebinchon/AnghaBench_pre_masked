
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {scalar_t__ hwp; } ;
struct TYPE_3__ {scalar_t__ offset; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct fec_enet_private *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;


 FUNC_2(VAR_1, VAR_4->hwp + VAR_0);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++)
  FUNC_2(0, VAR_4->hwp + VAR_2[VAR_5].offset);


 FUNC_2(0, VAR_4->hwp + VAR_0);
}
