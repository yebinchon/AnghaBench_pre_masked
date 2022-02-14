
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct domain_device {int port; int sas_addr; scalar_t__ parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,char*,int ,int) ;
 int FUNC_2 (int ,struct domain_device*) ;

__attribute__((used)) static inline void FUNC_3(struct domain_device *VAR_0, const char *VAR_1, int VAR_2)
{
 FUNC_1("%s: for %s device %16llx returned %d\n",
  VAR_1, VAR_0->parent ? "exp-attached" :
  "direct-attached",
  FUNC_0(VAR_0->sas_addr), VAR_2);
 FUNC_2(VAR_0->port, VAR_0);
}
