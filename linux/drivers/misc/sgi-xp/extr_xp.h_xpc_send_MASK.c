
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* send ) (short,int,int ,void*,int ) ;} ;


 int FUNC_0 (short,int,int ,void*,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static inline enum xp_retval
FUNC_1(short VAR_2, int VAR_3, u32 VAR_4, void *VAR_5,
  u16 VAR_6)
{
 if (!VAR_1.send)
  return VAR_0;

 return VAR_1.send(VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6);
}
