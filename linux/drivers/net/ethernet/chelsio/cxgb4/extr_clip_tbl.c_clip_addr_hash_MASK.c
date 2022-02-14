
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct clip_tbl {int dummy; } ;


 unsigned int FUNC_0 (struct clip_tbl*,int const*) ;
 unsigned int FUNC_1 (struct clip_tbl*,int const*) ;

__attribute__((used)) static unsigned int FUNC_2(struct clip_tbl *VAR_0, const u32 *VAR_1,
       u8 VAR_2)
{
 return VAR_2 ? FUNC_1(VAR_0, VAR_1) :
   FUNC_0(VAR_0, VAR_1);
}
