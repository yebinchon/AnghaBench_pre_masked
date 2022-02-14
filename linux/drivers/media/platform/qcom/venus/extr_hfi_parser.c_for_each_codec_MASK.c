
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venus_caps {scalar_t__ domain; scalar_t__ codec; scalar_t__ valid; } ;
typedef int (* func ) (struct venus_caps*,void*,unsigned int) ;



__attribute__((used)) static void FUNC_0(struct venus_caps *VAR_0, unsigned int VAR_1,
      u32 VAR_2, u32 VAR_3, func VAR_4, void *VAR_5,
      unsigned int VAR_6)
{
 struct venus_caps *VAR_7;
 unsigned int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = &VAR_0[VAR_8];
  if (VAR_7->valid && VAR_7->domain == VAR_3)
   continue;
  if (VAR_7->codec & VAR_2 && VAR_7->domain == VAR_3)
   VAR_4(VAR_7, VAR_5, VAR_6);
 }
}
