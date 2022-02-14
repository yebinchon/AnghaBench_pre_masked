
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf8563 {int client; int rtc; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pcf8563* FUNC_0 (void*) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct pcf8563 *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;
 char VAR_8;

 VAR_7 = FUNC_1(VAR_6->client, ((void*)0), &VAR_8);
 if (VAR_7)
  return VAR_1;

 if (VAR_8) {
  FUNC_3(VAR_6->rtc, 1, VAR_3 | VAR_2);
  FUNC_2(VAR_6->client, 1);
  return VAR_0;
 }

 return VAR_1;
}
