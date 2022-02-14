
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bh1770_chip {int lux_data_raw; } ;


 int FUNC_0 (struct bh1770_chip*) ;
 int FUNC_1 (struct bh1770_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct bh1770_chip *VAR_0)
{
 FUNC_0(VAR_0);
 return FUNC_1(VAR_0, VAR_0->lux_data_raw);
}
