
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_channel {int mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct gb_channel*) ;
 int FUNC_1 (struct gb_channel*) ;
 int FUNC_2 (struct gb_channel*) ;

__attribute__((used)) static void FUNC_3(struct gb_channel *VAR_1)
{

 if (!FUNC_2(VAR_1)) {
  FUNC_1(VAR_1);
  return;
 }

 if (VAR_1->mode & VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
