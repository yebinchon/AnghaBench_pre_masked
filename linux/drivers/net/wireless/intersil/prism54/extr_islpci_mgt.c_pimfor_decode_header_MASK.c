
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; scalar_t__ oid; scalar_t__ length; } ;
typedef TYPE_1__ pimfor_header_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static pimfor_header_t *
FUNC_2(void *VAR_2, int VAR_3)
{
 pimfor_header_t *VAR_4 = VAR_2;

 while ((void *) VAR_4 < VAR_2 + VAR_3) {
  if (VAR_4->flags & VAR_1) {
   FUNC_1(&VAR_4->oid);
   FUNC_1(&VAR_4->length);
  } else {
   FUNC_0(&VAR_4->oid);
   FUNC_0(&VAR_4->length);
  }
  if (VAR_4->oid != VAR_0)
   return VAR_4;
  VAR_4++;
 }
 return ((void*)0);
}
