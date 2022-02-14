
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_devspec; } ;
union dwc3_event {int depevt; int devt; TYPE_1__ type; } ;
typedef int u32 ;


 char const* FUNC_0 (char*,size_t,int *,int ) ;
 char const* FUNC_1 (char*,size_t,int *) ;

__attribute__((used)) static inline const char *FUNC_2(char *VAR_0, size_t VAR_1, u32 VAR_2,
  u32 VAR_3)
{
 const union dwc3_event VAR_4 = (union dwc3_event) VAR_2;

 if (VAR_4.type.is_devspec)
  return FUNC_1(VAR_0, VAR_1, &VAR_4.devt);
 else
  return FUNC_0(VAR_0, VAR_1, &VAR_4.depevt, VAR_3);
}
