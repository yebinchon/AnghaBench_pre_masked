
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv88e6xxx_chip {TYPE_1__* info; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;
typedef enum dsa_tag_protocol { ____Placeholder_dsa_tag_protocol } dsa_tag_protocol ;
struct TYPE_2__ {int tag_protocol; } ;



__attribute__((used)) static enum dsa_tag_protocol FUNC_0(struct dsa_switch *VAR_0,
       int VAR_1)
{
 struct mv88e6xxx_chip *VAR_2 = VAR_0->priv;

 return VAR_2->info->tag_protocol;
}
