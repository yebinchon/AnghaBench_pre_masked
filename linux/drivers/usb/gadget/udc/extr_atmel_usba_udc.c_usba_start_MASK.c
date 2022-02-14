
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_udc {int lock; scalar_t__ int_enb_cache; scalar_t__ suspended; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct usba_udc*) ;
 int FUNC_3 (struct usba_udc*,int) ;
 int FUNC_4 (struct usba_udc*,int) ;
 int FUNC_5 (struct usba_udc*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct usba_udc *VAR_8)
{
 unsigned long VAR_9;
 int VAR_10;

 VAR_10 = FUNC_2(VAR_8);
 if (VAR_10)
  return VAR_10;

 if (VAR_8->suspended)
  return 0;

 FUNC_0(&VAR_8->lock, VAR_9);
 FUNC_3(VAR_8, 1);
 FUNC_5(VAR_8, VAR_0, VAR_4);

 FUNC_5(VAR_8, VAR_2, 0);
 VAR_8->int_enb_cache = 0;
 FUNC_5(VAR_8, VAR_1,
  VAR_5|VAR_6
  |VAR_3|VAR_7);

 FUNC_4(VAR_8, VAR_5);
 FUNC_1(&VAR_8->lock, VAR_9);

 return 0;
}
