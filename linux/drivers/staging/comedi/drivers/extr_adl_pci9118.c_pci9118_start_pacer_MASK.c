
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int pacer; } ;


 int FUNC_0 (int ,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_0, int VAR_1)
{
 if (VAR_1 == 1 || VAR_1 == 2 || VAR_1 == 4)
  FUNC_0(VAR_0->pacer, 1, 2, 1);
}
