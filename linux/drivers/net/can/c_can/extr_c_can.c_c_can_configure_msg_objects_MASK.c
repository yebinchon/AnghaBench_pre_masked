
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (struct net_device*,int ,int,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6)
{
 int VAR_7;


 for (VAR_7 = VAR_0; VAR_7 <= VAR_2; VAR_7++)
  FUNC_0(VAR_6, VAR_5, VAR_7);


 for (VAR_7 = VAR_0; VAR_7 < VAR_1; VAR_7++)
  FUNC_1(VAR_6, VAR_5, VAR_7, 0, 0, VAR_3);

 FUNC_1(VAR_6, VAR_5, VAR_1, 0, 0,
       VAR_4);
}
