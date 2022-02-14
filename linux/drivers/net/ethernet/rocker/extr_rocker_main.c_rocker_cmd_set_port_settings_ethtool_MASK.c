
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;
typedef int copy_ecmd ;


 int FUNC_0 (struct ethtool_link_ksettings*,struct ethtool_link_ksettings const*,int) ;
 int FUNC_1 (struct rocker_port*,int,int ,struct ethtool_link_ksettings*,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_2(struct rocker_port *VAR_1,
         const struct ethtool_link_ksettings *VAR_2)
{
 struct ethtool_link_ksettings VAR_3;

 FUNC_0(&VAR_3, VAR_2, sizeof(VAR_3));

 return FUNC_1(VAR_1, 0,
          VAR_0,
          &VAR_3, ((void*)0), ((void*)0));
}
