
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt8500lcd_info {scalar_t__ regbase; int wait; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct vt8500lcd_info *VAR_3 = VAR_2;

 if (FUNC_0(VAR_3->regbase + 0x38) & (1 << 3))
  FUNC_1(&VAR_3->wait);

 FUNC_2(0xffffffff, VAR_3->regbase + 0x38);
 return VAR_0;
}
