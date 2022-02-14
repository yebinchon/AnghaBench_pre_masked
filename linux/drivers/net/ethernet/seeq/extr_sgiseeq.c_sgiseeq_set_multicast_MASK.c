
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgiseeq_private {unsigned char mode; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 struct sgiseeq_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_5)
{
 struct sgiseeq_private *VAR_6 = FUNC_1(VAR_5);
 unsigned char VAR_7 = VAR_6->mode;

 if(VAR_5->flags & VAR_1)
  VAR_6->mode = VAR_2;
 else if ((VAR_5->flags & VAR_0) || !FUNC_0(VAR_5))
  VAR_6->mode = VAR_4;
 else
  VAR_6->mode = VAR_3;





 if (VAR_7 != VAR_6->mode)
  FUNC_2(VAR_5);
}
