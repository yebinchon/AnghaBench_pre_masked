
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct board_info {int flags; int addr_lock; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct board_info*) ;
 int FUNC_1 (struct board_info*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct board_info *VAR_7, int VAR_8, u8 *VAR_9)
{
 unsigned long VAR_10;

 if (VAR_7->flags & VAR_4)
  return;

 FUNC_3(&VAR_7->addr_lock);

 FUNC_5(&VAR_7->lock, VAR_10);
 FUNC_1(VAR_7, VAR_0, VAR_8);
 FUNC_1(VAR_7, VAR_2, VAR_9[1]);
 FUNC_1(VAR_7, VAR_3, VAR_9[0]);
 FUNC_1(VAR_7, VAR_1, VAR_6 | VAR_5);
 FUNC_6(&VAR_7->lock, VAR_10);

 FUNC_0(VAR_7);

 FUNC_2(1);

 FUNC_5(&VAR_7->lock, VAR_10);
 FUNC_1(VAR_7, VAR_1, 0);
 FUNC_6(&VAR_7->lock, VAR_10);

 FUNC_4(&VAR_7->addr_lock);
}
