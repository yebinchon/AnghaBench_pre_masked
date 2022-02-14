
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvec_chip {int dummy; } ;
struct input_dev {int dummy; } ;
typedef int buf ;
struct TYPE_2__ {struct nvec_chip* nvec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 char VAR_3 ;
 char VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_0 (struct nvec_chip*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct input_dev *VAR_6, unsigned int VAR_7,
     unsigned int VAR_8, int VAR_9)
{
 struct nvec_chip *VAR_10 = VAR_5.nvec;
 char VAR_11[] = { VAR_3, VAR_4, 0 };

 if (VAR_7 == VAR_1)
  return 0;

 if (VAR_7 != VAR_0)
  return -1;

 if (VAR_8 != VAR_2)
  return -1;

 VAR_11[2] = !!VAR_9;
 FUNC_0(VAR_10, VAR_11, sizeof(VAR_11));

 return 0;
}
