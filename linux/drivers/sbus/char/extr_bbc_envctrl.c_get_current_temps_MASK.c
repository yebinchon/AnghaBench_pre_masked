
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bbc_cpu_temperature {scalar_t__ curr_amb_temp; scalar_t__ curr_cpu_temp; int index; int client; scalar_t__ prev_cpu_temp; scalar_t__ prev_amb_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,int ) ;
 int FUNC_1 (char*,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct bbc_cpu_temperature *VAR_2)
{
 VAR_2->prev_amb_temp = VAR_2->curr_amb_temp;
 FUNC_0(VAR_2->client,
        (unsigned char *) &VAR_2->curr_amb_temp,
        VAR_0);
 VAR_2->prev_cpu_temp = VAR_2->curr_cpu_temp;
 FUNC_0(VAR_2->client,
        (unsigned char *) &VAR_2->curr_cpu_temp,
        VAR_1);





}
