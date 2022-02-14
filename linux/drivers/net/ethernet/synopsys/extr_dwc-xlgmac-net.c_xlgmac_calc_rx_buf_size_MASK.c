
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (unsigned int,int ,int ) ;
 int FUNC_1 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10;

 if (VAR_9 > VAR_5) {
  FUNC_1(VAR_8, "MTU exceeds maximum supported value\n");
  return -VAR_0;
 }

 VAR_10 = VAR_9 + VAR_2 + VAR_1 + VAR_4;
 VAR_10 = FUNC_0(VAR_10, VAR_7, VAR_3);

 VAR_10 = (VAR_10 + VAR_6 - 1) &
        ~(VAR_6 - 1);

 return VAR_10;
}
