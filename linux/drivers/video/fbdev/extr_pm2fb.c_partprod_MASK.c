
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ width; scalar_t__ pp; } ;


 int FUNC_0 (char*,scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0[VAR_2].width && VAR_0[VAR_2].width != VAR_1; VAR_2++)
  ;
 if (VAR_0[VAR_2].width == 0)
  FUNC_0("invalid width %u\n", VAR_1);
 return VAR_0[VAR_2].pp;
}
