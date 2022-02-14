
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* ulpWord; } ;
struct TYPE_5__ {scalar_t__ ulpStatus; TYPE_1__ un; } ;
typedef TYPE_2__ IOCB_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline int
FUNC_0(IOCB_t *VAR_4)
{
 return (VAR_4->ulpStatus == VAR_3 &&
  (VAR_4->un.ulpWord[4] == VAR_1 ||
   VAR_4->un.ulpWord[4] == VAR_0 ||
   VAR_4->un.ulpWord[4] == VAR_2));
}
