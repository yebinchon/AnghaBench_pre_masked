
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,char*,int,int ) ;
 int FUNC_1 (int,int ,void*,int) ;
 int FUNC_2 (int,int,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5, int VAR_6,
        int VAR_7, void *VAR_8, int VAR_9)
{
 int VAR_10 = VAR_5->base_addr, VAR_11 = 512 * VAR_6 + VAR_7;


 FUNC_2((VAR_11 >> 8) | VAR_4 | VAR_0,
      VAR_10, VAR_2);
 FUNC_2(VAR_11 & 0xff, VAR_10, VAR_3);


 FUNC_0(VAR_5, "insb", VAR_9,
      FUNC_1(VAR_10, VAR_1, VAR_8, VAR_9));
}
