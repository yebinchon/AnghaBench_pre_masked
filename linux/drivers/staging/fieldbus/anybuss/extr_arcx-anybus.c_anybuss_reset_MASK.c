
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller_priv {scalar_t__ common_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct controller_priv*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct controller_priv *VAR_4,
    unsigned long VAR_5, bool VAR_6)
{
 if (VAR_5 >= 2)
  return -VAR_3;
 if (VAR_4->common_reset)
  FUNC_0(VAR_4, VAR_0, VAR_6);
 else
  FUNC_0(VAR_4, VAR_5 ? VAR_2 : VAR_1, VAR_6);
 return 0;
}
