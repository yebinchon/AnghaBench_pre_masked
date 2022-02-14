
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int16_t ;
struct TYPE_2__ {int comm; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (unsigned int,void*,int) ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char const*,int ) ;

__attribute__((used)) static inline void
FUNC_4(unsigned int VAR_4, void *VAR_5, int16_t *VAR_6,
      const char *VAR_7)
{
 unsigned VAR_8 = 1;

 do {
  FUNC_0(FUNC_1(VAR_4, VAR_5, 1));
  if (*VAR_6 == VAR_1)
   FUNC_2(VAR_8++);
 } while ((*VAR_6 == VAR_1) && (VAR_8 < VAR_2));

 if (VAR_8 >= VAR_2) {
  FUNC_3("%s: %s eagain grant\n", VAR_7, VAR_3->comm);
  *VAR_6 = VAR_0;
 }
}
