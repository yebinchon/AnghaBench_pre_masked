
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sja1105_spi_message {int address; int read_count; int access; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int const) ;
 int FUNC_1 (void*,int *,int,int,int const) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, const struct sja1105_spi_message *VAR_2)
{
 const int VAR_3 = VAR_0;

 FUNC_0(VAR_1, 0, VAR_3);

 FUNC_1(VAR_1, &VAR_2->access, 31, 31, VAR_3);
 FUNC_1(VAR_1, &VAR_2->read_count, 30, 25, VAR_3);
 FUNC_1(VAR_1, &VAR_2->address, 24, 4, VAR_3);
}
