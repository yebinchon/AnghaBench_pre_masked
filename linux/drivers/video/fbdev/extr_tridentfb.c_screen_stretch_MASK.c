
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {scalar_t__ chip_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tridentfb_par*,int ) ;
 int FUNC_1 (struct tridentfb_par*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct tridentfb_par *VAR_4)
{
 if (VAR_4->chip_id != VAR_1)
  FUNC_1(VAR_4, VAR_0, 0);
 else
  FUNC_1(VAR_4, VAR_0, 8);
 FUNC_1(VAR_4, VAR_3, (FUNC_0(VAR_4, VAR_3) & 0x7C) | 1);
 FUNC_1(VAR_4, VAR_2, (FUNC_0(VAR_4, VAR_2) & 0x7C) | 1);
}
