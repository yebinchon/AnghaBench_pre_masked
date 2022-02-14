
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct ca8210_priv* private_data; } ;
struct ca8210_priv {int spi; } ;



 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static long FUNC_1(
 struct file *VAR_0,
 unsigned int VAR_1,
 unsigned long VAR_2
)
{
 struct ca8210_priv *VAR_3 = VAR_0->private_data;

 switch (VAR_1) {
 case 128:
  FUNC_0(VAR_3->spi, VAR_2);
  break;
 default:
  break;
 }
 return 0;
}
