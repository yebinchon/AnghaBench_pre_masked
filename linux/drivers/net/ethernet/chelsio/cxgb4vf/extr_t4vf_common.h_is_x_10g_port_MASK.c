
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link_config {int pcaps; } ;
typedef int fw_port_cap32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline bool FUNC_2(const struct link_config *VAR_2)
{
 fw_port_cap32_t VAR_3, VAR_4;

 VAR_3 = FUNC_1(FUNC_0(VAR_2->pcaps));
 VAR_4 =
  VAR_3 & ~(VAR_0 | VAR_1);

 return VAR_4 != 0;
}
