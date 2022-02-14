
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ave_private {int dummy; } ;
typedef enum desc_id { ____Placeholder_desc_id } desc_id ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ave_private*) ;
 int FUNC_1 (struct net_device*,int,int,int ,int ) ;
 int FUNC_2 (int ) ;
 struct ave_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2, enum desc_id VAR_3,
    int VAR_4, dma_addr_t VAR_5)
{
 struct ave_private *VAR_6 = FUNC_3(VAR_2);

 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_0,
         FUNC_2(VAR_5));
 if (FUNC_0(VAR_6))
  FUNC_1(VAR_2, VAR_3,
          VAR_4, VAR_1,
          FUNC_4(VAR_5));
}
