
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rio_dev {scalar_t__ em_efptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int,...) ;
 int FUNC_3 (struct rio_dev*) ;
 int FUNC_4 (struct rio_dev*,scalar_t__,int*) ;
 int FUNC_5 (struct rio_dev*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_6(struct rio_dev *VAR_4, u8 VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 FUNC_4(VAR_4,
  VAR_4->em_efptr + VAR_3, &VAR_8);
 if (VAR_8) {

  if (VAR_8 & VAR_1) {

   FUNC_4(VAR_4,
     VAR_0, &VAR_6);

   FUNC_2("RIO: %s Implementation Specific LTL errors" " 0x%x @(0x%x)\n",

     FUNC_3(VAR_4), VAR_8, VAR_6);


   FUNC_5(VAR_4, VAR_0, 0);

  }
 }

 FUNC_4(VAR_4,
  VAR_4->em_efptr + FUNC_1(VAR_5), &VAR_7);
 if (VAR_7) {

  if (VAR_7 & VAR_2) {



   FUNC_4(VAR_4,
     FUNC_0(VAR_5), &VAR_6);

   FUNC_2("RIO: %s Implementation Specific Port" " errors 0x%x\n", FUNC_3(VAR_4), VAR_6);



   FUNC_5(VAR_4,
     FUNC_0(VAR_5), 0);
  }
 }

 return 0;
}
