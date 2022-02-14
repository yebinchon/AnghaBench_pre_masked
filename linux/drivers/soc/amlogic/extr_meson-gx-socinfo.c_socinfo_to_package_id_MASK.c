
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {unsigned int major_id; unsigned int pack_id; unsigned int pack_mask; char const* name; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static const char *FUNC_3(u32 VAR_1)
{
 unsigned int VAR_2 = FUNC_2(VAR_1);
 unsigned int VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 for (VAR_4 = 0 ; VAR_4 < FUNC_0(VAR_0) ; ++VAR_4) {
  if (VAR_0[VAR_4].major_id == VAR_3 &&
      VAR_0[VAR_4].pack_id ==
    (VAR_2 & VAR_0[VAR_4].pack_mask))
   return VAR_0[VAR_4].name;
 }

 return "Unknown";
}
