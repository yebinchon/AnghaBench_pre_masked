
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpi_power_domains {int fw; } ;
struct rpi_power_domain_packet {int on; int domain; } ;
typedef int packet ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct rpi_power_domain_packet*,int) ;

__attribute__((used)) static bool
FUNC_1(struct rpi_power_domains *VAR_2)
{
 struct rpi_power_domain_packet VAR_3;
 int VAR_4;

 VAR_3.domain = VAR_1;
 VAR_3.on = ~0;

 VAR_4 = FUNC_0(VAR_2->fw,
        VAR_0,
        &VAR_3, sizeof(VAR_3));

 return VAR_4 == 0 && VAR_3.on != ~0;
}
