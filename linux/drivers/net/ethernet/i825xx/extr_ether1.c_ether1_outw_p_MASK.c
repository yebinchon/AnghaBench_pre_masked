
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (unsigned short,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_4 (struct net_device *VAR_2, unsigned short VAR_3, int VAR_4, int VAR_5)
{
 unsigned long VAR_6;

 if (VAR_5)
  FUNC_1 (VAR_6);

 FUNC_2(VAR_4 >> 12, VAR_1);
 FUNC_3(VAR_3, VAR_0 + ((VAR_4 & 4095) << 1));
 if (VAR_5)
  FUNC_0 (VAR_6);
}
