
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sas_expander_device {int level; } ;
struct domain_device {TYPE_2__* port; int rphy; } ;
struct TYPE_3__ {int max_level; } ;
struct TYPE_4__ {TYPE_1__ disc; } ;


 int FUNC_0 () ;
 struct sas_expander_device* FUNC_1 (int ) ;
 int FUNC_2 (struct domain_device*,int) ;
 int FUNC_3 (struct domain_device*,int) ;

__attribute__((used)) static int FUNC_4(struct domain_device *VAR_0)
{
 int VAR_1;
 struct sas_expander_device *VAR_2 = FUNC_1(VAR_0->rphy);
 int VAR_3 = VAR_2->level+1;

 VAR_1 = FUNC_3(VAR_0, -1);
 if (VAR_1)
  goto out;
 do {
  VAR_1 = FUNC_2(VAR_0, VAR_3);
  FUNC_0();
  VAR_3 += 1;
 } while (VAR_3 <= VAR_0->port->disc.max_level);
out:
 return VAR_1;
}
