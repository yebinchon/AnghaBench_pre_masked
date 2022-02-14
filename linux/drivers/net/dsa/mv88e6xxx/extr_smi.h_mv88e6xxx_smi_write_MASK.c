
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mv88e6xxx_chip {TYPE_1__* smi_ops; } ;
struct TYPE_2__ {int (* write ) (struct mv88e6xxx_chip*,int,int,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int,int,int ) ;

__attribute__((used)) static inline int FUNC_1(struct mv88e6xxx_chip *VAR_1,
          int VAR_2, int VAR_3, u16 VAR_4)
{
 if (VAR_1->smi_ops && VAR_1->smi_ops->write)
  return VAR_1->smi_ops->write(VAR_1, VAR_2, VAR_3, VAR_4);

 return -VAR_0;
}
