
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint8_t ;
struct adp5520_chip {int client; int notifier_list; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int *,unsigned int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 struct adp5520_chip *VAR_9 = VAR_8;
 unsigned int VAR_10;
 uint8_t VAR_11;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_9->client, VAR_4, &VAR_11);
 if (VAR_12)
  goto out;

 VAR_10 = VAR_11 & (VAR_5 | VAR_0 |
  VAR_1 | VAR_3 | VAR_2);

 FUNC_2(&VAR_9->notifier_list, VAR_10, ((void*)0));

 FUNC_0(VAR_9->client, VAR_4, VAR_10);

out:
 return VAR_6;
}
