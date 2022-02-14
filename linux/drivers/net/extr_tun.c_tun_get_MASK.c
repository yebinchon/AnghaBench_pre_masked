
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_struct {int dev; } ;
struct tun_file {int tun; } ;


 int FUNC_0 (int ) ;
 struct tun_struct* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct tun_struct *FUNC_4(struct tun_file *VAR_0)
{
 struct tun_struct *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0->tun);
 if (VAR_1)
  FUNC_0(VAR_1->dev);
 FUNC_3();

 return VAR_1;
}
