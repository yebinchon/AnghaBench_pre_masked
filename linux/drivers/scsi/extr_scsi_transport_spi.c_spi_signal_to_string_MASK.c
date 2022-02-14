
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum spi_signal_type { ____Placeholder_spi_signal_type } spi_signal_type ;
struct TYPE_3__ {int value; char const* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline const char *FUNC_1(enum spi_signal_type VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_1 == VAR_0[VAR_2].value)
   return VAR_0[VAR_2].name;
 }
 return ((void*)0);
}
