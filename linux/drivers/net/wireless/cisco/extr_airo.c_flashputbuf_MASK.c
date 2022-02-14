
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct airo_info {int* flash; scalar_t__ pciaux; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct airo_info*,int ,int) ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__,int*,int) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct airo_info *VAR_6){
 int VAR_7;


 if (FUNC_2(VAR_3,&VAR_6->flags))
  FUNC_1(VAR_6->pciaux + 0x8000, VAR_6->flash, VAR_4);
 else {
  FUNC_0(VAR_6,VAR_2,0x100);
  FUNC_0(VAR_6,VAR_1,0);

  for(VAR_7=0;VAR_7 != VAR_4 / 2;VAR_7++){
   FUNC_0(VAR_6,VAR_0,VAR_6->flash[VAR_7] & 0xffff);
  }
 }
 FUNC_0(VAR_6,VAR_5,0x8000);

 return 0;
}
