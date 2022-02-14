
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,int) ;

int FUNC_3(u32 VAR_5,
        u32 VAR_6,
        u32 VAR_7,
        void *VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11 = VAR_3;
 u32 VAR_12 = VAR_7 / sizeof(u32);

 if (VAR_6 == VAR_4 && VAR_12 > 0) {




  FUNC_1("Attempt to restore checkpoint with obsolete wellknown handles\n");
  return VAR_1;
 }

 if (VAR_6 != VAR_2) {
  FUNC_0("Invalid cpt state (type=%d)\n", VAR_6);
  return VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_12 && VAR_11 == VAR_3; VAR_9++) {
  VAR_10 = ((u32 *)VAR_8)[VAR_9];
  VAR_11 = FUNC_2(VAR_5, VAR_10);
  if (VAR_11 != VAR_3)
   break;
 }
 if (VAR_11 != VAR_3)
  FUNC_0("Failed to set cpt state (type=%d) (error=%d)\n",
    VAR_6, VAR_11);

 return VAR_11;
}
