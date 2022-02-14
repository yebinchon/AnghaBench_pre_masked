
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vcap_data {int dummy; } ;
struct ocelot_vcap_udp_tcp {int mask; int value; } ;


 int FUNC_0 (struct vcap_data*,int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vcap_data *VAR_0, u32 VAR_1,
     struct ocelot_vcap_udp_tcp *VAR_2)
{
 FUNC_0(VAR_0, VAR_1, 16, VAR_2->value, VAR_2->mask);
}
