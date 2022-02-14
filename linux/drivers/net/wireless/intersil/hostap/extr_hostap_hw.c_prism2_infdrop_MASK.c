
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct net_device*,int ,int ,int *,int ) ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_2 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5)
{
 static unsigned long VAR_6 = 0;

 FUNC_0(VAR_0, "%s: INFDROP event\n", VAR_5->name);






 if (!VAR_6 || FUNC_2(VAR_4, VAR_6 + VAR_3)) {
  FUNC_1(VAR_5, VAR_1,
         VAR_2, ((void*)0), 0);
  VAR_6 = VAR_4;
 }
}
