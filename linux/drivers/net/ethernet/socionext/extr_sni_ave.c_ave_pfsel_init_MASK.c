
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned char* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ,unsigned char*,int) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (unsigned char*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_5)
{
 unsigned char VAR_6[VAR_4];
 int VAR_7;

 FUNC_3(VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
  FUNC_2(VAR_5, VAR_7);


 FUNC_1(VAR_5, VAR_1, 0);


 FUNC_0(VAR_5, VAR_2, VAR_5->dev_addr, 6);


 FUNC_0(VAR_5, VAR_0, VAR_6, 6);
}
