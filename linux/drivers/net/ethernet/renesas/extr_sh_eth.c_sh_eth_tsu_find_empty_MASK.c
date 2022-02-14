
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
typedef int blank ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct net_device*,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2)
{
 u8 VAR_3[VAR_1];
 int VAR_4;

 FUNC_0(VAR_3, 0, sizeof(VAR_3));
 VAR_4 = FUNC_1(VAR_2, VAR_3);
 return (VAR_4 < 0) ? -VAR_0 : VAR_4;
}
