
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_rtc {TYPE_1__* type; } ;
struct TYPE_2__ {int (* lock ) (struct omap_rtc*) ;int (* unlock ) (struct omap_rtc*) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct omap_rtc*,scalar_t__,int ) ;
 int FUNC_1 (struct omap_rtc*) ;
 int FUNC_2 (struct omap_rtc*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, unsigned int VAR_2, void *VAR_3,
      size_t VAR_4)
{
 struct omap_rtc *VAR_5 = VAR_1;
 u32 *VAR_6 = VAR_3;
 int VAR_7;

 VAR_5->type->unlock(VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_4 / 4; VAR_7++)
  FUNC_0(VAR_5,
      VAR_0 + VAR_2 + (VAR_7 * 4), VAR_6[VAR_7]);
 VAR_5->type->lock(VAR_5);

 return 0;
}
