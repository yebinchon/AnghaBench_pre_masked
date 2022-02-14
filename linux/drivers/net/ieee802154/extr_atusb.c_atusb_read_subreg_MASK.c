
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atusb {int dummy; } ;


 int FUNC_0 (struct atusb*,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct atusb *VAR_0,
        unsigned int VAR_1, unsigned int VAR_2,
        unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1);
 VAR_4 = (VAR_4 & VAR_2) >> VAR_3;

 return VAR_4;
}
