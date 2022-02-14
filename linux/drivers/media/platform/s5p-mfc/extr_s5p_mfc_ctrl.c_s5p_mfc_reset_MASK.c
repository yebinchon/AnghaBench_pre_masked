
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_mfc_dev {scalar_t__ risc_on; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct s5p_mfc_dev*) ;
 int FUNC_1 (struct s5p_mfc_dev*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*) ;
 unsigned int FUNC_6 (struct s5p_mfc_dev*,int ) ;
 int FUNC_7 (struct s5p_mfc_dev*,int,scalar_t__) ;
 unsigned long FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_10 (unsigned long,unsigned long) ;

int FUNC_11(struct s5p_mfc_dev *VAR_12)
{
 unsigned int VAR_13;
 unsigned long VAR_14;
 int VAR_15;

 FUNC_3();

 if (FUNC_0(VAR_12)) {

  FUNC_7(VAR_12, 0, VAR_8);
  FUNC_7(VAR_12, 0, VAR_3);
  FUNC_7(VAR_12, 0, VAR_2);

  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
   FUNC_7(VAR_12, 0, VAR_6 + (VAR_15*4));


  if (VAR_12->risc_on)
   if (FUNC_9(VAR_12))
    return -VAR_0;




  if ((!VAR_12->risc_on) || (!FUNC_1(VAR_12)))
   FUNC_7(VAR_12, 0, VAR_9);

  FUNC_7(VAR_12, 0x1FFF, VAR_5);
  FUNC_7(VAR_12, 0, VAR_5);
 } else {


  FUNC_7(VAR_12, 0x3f6, VAR_10);

  FUNC_7(VAR_12, 0x3e2, VAR_10);
  FUNC_2(10);

  VAR_14 = VAR_11 + FUNC_8(VAR_1);

  do {
   if (FUNC_10(VAR_11, VAR_14)) {
    FUNC_5("Timeout while resetting MFC\n");
    return -VAR_0;
   }

   VAR_13 = FUNC_6(VAR_12, VAR_4);

  } while (VAR_13 & 0x3);

  FUNC_7(VAR_12, 0x0, VAR_10);
  FUNC_7(VAR_12, 0x3fe, VAR_10);
 }

 FUNC_4();
 return 0;
}
