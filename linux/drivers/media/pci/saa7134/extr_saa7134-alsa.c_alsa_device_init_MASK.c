
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct saa7134_dev* priv_data; } ;
struct saa7134_dev {int nr; TYPE_1__ dmasound; } ;


 int FUNC_0 (struct saa7134_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct saa7134_dev *VAR_0)
{
 VAR_0->dmasound.priv_data = VAR_0;
 FUNC_0(VAR_0,VAR_0->nr);
 return 1;
}
