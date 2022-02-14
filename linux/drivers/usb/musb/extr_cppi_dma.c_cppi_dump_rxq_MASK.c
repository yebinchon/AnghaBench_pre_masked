
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cppi_descriptor {struct cppi_descriptor* next; } ;
struct cppi_channel {struct cppi_descriptor* head; struct cppi_descriptor* last_processed; } ;


 int FUNC_0 (int,struct cppi_channel*,char const*) ;
 int FUNC_1 (char*,struct cppi_descriptor*) ;

__attribute__((used)) static void FUNC_2(int VAR_0, const char *VAR_1, struct cppi_channel *VAR_2)
{
 struct cppi_descriptor *VAR_3;

 FUNC_0(VAR_0, VAR_2, VAR_1);
 if (VAR_2->last_processed)
  FUNC_1("last", VAR_2->last_processed);
 for (VAR_3 = VAR_2->head; VAR_3; VAR_3 = VAR_3->next)
  FUNC_1("active", VAR_3);
}
