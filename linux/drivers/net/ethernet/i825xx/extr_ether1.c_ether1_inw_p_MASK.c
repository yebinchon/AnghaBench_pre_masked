
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 unsigned short FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static inline unsigned short
FUNC_4 (struct net_device *VAR_2, int VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 unsigned short VAR_6;

 if (VAR_4)
  FUNC_1 (VAR_5);

 FUNC_3(VAR_3 >> 12, VAR_1);
 VAR_6 = FUNC_2(VAR_0 + ((VAR_3 & 4095) << 1));
 if (VAR_4)
  FUNC_0 (VAR_5);
 return VAR_6;
}
