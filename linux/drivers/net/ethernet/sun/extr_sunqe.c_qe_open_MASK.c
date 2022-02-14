
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunqe {int mconfig; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sunqe* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sunqe*,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3)
{
 struct sunqe *VAR_4 = FUNC_0(VAR_3);

 VAR_4->mconfig = (VAR_2 |
   VAR_1 |
   VAR_0);
 return FUNC_1(VAR_4, 0);
}
