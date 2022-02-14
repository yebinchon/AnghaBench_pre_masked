
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct mvneta_port {int indir; scalar_t__ neta_armada3700; } ;


 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ const VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct mvneta_port*) ;
 struct mvneta_port* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4, const u32 *VAR_5,
       const u8 *VAR_6, const u8 VAR_7)
{
 struct mvneta_port *VAR_8 = FUNC_2(VAR_4);


 if (VAR_8->neta_armada3700)
  return -VAR_0;




 if (VAR_6 ||
     (VAR_7 != VAR_1 && VAR_7 != VAR_2))
  return -VAR_0;

 if (!VAR_5)
  return 0;

 FUNC_0(VAR_8->indir, VAR_5, VAR_3);

 return FUNC_1(VAR_8);
}
