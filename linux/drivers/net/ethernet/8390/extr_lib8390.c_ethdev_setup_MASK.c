
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ei_device {int msg_enable; int page_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 struct ei_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_4)
{
 struct ei_device *VAR_5 = FUNC_1(VAR_4);

 if ((VAR_1 & VAR_0) && (VAR_3++ == 0))
  FUNC_2("%s", VAR_2);

 FUNC_0(VAR_4);

 FUNC_3(&VAR_5->page_lock);

 VAR_5->msg_enable = VAR_1;
}
