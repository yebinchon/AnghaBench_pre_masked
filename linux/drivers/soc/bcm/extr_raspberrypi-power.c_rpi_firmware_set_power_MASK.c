
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_power_domain_packet {int on; int domain; } ;
struct rpi_power_domain {scalar_t__ old_interface; int fw; int domain; } ;
typedef int packet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct rpi_power_domain_packet*,int) ;

__attribute__((used)) static int FUNC_1(struct rpi_power_domain *VAR_2, bool VAR_3)
{
 struct rpi_power_domain_packet VAR_4;

 VAR_4.domain = VAR_2->domain;
 VAR_4.on = VAR_3;
 return FUNC_0(VAR_2->fw,
         VAR_2->old_interface ?
         VAR_1 :
         VAR_0,
         &VAR_4, sizeof(VAR_4));
}
