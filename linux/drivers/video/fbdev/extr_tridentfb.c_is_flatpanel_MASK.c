
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int chip_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct tridentfb_par*,int ) ;

__attribute__((used)) static int FUNC_2(struct tridentfb_par *VAR_3)
{
 if (VAR_2)
  return 1;
 if (VAR_1 || !FUNC_0(VAR_3->chip_id))
  return 0;
 return (FUNC_1(VAR_3, VAR_0) & 0x10) ? 1 : 0;
}
