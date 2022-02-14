
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isi_board {unsigned long base; int flags; int card_lock; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,unsigned long) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct isi_board *VAR_0)
{
 unsigned long VAR_1 = VAR_0->base;
 unsigned int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < 10; VAR_2++) {
  FUNC_3(&VAR_0->card_lock, VAR_0->flags);
  for (VAR_3 = 0; VAR_3 < 10; VAR_3++) {
   if (FUNC_0(VAR_1 + 0xe) & 0x1)
    return 1;
   FUNC_5(10);
  }
  FUNC_4(&VAR_0->card_lock, VAR_0->flags);
  FUNC_1(10);
 }
 FUNC_2("Failed to lock Card (0x%lx)\n", VAR_0->base);

 return 0;
}
