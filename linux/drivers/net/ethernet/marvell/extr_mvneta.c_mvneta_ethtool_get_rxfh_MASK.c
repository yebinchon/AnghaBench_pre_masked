
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mvneta_port {int indir; scalar_t__ neta_armada3700; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 struct mvneta_port* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3, u32 *VAR_4, u8 *VAR_5,
       u8 *VAR_6)
{
 struct mvneta_port *VAR_7 = FUNC_1(VAR_3);


 if (VAR_7->neta_armada3700)
  return -VAR_0;

 if (VAR_6)
  *VAR_6 = VAR_1;

 if (!VAR_4)
  return 0;

 FUNC_0(VAR_4, VAR_7->indir, VAR_2);

 return 0;
}
