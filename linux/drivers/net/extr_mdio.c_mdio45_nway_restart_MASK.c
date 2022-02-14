
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdio_if_info {int mmds; int prtad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mdio_if_info const*,int ,int ,int ,int ,int) ;

int FUNC_1(const struct mdio_if_info *VAR_5)
{
 if (!(VAR_5->mmds & VAR_3))
  return -VAR_0;

 FUNC_0(VAR_5, VAR_5->prtad, VAR_4, VAR_2,
        VAR_1, 1);
 return 0;
}
