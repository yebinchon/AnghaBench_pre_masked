
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cygnus_pinctrl {struct cygnus_mux_log* mux_log; int dev; } ;
struct TYPE_2__ {unsigned int offset; unsigned int shift; scalar_t__ alt; } ;
struct cygnus_mux_log {int is_configured; TYPE_1__ mux; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cygnus_mux_log* FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct cygnus_pinctrl *VAR_5)
{
 struct cygnus_mux_log *VAR_6;
 unsigned int VAR_7, VAR_8;

 VAR_5->mux_log = FUNC_0(VAR_5->dev, VAR_0,
     sizeof(struct cygnus_mux_log),
     VAR_4);
 if (!VAR_5->mux_log)
  return -VAR_3;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   VAR_6 = &VAR_5->mux_log[VAR_7 * VAR_2
    + VAR_8];
   VAR_6->mux.offset = VAR_7 * 4;
   VAR_6->mux.shift = VAR_8 * 4;
   VAR_6->mux.alt = 0;
   VAR_6->is_configured = 0;
  }
 }

 return 0;
}
