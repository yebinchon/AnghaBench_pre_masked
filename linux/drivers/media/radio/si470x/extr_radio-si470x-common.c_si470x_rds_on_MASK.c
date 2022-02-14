
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si470x_device {int (* set_register ) (struct si470x_device*,size_t) ;int * registers; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct si470x_device*,size_t) ;

__attribute__((used)) static int FUNC_1(struct si470x_device *VAR_2)
{
 int VAR_3;


 VAR_2->registers[VAR_0] |= VAR_1;
 VAR_3 = VAR_2->set_register(VAR_2, VAR_0);
 if (VAR_3 < 0)
  VAR_2->registers[VAR_0] &= ~VAR_1;

 return VAR_3;
}
