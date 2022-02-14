
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct renesas_usb3 {scalar_t__ connection_state; int lock; scalar_t__ start_to_connect; int role_sw_by_connector; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct renesas_usb3*) ;
 int FUNC_3 (struct renesas_usb3*,int) ;
 int FUNC_4 (struct renesas_usb3*,int) ;

__attribute__((used)) static void FUNC_5(struct renesas_usb3 *VAR_1, bool VAR_2, bool VAR_3)
{
 unsigned long VAR_4;

 FUNC_0(&VAR_1->lock, VAR_4);
 if (!VAR_1->role_sw_by_connector ||
     VAR_1->connection_state != VAR_0) {
  FUNC_3(VAR_1, VAR_2);
  FUNC_4(VAR_1, VAR_3);
 }

 if ((!VAR_2 && VAR_3) || VAR_1->start_to_connect)
  FUNC_2(VAR_1);
 FUNC_1(&VAR_1->lock, VAR_4);
}
