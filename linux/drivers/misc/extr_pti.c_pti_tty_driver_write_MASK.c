
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tty_struct {struct pti_tty* driver_data; } ;
struct pti_tty {int * mc; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct tty_struct *VAR_1,
 const unsigned char *VAR_2, int VAR_3)
{
 struct pti_tty *VAR_4 = VAR_1->driver_data;
 if ((VAR_4 != ((void*)0)) && (VAR_4->mc != ((void*)0))) {
  FUNC_0(VAR_4->mc, (u8 *)VAR_2, VAR_3);
  return VAR_3;
 }




 else
  return -VAR_0;
}
