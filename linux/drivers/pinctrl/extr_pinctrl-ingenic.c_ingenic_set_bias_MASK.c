
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ingenic_pinctrl {scalar_t__ version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ingenic_pinctrl*,unsigned int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct ingenic_pinctrl *VAR_3,
  unsigned int VAR_4, bool VAR_5)
{
 if (VAR_3->version >= VAR_0)
  FUNC_0(VAR_3, VAR_4, VAR_2, !VAR_5);
 else
  FUNC_0(VAR_3, VAR_4, VAR_1, !VAR_5);
}
