
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsp_gpio {int dev; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int,int,int) ;
 int FUNC_1 (struct nsp_gpio*,int ,int ,unsigned int,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct nsp_gpio *VAR_3, unsigned VAR_4,
        bool VAR_5, bool VAR_6)
{
 unsigned long VAR_7;

 FUNC_2(&VAR_3->lock, VAR_7);
 FUNC_1(VAR_3, VAR_0, VAR_1, VAR_4, VAR_6);
 FUNC_1(VAR_3, VAR_0, VAR_2, VAR_4, VAR_5);
 FUNC_3(&VAR_3->lock, VAR_7);

 FUNC_0(VAR_3->dev, "gpio:%u set pullup:%d pulldown: %d\n",
  VAR_4, VAR_5, VAR_6);
 return 0;
}
