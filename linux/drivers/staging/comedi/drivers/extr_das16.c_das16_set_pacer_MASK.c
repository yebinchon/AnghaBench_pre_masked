
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int pacer; } ;


 int FUNC_0 (int ,unsigned int*,unsigned int) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct comedi_device *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2)
{
 FUNC_0(VAR_0->pacer, &VAR_1, VAR_2);
 FUNC_2(VAR_0->pacer);
 FUNC_1(VAR_0->pacer, 1, 2, 1);

 return VAR_1;
}
