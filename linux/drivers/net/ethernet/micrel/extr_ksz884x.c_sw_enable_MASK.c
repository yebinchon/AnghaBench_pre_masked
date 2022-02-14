
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ksz_hw {int dev_count; scalar_t__ io; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ksz_hw*,int,int ) ;
 int FUNC_1 (struct ksz_hw*,int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ksz_hw *VAR_8, int VAR_9)
{
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  if (VAR_8->dev_count > 1) {

   FUNC_1(VAR_8, VAR_10,
    VAR_0 | (1 << VAR_10));
   FUNC_0(VAR_8, VAR_10, VAR_4);
  } else {
   FUNC_1(VAR_8, VAR_10, VAR_3);
   FUNC_0(VAR_8, VAR_10, VAR_5);
  }
 }
 if (VAR_8->dev_count > 1)
  FUNC_0(VAR_8, VAR_7, VAR_6);
 else
  FUNC_0(VAR_8, VAR_7, VAR_5);

 if (VAR_9)
  VAR_9 = VAR_1;
 FUNC_2(VAR_9, VAR_8->io + VAR_2);
}
