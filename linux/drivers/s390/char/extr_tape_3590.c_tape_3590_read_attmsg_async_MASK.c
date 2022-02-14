
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_request {char* cpdata; scalar_t__ cpaddr; int op; } ;
struct tape_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct tape_request*) ;
 int VAR_0 ;
 int VAR_1 ;
 char VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct tape_request* FUNC_1 (int,int) ;
 int FUNC_2 (scalar_t__,int ,int,char*) ;
 int FUNC_3 (scalar_t__,int ,int ,int *) ;
 int FUNC_4 (struct tape_device*,struct tape_request*) ;

__attribute__((used)) static void FUNC_5(struct tape_device *VAR_6)
{
 struct tape_request *VAR_7;
 char *VAR_8;

 VAR_7 = FUNC_1(3, 4096);
 if (FUNC_0(VAR_7))
  return;
 VAR_7->op = VAR_5;
 VAR_8 = VAR_7->cpdata;
 VAR_8[0] = VAR_2;
 VAR_8[6] = VAR_3;
 FUNC_2(VAR_7->cpaddr, VAR_1, 12, VAR_8);
 FUNC_2(VAR_7->cpaddr + 1, VAR_4, 4096 - 12, VAR_8 + 12);
 FUNC_3(VAR_7->cpaddr + 2, VAR_0, 0, ((void*)0));
 FUNC_4(VAR_6, VAR_7);
}
