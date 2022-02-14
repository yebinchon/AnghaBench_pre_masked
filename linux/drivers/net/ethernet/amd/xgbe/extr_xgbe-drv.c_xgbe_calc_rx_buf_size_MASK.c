
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_6, unsigned int VAR_7)
{
 unsigned int VAR_8;

 VAR_8 = VAR_7 + VAR_1 + VAR_0 + VAR_3;
 VAR_8 = FUNC_0(VAR_8, VAR_5, VAR_2);

 VAR_8 = (VAR_8 + VAR_4 - 1) &
        ~(VAR_4 - 1);

 return VAR_8;
}
