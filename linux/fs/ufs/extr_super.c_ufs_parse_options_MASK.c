
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (char*,...) ;
 char* FUNC_3 (char**,char*) ;
 int VAR_17 ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_6 (char * VAR_18, unsigned * VAR_19)
{
 char * VAR_20;

 FUNC_0("ENTER\n");

 if (!VAR_18)
  return 1;

 while ((VAR_20 = FUNC_3(&VAR_18, ",")) != ((void*)0)) {
  substring_t VAR_21[VAR_0];
  int VAR_22;
  if (!*VAR_20)
   continue;

  VAR_22 = FUNC_1(VAR_20, VAR_17, VAR_21);
  switch (VAR_22) {
  case 133:
   FUNC_4 (*VAR_19, VAR_6);
   FUNC_5 (*VAR_19, VAR_11);
   break;
  case 129:
   FUNC_4 (*VAR_19, VAR_6);
   FUNC_5 (*VAR_19, VAR_15);
   break;
  case 131:
   FUNC_4 (*VAR_19, VAR_6);
   FUNC_5 (*VAR_19, VAR_13);
   break;
  case 130:
   FUNC_4(*VAR_19, VAR_6);
   FUNC_5(*VAR_19, VAR_14);
   break;
  case 137:
   FUNC_4 (*VAR_19, VAR_6);
   FUNC_5 (*VAR_19, VAR_7);
   break;
  case 128:
   FUNC_4(*VAR_19, VAR_6);
   FUNC_5(*VAR_19, VAR_16);
   break;
  case 136:
   FUNC_4 (*VAR_19, VAR_6);
   FUNC_5 (*VAR_19, VAR_8);
   break;
  case 134:
   FUNC_4 (*VAR_19, VAR_6);
   FUNC_5 (*VAR_19, VAR_10);
   break;
  case 135:
   FUNC_4 (*VAR_19, VAR_6);
   FUNC_5 (*VAR_19, VAR_9);
   break;
  case 132:
   FUNC_4 (*VAR_19, VAR_6);
   FUNC_5 (*VAR_19, VAR_12);
   break;
  case 140:
   FUNC_4 (*VAR_19, VAR_1);
   FUNC_5 (*VAR_19, VAR_3);
   break;
  case 141:
   FUNC_4 (*VAR_19, VAR_1);
   FUNC_5 (*VAR_19, VAR_2);
   break;
  case 138:
   FUNC_4 (*VAR_19, VAR_1);
   FUNC_5 (*VAR_19, VAR_5);
   break;
  case 139:
   FUNC_2("Unable to do repair on error, will lock lock instead\n");
   FUNC_4 (*VAR_19, VAR_1);
   FUNC_5 (*VAR_19, VAR_4);
   break;
  default:
   FUNC_2("Invalid option: \"%s\" or missing value\n", VAR_20);
   return 0;
  }
 }
 return 1;
}
