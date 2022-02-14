
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_size; int pi_prot_type; } ;
struct se_device {TYPE_1__ dev_attrib; int prot_length; } ;
struct rd_dev {int dummy; } ;


 struct rd_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (struct rd_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct se_device *VAR_0)
{
 struct rd_dev *VAR_1 = FUNC_0(VAR_0);

        if (!VAR_0->dev_attrib.pi_prot_type)
  return 0;

 return FUNC_1(VAR_1, VAR_0->prot_length,
       VAR_0->dev_attrib.block_size);
}
