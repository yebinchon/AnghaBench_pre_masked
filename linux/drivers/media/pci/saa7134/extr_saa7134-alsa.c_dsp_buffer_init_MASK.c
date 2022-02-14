
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bufsize; } ;
struct saa7134_dev {TYPE_1__ dmasound; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct saa7134_dev*,int) ;

__attribute__((used)) static int FUNC_2(struct saa7134_dev *VAR_2)
{
 int VAR_3;

 FUNC_0(!VAR_2->dmasound.bufsize);

 VAR_3 = FUNC_1(VAR_2,
          (VAR_2->dmasound.bufsize + VAR_1) >> VAR_0);
 if (0 != VAR_3)
  return VAR_3;
 return 0;
}
