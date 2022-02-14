
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int flags; int nwin; TYPE_1__* win; } ;
typedef TYPE_2__ cistpl_io_t ;
struct TYPE_4__ {int len; scalar_t__ base; } ;


 int VAR_0 ;

__attribute__((used)) static u_char *FUNC_0(u_char *VAR_1, u_char *VAR_2, cistpl_io_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_1 == VAR_2)
  return ((void*)0);
 VAR_3->flags = *VAR_1;

 if (!(*VAR_1 & 0x80)) {
  VAR_3->nwin = 1;
  VAR_3->win[0].base = 0;
  VAR_3->win[0].len = (1 << (VAR_3->flags & VAR_0));
  return VAR_1+1;
 }

 if (++VAR_1 == VAR_2)
  return ((void*)0);
 VAR_3->nwin = (*VAR_1 & 0x0f) + 1;
 VAR_6 = (*VAR_1 & 0x30) >> 4;
 if (VAR_6 == 3)
  VAR_6++;
 VAR_7 = (*VAR_1 & 0xc0) >> 6;
 if (VAR_7 == 3)
  VAR_7++;
 VAR_1++;

 for (VAR_4 = 0; VAR_4 < VAR_3->nwin; VAR_4++) {
  VAR_3->win[VAR_4].base = 0;
  VAR_3->win[VAR_4].len = 1;
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++, VAR_1++) {
   if (VAR_1 == VAR_2)
    return ((void*)0);
   VAR_3->win[VAR_4].base += *VAR_1 << (VAR_5*8);
  }
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++, VAR_1++) {
   if (VAR_1 == VAR_2)
    return ((void*)0);
   VAR_3->win[VAR_4].len += *VAR_1 << (VAR_5*8);
  }
 }
 return VAR_1;
}
