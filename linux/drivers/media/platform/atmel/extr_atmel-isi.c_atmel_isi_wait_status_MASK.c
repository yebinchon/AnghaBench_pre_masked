
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_isi {int complete; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct atmel_isi*,int ,int ) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(struct atmel_isi *VAR_5, int VAR_6)
{
 unsigned long VAR_7;




 FUNC_0(&VAR_5->complete);

 if (VAR_6) {
  FUNC_1(VAR_5, VAR_4, VAR_3);
  FUNC_1(VAR_5, VAR_1, VAR_3);
 } else {
  FUNC_1(VAR_5, VAR_4, VAR_2);
  FUNC_1(VAR_5, VAR_1, VAR_2);
 }

 VAR_7 = FUNC_3(&VAR_5->complete,
   FUNC_2(500));
 if (VAR_7 == 0)
  return -VAR_0;

 return 0;
}
